
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct posix_spawn_args {char** envp; scalar_t__ error; int argv; int path; scalar_t__ use_env_path; int * fa; int * sa; } ;


 int FUNC_0 (int ,int ,char* const*) ;
 int FUNC_1 (int ,int ,char* const*) ;
 int FUNC_2 (int) ;
 char** VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(void *VAR_2)
{
 struct posix_spawn_args *VAR_3;
 char * const *VAR_4;

 VAR_3 = VAR_2;
 if (VAR_3->sa != ((void*)0)) {
  VAR_3->error = FUNC_4(*VAR_3->sa);
  if (VAR_3->error)
   FUNC_2(127);
 }
 if (VAR_3->fa != ((void*)0)) {
  VAR_3->error = FUNC_3(*VAR_3->fa);
  if (VAR_3->error)
   FUNC_2(127);
 }
 VAR_4 = VAR_3->envp != ((void*)0) ? VAR_3->envp : VAR_0;
 if (VAR_3->use_env_path)
  FUNC_1(VAR_3->path, VAR_3->argv, VAR_4);
 else
  FUNC_0(VAR_3->path, VAR_3->argv, VAR_4);
 VAR_3->error = VAR_1;


 FUNC_2(127);
}
