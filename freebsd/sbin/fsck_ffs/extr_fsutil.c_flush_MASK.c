
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int b_buf; int b_cg; int b_fs; } ;
struct bufarea {int b_errs; int b_size; int b_type; scalar_t__ b_bno; TYPE_1__ b_un; scalar_t__ b_dirty; } ;




 int FUNC_0 (int,int ,scalar_t__,int) ;
 int FUNC_1 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (char*,...) ;
 struct bufarea VAR_4 ;
 int FUNC_3 (int,int ,int ) ;

void
FUNC_4(int VAR_5, struct bufarea *VAR_6)
{

 if (!VAR_6->b_dirty)
  return;
 VAR_6->b_dirty = 0;
 if (VAR_3 < 0) {
  FUNC_2("WRITING IN READ_ONLY MODE.\n");
  return;
 }
 if (VAR_6->b_errs != 0)
  FUNC_2("WRITING %sZERO'ED BLOCK %lld TO DISK\n",
      (VAR_6->b_errs == VAR_6->b_size / VAR_0) ? "" : "PARTIALLY ",
      (long long)VAR_6->b_bno);
 VAR_6->b_errs = 0;



 switch (VAR_6->b_type) {
 case 128:
  if (VAR_6 != &VAR_4)
   FUNC_2("BUFFER %p DOES NOT MATCH SBLK %p\n",
       VAR_6, &VAR_4);
  if (FUNC_3(VAR_5, VAR_6->b_un.b_fs, 0) == 0)
   VAR_2 = 1;
  break;
 case 129:
  if (FUNC_1(&VAR_1, VAR_6->b_un.b_cg) == 0)
   VAR_2 = 1;
  break;
 default:
  FUNC_0(VAR_5, VAR_6->b_un.b_buf, VAR_6->b_bno, VAR_6->b_size);
  break;
 }
}
