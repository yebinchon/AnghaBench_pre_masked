
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct extattr_delete_file_args {int attrname; int attrnamespace; int path; } ;


 int VAR_0 ;
 int FUNC_0 (struct thread*,int ,int ,int ,int ) ;

int
FUNC_1(struct thread *VAR_1, struct extattr_delete_file_args *VAR_2)
{

 return (FUNC_0(VAR_1, VAR_2->path, VAR_2->attrnamespace,
     VAR_2->attrname, VAR_0));
}
