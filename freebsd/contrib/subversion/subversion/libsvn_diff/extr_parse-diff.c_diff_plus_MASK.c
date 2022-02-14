
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int new_filename; } ;
typedef TYPE_1__ svn_patch_t ;
typedef int svn_error_t ;
typedef enum parse_state { ____Placeholder_parse_state } parse_state ;
typedef int apr_pool_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int * VAR_0 ;
 int FUNC_2 (int *,char*,int *,int *) ;
 int VAR_1 ;
 char* FUNC_3 (char*,char) ;

__attribute__((used)) static svn_error_t *
FUNC_4(enum parse_state *VAR_2, char *VAR_3, svn_patch_t *VAR_4,
           apr_pool_t *VAR_5, apr_pool_t *VAR_6)
{


  char *VAR_7 = FUNC_3(VAR_3, '\t');
  if (VAR_7)
    *VAR_7 = '\0';

  FUNC_1(FUNC_2(&VAR_4->new_filename, VAR_3 + FUNC_0("+++ "),
                        VAR_5, VAR_6));

  *VAR_2 = VAR_1;

  return VAR_0;
}
