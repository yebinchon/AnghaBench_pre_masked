
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ current_line; int write_baton; int (* write ) (int ,char const*,int ,int *) ;int eol_str; int eof; } ;
typedef TYPE_1__ target_content_t ;
typedef scalar_t__ svn_linenum_t ;
typedef int svn_error_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 char* FUNC_1 (int *,char const*,int ,int ) ;
 int FUNC_2 (TYPE_1__*,char const**,int *,int *) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (int ,char const*,int ,int *) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static svn_error_t *
FUNC_8(target_content_t *VAR_2, svn_linenum_t VAR_3,
                     apr_pool_t *VAR_4)
{
  apr_pool_t *VAR_5;

  VAR_5 = FUNC_6(VAR_4);
  while ((VAR_2->current_line < VAR_3 || VAR_3 == 0) && ! VAR_2->eof)
    {
      const char *VAR_6;
      apr_size_t VAR_7;

      FUNC_5(VAR_5);

      FUNC_0(FUNC_2(VAR_2, &VAR_6, VAR_5, VAR_5));
      if (! VAR_2->eof)
        VAR_6 = FUNC_1(VAR_5, VAR_6, VAR_2->eol_str,
                                  VAR_1);
      VAR_7 = FUNC_3(VAR_6);
      FUNC_0(VAR_2->write(VAR_2->write_baton, VAR_6,
                             VAR_7, VAR_5));
    }
  FUNC_7(VAR_5);

  return VAR_0;
}
