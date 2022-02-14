
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ ufs2_daddr_t ;
struct timespec {int dummy; } ;
struct TYPE_2__ {int b_buf; } ;
struct bufarea {scalar_t__ b_bno; size_t b_type; long b_size; TYPE_1__ b_un; int b_errs; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,scalar_t__,long) ;
 int FUNC_1 (int ,struct timespec*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ,struct bufarea*) ;
 scalar_t__ FUNC_3 (int *,scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int *,struct timespec*,int *) ;
 int FUNC_5 (struct timespec*,struct timespec*,struct timespec*) ;
 int VAR_7 ;

void
FUNC_6(struct bufarea *VAR_8, ufs2_daddr_t VAR_9, long VAR_10)
{
 ufs2_daddr_t VAR_11;
 struct timespec VAR_12, VAR_13;

 VAR_11 = FUNC_3(&VAR_6, VAR_9);
 if (VAR_8->b_bno == VAR_11) {
  VAR_7++;
 } else {
  FUNC_2(VAR_3, VAR_8);
  if (VAR_1) {
   VAR_4[VAR_8->b_type]++;
   FUNC_1(VAR_0, &VAR_12);
  }
  VAR_8->b_errs = FUNC_0(VAR_2, VAR_8->b_un.b_buf, VAR_11, VAR_10);
  if (VAR_1) {
   FUNC_1(VAR_0, &VAR_13);
   FUNC_5(&VAR_13, &VAR_12, &VAR_13);
   FUNC_4(&VAR_5[VAR_8->b_type], &VAR_13,
       &VAR_5[VAR_8->b_type]);
  }
  VAR_8->b_bno = VAR_11;
  VAR_8->b_size = VAR_10;
 }
}
