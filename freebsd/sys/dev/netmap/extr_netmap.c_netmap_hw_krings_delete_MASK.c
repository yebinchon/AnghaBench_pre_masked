
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_int ;
struct netmap_adapter {int dummy; } ;
struct mbq {int dummy; } ;
struct TYPE_2__ {struct mbq rx_queue; } ;


 TYPE_1__** FUNC_0 (struct netmap_adapter*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct mbq*) ;
 int FUNC_2 (struct mbq*) ;
 int FUNC_3 (struct mbq*) ;
 int FUNC_4 (struct netmap_adapter*) ;
 size_t FUNC_5 (struct netmap_adapter*,int ) ;
 int FUNC_6 (char*,int ) ;
 size_t FUNC_7 (struct netmap_adapter*,int ) ;

void
FUNC_8(struct netmap_adapter *VAR_1)
{
 u_int VAR_2 = FUNC_5(VAR_1, VAR_0), VAR_3;

 for (VAR_3 = FUNC_7(VAR_1, VAR_0); VAR_3 < VAR_2; VAR_3++) {
  struct mbq *VAR_4 = &FUNC_0(VAR_1, VAR_0)[VAR_3]->rx_queue;
  FUNC_6("destroy sw mbq with len %d", FUNC_1(VAR_4));
  FUNC_2(VAR_4);
  FUNC_3(VAR_4);
 }
 FUNC_4(VAR_1);
}
