
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct stat32 {int dummy; } ;
struct stat {int dummy; } ;
struct freebsd32_fhstat_args {int sb; int u_fhp; } ;
struct fhandle {int dummy; } ;
typedef int sb32 ;
typedef int fhandle_t ;


 int FUNC_0 (struct stat*,struct stat32*) ;
 int FUNC_1 (int ,struct fhandle*,int) ;
 int FUNC_2 (struct stat32*,int ,int) ;
 int FUNC_3 (struct thread*,struct fhandle,struct stat*) ;

int
FUNC_4(struct thread *VAR_0, struct freebsd32_fhstat_args *VAR_1)
{
 struct stat VAR_2;
 struct stat32 VAR_3;
 struct fhandle VAR_4;
 int VAR_5;

 VAR_5 = FUNC_1(VAR_1->u_fhp, &VAR_4, sizeof(fhandle_t));
        if (VAR_5 != 0)
                return (VAR_5);
 VAR_5 = FUNC_3(VAR_0, VAR_4, &VAR_2);
 if (VAR_5 != 0)
  return (VAR_5);
 FUNC_0(&VAR_2, &VAR_3);
 VAR_5 = FUNC_2(&VAR_3, VAR_1->sb, sizeof (VAR_3));
 return (VAR_5);
}
