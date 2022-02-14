
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct lchown_args {int gid; int uid; int path; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct thread*,int ,int ,int ,int ,int ,int ) ;

int
FUNC_1(struct thread *VAR_3, struct lchown_args *VAR_4)
{

 return (FUNC_0(VAR_3, VAR_0, VAR_4->path, VAR_2,
     VAR_4->uid, VAR_4->gid, VAR_1));
}
