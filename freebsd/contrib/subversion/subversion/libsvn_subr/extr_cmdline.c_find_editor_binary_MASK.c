
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
struct svn_config_t {int dummy; } ;
typedef int apr_hash_t ;


 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (struct svn_config_t*,char const**,int ,int ,int *) ;
 int FUNC_3 (char const) ;
 int * FUNC_4 (int ,int *,int ) ;
 struct svn_config_t* FUNC_5 (int *,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_6(const char **VAR_6,
                   const char *VAR_7,
                   apr_hash_t *VAR_8)
{
  const char *VAR_9;
  struct svn_config_t *VAR_10;


  VAR_9 = VAR_7;


  if (! VAR_9)
    VAR_9 = FUNC_1("SVN_EDITOR");


  if (! VAR_9)
    {
      VAR_10 = VAR_8 ? FUNC_5(VAR_8, VAR_1) : ((void*)0);
      FUNC_2(VAR_10, &VAR_9, VAR_3,
                     VAR_2, ((void*)0));
    }


  if (! VAR_9)
    VAR_9 = FUNC_1("VISUAL");
  if (! VAR_9)
    VAR_9 = FUNC_1("EDITOR");
  if (VAR_9)
    {
      const char *VAR_11;

      for (VAR_11 = VAR_9; *VAR_11; VAR_11++)
        if (!FUNC_3(*VAR_11))
          break;

      if (! *VAR_11)
        return FUNC_4
          (VAR_4, ((void*)0),
           FUNC_0("The EDITOR, SVN_EDITOR or VISUAL environment variable or "
             "'editor-cmd' run-time configuration option is empty or "
             "consists solely of whitespace. Expected a shell command."));
    }
  else
    return FUNC_4
      (VAR_4, ((void*)0),
       FUNC_0("None of the environment variables SVN_EDITOR, VISUAL or EDITOR are "
         "set, and no 'editor-cmd' run-time configuration option was found"));

  *VAR_6 = VAR_9;
  return VAR_5;
}
