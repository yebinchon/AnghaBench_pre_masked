
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct thread {int dummy; } ;
struct savefpu {int dummy; } ;
struct TYPE_3__ {scalar_t__ mc_fpformat; scalar_t__ mc_ownedfp; int mc_fpstate; } ;
typedef TYPE_1__ mcontext_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct thread*) ;
 int FUNC_1 (struct thread*,struct savefpu*,char*,size_t) ;

__attribute__((used)) static int
FUNC_2(struct thread *VAR_6, mcontext_t *VAR_7, char *VAR_8,
    size_t VAR_9)
{
 int VAR_10;

 if (VAR_7->mc_fpformat == VAR_1)
  return (0);
 else if (VAR_7->mc_fpformat != VAR_2)
  return (VAR_0);
 else if (VAR_7->mc_ownedfp == VAR_4) {

  FUNC_0(VAR_6);
  VAR_10 = 0;
 } else if (VAR_7->mc_ownedfp == VAR_3 ||
     VAR_7->mc_ownedfp == VAR_5) {
  VAR_10 = FUNC_1(VAR_6, (struct savefpu *)&VAR_7->mc_fpstate,
      VAR_8, VAR_9);
 } else
  return (VAR_0);
 return (VAR_10);
}
