
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct posix_spawn_args {char const* path; char* const* argv; char* const* envp; int use_env_path; scalar_t__ error; int const* sa; int const* fa; } ;
typedef int posix_spawnattr_t ;
typedef int posix_spawn_file_actions_t ;
typedef int pid_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct posix_spawn_args*) ;
 int FUNC_1 (int,int *,int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,int (*) (struct posix_spawn_args*),struct posix_spawn_args*) ;
 int FUNC_6 () ;

__attribute__((used)) static int
FUNC_7(pid_t *VAR_6, const char *VAR_7,
    const posix_spawn_file_actions_t *VAR_8,
    const posix_spawnattr_t *VAR_9,
    char * const VAR_10[], char * const VAR_11[], int VAR_12)
{
 struct posix_spawn_args VAR_13;
 pid_t VAR_14;







 VAR_13.path = VAR_7;
 VAR_13.fa = VAR_8;
 VAR_13.sa = VAR_9;
 VAR_13.argv = VAR_10;
 VAR_13.envp = VAR_11;
 VAR_13.use_env_path = VAR_12;
 VAR_13.error = 0;
 VAR_14 = FUNC_4(VAR_2);
 if (VAR_14 == 0)

  FUNC_0(&VAR_13);







 if (VAR_14 == -1 && VAR_5 == VAR_0) {
  VAR_14 = FUNC_6();
  if (VAR_14 == 0)

   FUNC_0(&VAR_13);
 }
 if (VAR_14 == -1)
  return (VAR_5);
 if (VAR_13.error != 0)

  FUNC_1(VAR_14, ((void*)0), VAR_3);
 else if (VAR_6 != ((void*)0))

  *VAR_6 = VAR_14;
 return (VAR_13.error);
}
