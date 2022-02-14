
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_short ;
struct pkt {int dummy; } ;
struct TYPE_3__ {void* data; } ;
struct TYPE_4__ {TYPE_1__ u; int err_nitems; int auth_seq; int rm_vn_mode; } ;


 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int,char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int ,int ,int ) ;
 size_t VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_8 ;
 int FUNC_4 (void*,void*,unsigned int) ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 TYPE_2__ VAR_12 ;
 int FUNC_5 (int ,int ,int,struct pkt*,scalar_t__) ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;

__attribute__((used)) static void *
FUNC_6(void)
{



 if (VAR_15) {
  FUNC_1(3, ("request: sending pkt\n"));
  VAR_12.rm_vn_mode = FUNC_2(VAR_2, VAR_1, VAR_11);
  VAR_12.auth_seq = FUNC_0(0, VAR_13);
  VAR_12.err_nitems = FUNC_3((u_short)VAR_9);
  FUNC_5(VAR_14, VAR_7, -1, (struct pkt *)&VAR_12,
   VAR_4 + VAR_5);
  VAR_10++;




  FUNC_4(&VAR_12.u.data[0], VAR_6, (unsigned)VAR_8);
  VAR_13++;
  VAR_5 = 0;
  VAR_9 = 0;
  VAR_15 = 0;
 }

 VAR_5 += VAR_8;
 VAR_9++;
 if (VAR_5 + VAR_8 <= VAR_3) {
  FUNC_1(4, ("request: giving him more data\n"));




  return &VAR_12.u.data[VAR_5];
 } else {




  FUNC_1(4, ("request: into extra buffer\n"));
  if (VAR_13 == VAR_0)
   return ((void*)0);
  else {
   VAR_15 = 1;
   return VAR_6;
  }
 }
}
