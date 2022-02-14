
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {int td_ucred; } ;
struct TYPE_2__ {scalar_t__* val; } ;
struct statfs {TYPE_1__ f_fsid; } ;
struct mount {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mount*,struct statfs*) ;
 int FUNC_1 (int ,struct mount*) ;
 int FUNC_2 (int ,struct mount*,struct statfs*) ;
 scalar_t__ FUNC_3 (struct thread*,int ) ;
 int FUNC_4 (struct mount*,int ) ;
 int FUNC_5 (struct mount*) ;
 int FUNC_6 (struct mount*) ;

__attribute__((used)) static int
FUNC_7(struct thread *VAR_2, struct mount *VAR_3, struct statfs *VAR_4)
{
 int VAR_5;

 if (VAR_3 == ((void*)0))
  return (VAR_0);
 VAR_5 = FUNC_4(VAR_3, 0);
 FUNC_5(VAR_3);
 if (VAR_5 != 0)
  return (VAR_5);





 VAR_5 = FUNC_0(VAR_3, VAR_4);
 if (VAR_5 != 0)
  goto out;
 if (FUNC_3(VAR_2, VAR_1)) {
  VAR_4->f_fsid.val[0] = VAR_4->f_fsid.val[1] = 0;
  FUNC_2(VAR_2->td_ucred, VAR_3, VAR_4);
 }
out:
 FUNC_6(VAR_3);
 return (VAR_5);
}
