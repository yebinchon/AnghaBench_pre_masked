
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct thread {int dummy; } ;
struct filemon {int error; int fname1; } ;
struct chdir_args {int path; } ;
struct TYPE_3__ {int p_pid; } ;


 int FUNC_0 (int ,int ,int,int *) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (struct filemon*) ;
 int FUNC_2 (struct filemon*,char*,int ,int ) ;
 struct filemon* FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct thread*,struct chdir_args*) ;

__attribute__((used)) static int
FUNC_5(struct thread *VAR_1, struct chdir_args *VAR_2)
{
 int VAR_3, VAR_4;
 struct filemon *VAR_5;

 if ((VAR_4 = FUNC_4(VAR_1, VAR_2)) == 0) {
  if ((VAR_5 = FUNC_3(VAR_0)) != ((void*)0)) {
   if ((VAR_3 = FUNC_0(VAR_2->path, VAR_5->fname1,
       sizeof(VAR_5->fname1), ((void*)0))) != 0) {
    VAR_5->error = VAR_3;
    goto copyfail;
   }

   FUNC_2(VAR_5, "C %d %s\n",
       VAR_0->p_pid, VAR_5->fname1);
copyfail:
   FUNC_1(VAR_5);
  }
 }

 return (VAR_4);
}
