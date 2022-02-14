
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct subprocess_info {char* path; char** argv; char** envp; int cred; int work; } ;
typedef int gfp_t ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct subprocess_info*) ;
 struct subprocess_info* FUNC_2 (int,int ) ;
 int FUNC_3 () ;

struct subprocess_info *FUNC_4(char *VAR_1, char **VAR_2,
        char **VAR_3, gfp_t VAR_4)
{
 struct subprocess_info *VAR_5;
 VAR_5 = FUNC_2(sizeof(struct subprocess_info), VAR_4);
 if (!VAR_5)
  goto out;

 FUNC_0(&VAR_5->work, VAR_0);
 VAR_5->path = VAR_1;
 VAR_5->argv = VAR_2;
 VAR_5->envp = VAR_3;
 VAR_5->cred = FUNC_3();
 if (!VAR_5->cred) {
  FUNC_1(VAR_5);
  return ((void*)0);
 }

  out:
 return VAR_5;
}
