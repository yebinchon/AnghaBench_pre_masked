
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef union savefpu {int dummy; } savefpu ;
struct thread {int dummy; } ;
struct TYPE_3__ {scalar_t__ mc_fpformat; scalar_t__ mc_ownedfp; int mc_fpstate; } ;
typedef TYPE_1__ mcontext_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct thread*) ;
 int FUNC_1 (struct thread*,union savefpu*,char*,size_t) ;

__attribute__((used)) static int
FUNC_2(struct thread *VAR_7, mcontext_t *VAR_8, char *VAR_9,
    size_t VAR_10)
{
 int VAR_11;

 if (VAR_8->mc_fpformat == VAR_2)
  return (0);
 else if (VAR_8->mc_fpformat != VAR_1 &&
     VAR_8->mc_fpformat != VAR_3)
  return (VAR_0);
 else if (VAR_8->mc_ownedfp == VAR_5) {

  FUNC_0(VAR_7);
  VAR_11 = 0;
 } else if (VAR_8->mc_ownedfp == VAR_4 ||
     VAR_8->mc_ownedfp == VAR_6) {
  VAR_11 = FUNC_1(VAR_7, (union savefpu *)&VAR_8->mc_fpstate,
      VAR_9, VAR_10);
 } else
  return (VAR_0);
 return (VAR_11);
}
