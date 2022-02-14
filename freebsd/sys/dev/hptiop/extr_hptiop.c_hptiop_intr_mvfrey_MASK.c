
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int32_t ;
struct TYPE_5__ {int* outlist_cptr; int outlist_rptr; int list_count; TYPE_1__* outlist; } ;
struct TYPE_6__ {TYPE_2__ mvfrey; } ;
struct hpt_iop_hba {scalar_t__ initialized; TYPE_3__ u; } ;
struct TYPE_4__ {int val; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct hpt_iop_hba*,int) ;
 int FUNC_3 (struct hpt_iop_hba*,int) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_4(struct hpt_iop_hba * VAR_5)
{
 u_int32_t VAR_6, VAR_7, VAR_8;
 int VAR_9 = 0;

 if (VAR_5->initialized) {
  FUNC_1(VAR_4, 0);
 }

 VAR_6 = FUNC_0(VAR_2);
 if (VAR_6) {
  FUNC_1(VAR_2, VAR_6);
  if (VAR_6 & VAR_0) {
   u_int32_t VAR_10 = FUNC_0(VAR_1);
   FUNC_2(VAR_5, VAR_10);
  }
  VAR_9 = 1;
 }

 VAR_6 = FUNC_0(VAR_3);
 if (VAR_6) {
  FUNC_1(VAR_3, VAR_6);
  do {
   VAR_8 = *VAR_5->u.mvfrey.outlist_cptr & 0xff;
   while (VAR_5->u.mvfrey.outlist_rptr != VAR_8) {
    VAR_5->u.mvfrey.outlist_rptr++;
    if (VAR_5->u.mvfrey.outlist_rptr == VAR_5->u.mvfrey.list_count) {
     VAR_5->u.mvfrey.outlist_rptr = 0;
    }

    VAR_7 = VAR_5->u.mvfrey.outlist[VAR_5->u.mvfrey.outlist_rptr].val;
    FUNC_3(VAR_5, VAR_7);
    VAR_9 = 2;
   }
  } while (VAR_8 != (*VAR_5->u.mvfrey.outlist_cptr & 0xff));
 }

 if (VAR_5->initialized) {
  FUNC_1(VAR_4, 0x1010);
 }

 return VAR_9;
}
