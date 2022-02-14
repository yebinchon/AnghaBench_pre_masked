
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct statfs {int dummy; } ;
struct fhstatfs_args {int buf; int u_fhp; } ;
typedef int fhandle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,int) ;
 int FUNC_1 (struct statfs*,int ,int) ;
 int FUNC_2 (struct statfs*,int ) ;
 int FUNC_3 (struct thread*,int ,struct statfs*) ;
 struct statfs* FUNC_4 (int,int ,int ) ;

int
FUNC_5(struct thread *VAR_2, struct fhstatfs_args *VAR_3)
{
 struct statfs *VAR_4;
 fhandle_t VAR_5;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_3->u_fhp, &VAR_5, sizeof(fhandle_t));
 if (VAR_6 != 0)
  return (VAR_6);
 VAR_4 = FUNC_4(sizeof(struct statfs), VAR_0, VAR_1);
 VAR_6 = FUNC_3(VAR_2, VAR_5, VAR_4);
 if (VAR_6 == 0)
  VAR_6 = FUNC_1(VAR_4, VAR_3->buf, sizeof(*VAR_4));
 FUNC_2(VAR_4, VAR_0);
 return (VAR_6);
}
