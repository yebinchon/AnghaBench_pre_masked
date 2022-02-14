
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct statfs_args {int buf; int path; } ;
struct statfs {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct statfs*,int ,int) ;
 int FUNC_1 (struct statfs*,int ) ;
 int FUNC_2 (struct thread*,int ,int ,struct statfs*) ;
 struct statfs* FUNC_3 (int,int ,int ) ;

int
FUNC_4(struct thread *VAR_3, struct statfs_args *VAR_4)
{
 struct statfs *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_3(sizeof(struct statfs), VAR_0, VAR_1);
 VAR_6 = FUNC_2(VAR_3, VAR_4->path, VAR_2, VAR_5);
 if (VAR_6 == 0)
  VAR_6 = FUNC_0(VAR_5, VAR_4->buf, sizeof(struct statfs));
 FUNC_1(VAR_5, VAR_0);
 return (VAR_6);
}
