
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct thread {int dummy; } ;
struct filemon {char* fname1; int error; } ;
struct file {int f_vnode; } ;
typedef int cap_rights_t ;
struct TYPE_3__ {int p_pid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (char const*,char*,int,int *) ;
 TYPE_1__* VAR_5 ;
 int FUNC_2 (struct file*,struct thread*) ;
 int FUNC_3 (struct filemon*) ;
 int FUNC_4 (struct filemon*,char*,char,char*,...) ;
 struct filemon* FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (char*,int ) ;
 scalar_t__ FUNC_7 (struct thread*,int,int ,struct file**) ;
 int FUNC_8 (struct thread*,int ,char**,char**) ;

__attribute__((used)) static void
FUNC_9(struct thread *VAR_6, const char *VAR_7, int VAR_8,
    int VAR_9)
{
 int VAR_10;
 struct file *VAR_11;
 struct filemon *VAR_12;
 char *VAR_13, *VAR_14;
 cap_rights_t VAR_15;

 if ((VAR_12 = FUNC_5(VAR_5)) != ((void*)0)) {
  VAR_13 = "";
  VAR_14 = ((void*)0);
  VAR_11 = ((void*)0);

  if ((VAR_10 = FUNC_1(VAR_7, VAR_12->fname1,
      sizeof(VAR_12->fname1), ((void*)0))) != 0) {
   VAR_12->error = VAR_10;
   goto copyfail;
  }

  if (VAR_12->fname1[0] != '/' && VAR_9 != VAR_0) {
   FUNC_4(VAR_12, "A %d %s\n",
       VAR_5->p_pid, VAR_12->fname1);





   if (FUNC_7(VAR_6, VAR_9,
       FUNC_0(&VAR_15, VAR_1), &VAR_11) == 0) {
    FUNC_8(VAR_6, VAR_11->f_vnode, &VAR_13,
        &VAR_14);
   }
  }
  if (VAR_8 & VAR_4) {





   FUNC_4(VAR_12, "R %d %s%s%s\n",
       VAR_5->p_pid, VAR_13,
       VAR_13[0] != '\0' ? "/" : "", VAR_12->fname1);
  }

  FUNC_4(VAR_12, "%c %d %s%s%s\n",
      (VAR_8 & VAR_3) ? 'W':'R',
      VAR_5->p_pid, VAR_13,
      VAR_13[0] != '\0' ? "/" : "", VAR_12->fname1);
copyfail:
  FUNC_3(VAR_12);
  if (VAR_11 != ((void*)0))
   FUNC_2(VAR_11, VAR_6);
  FUNC_6(VAR_14, VAR_2);
 }
}
