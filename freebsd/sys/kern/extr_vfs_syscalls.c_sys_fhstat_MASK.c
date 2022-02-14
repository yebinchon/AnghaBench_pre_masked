
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct stat {int dummy; } ;
struct fhstat_args {int sb; int u_fhp; } ;
struct fhandle {int dummy; } ;
typedef int sb ;
typedef int fh ;


 int FUNC_0 (int ,struct fhandle*,int) ;
 int FUNC_1 (struct stat*,int ,int) ;
 int FUNC_2 (struct thread*,struct fhandle,struct stat*) ;

int
FUNC_3(struct thread *VAR_0, struct fhstat_args *VAR_1)
{
 struct stat VAR_2;
 struct fhandle VAR_3;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_1->u_fhp, &VAR_3, sizeof(VAR_3));
 if (VAR_4 != 0)
  return (VAR_4);
 VAR_4 = FUNC_2(VAR_0, VAR_3, &VAR_2);
 if (VAR_4 == 0)
  VAR_4 = FUNC_1(&VAR_2, VAR_1->sb, sizeof(VAR_2));
 return (VAR_4);
}
