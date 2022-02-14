
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct thread {int dummy; } ;
struct filemon {int error; int fname2; int fname1; } ;
struct TYPE_3__ {int p_pid; } ;


 int FUNC_0 (char const*,int ,int,int *) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (struct filemon*) ;
 int FUNC_2 (struct filemon*,char*,int ,int ,int ) ;
 struct filemon* FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_4(struct thread *VAR_1, const char *VAR_2,
    const char *VAR_3)
{
 struct filemon *VAR_4;
 int VAR_5;

 if ((VAR_4 = FUNC_3(VAR_0)) != ((void*)0)) {
  if (((VAR_5 = FUNC_0(VAR_2, VAR_4->fname1,
       sizeof(VAR_4->fname1), ((void*)0))) != 0) ||
      ((VAR_5 = FUNC_0(VAR_3, VAR_4->fname2,
       sizeof(VAR_4->fname2), ((void*)0))) != 0)) {
   VAR_4->error = VAR_5;
   goto copyfail;
  }

  FUNC_2(VAR_4, "L %d '%s' '%s'\n",
      VAR_0->p_pid, VAR_4->fname1, VAR_4->fname2);
copyfail:
  FUNC_1(VAR_4);
 }
}
