
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct ntb_transport_qp {unsigned long long qp_num; int link_is_up; int link_work; int cb_data; int (* event_handler ) (int ,int ) ;struct ntb_transport_ctx* transport; int dev; } ;
struct ntb_transport_ctx {int qp_count; scalar_t__ link_is_up; TYPE_1__* qp_vec; } ;
typedef int device_t ;
struct TYPE_2__ {scalar_t__ client_ready; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int,void (*) (void*),struct ntb_transport_qp*) ;
 int VAR_3 ;
 int FUNC_1 (int ,unsigned long long) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int,char*,unsigned long long) ;
 int FUNC_4 (int ,int ,int*) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static void
FUNC_6(void *VAR_4)
{
 struct ntb_transport_qp *VAR_5 = VAR_4;
 device_t VAR_6 = VAR_5->dev;
 struct ntb_transport_ctx *VAR_7 = VAR_5->transport;
 int VAR_8;
 uint32_t VAR_9;


 for (VAR_8 = 0, VAR_9 = 0; VAR_8 < VAR_7->qp_count; VAR_8++) {
  if (VAR_7->qp_vec[VAR_8].client_ready)
   VAR_9 |= (1 << VAR_8);
 }
 FUNC_2(VAR_6, VAR_0, VAR_9);


 FUNC_4(VAR_6, VAR_0, &VAR_9);
 if ((VAR_9 & (1ull << VAR_5->qp_num)) != 0) {
  FUNC_3(2, "qp %d link up\n", VAR_5->qp_num);
  VAR_5->link_is_up = 1;

  if (VAR_5->event_handler != ((void*)0))
   VAR_5->event_handler(VAR_5->cb_data, VAR_2);

  FUNC_1(VAR_6, 1ull << VAR_5->qp_num);
 } else if (VAR_7->link_is_up)
  FUNC_0(&VAR_5->link_work,
      VAR_1 * VAR_3 / 1000, FUNC_6, VAR_5);
}
