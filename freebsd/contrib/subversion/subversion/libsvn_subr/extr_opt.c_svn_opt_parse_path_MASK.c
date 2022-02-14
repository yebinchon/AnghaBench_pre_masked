
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ number; } ;
struct TYPE_7__ {scalar_t__ kind; TYPE_1__ value; } ;
typedef TYPE_2__ svn_opt_revision_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char const*,char) ;
 size_t FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (char const*,char*,int) ;
 char const* FUNC_5 (char const*,char) ;
 int * FUNC_6 (int ,int *,int ,char const*,...) ;
 int FUNC_7 (char const**,char const**,char const*,int *) ;
 int FUNC_8 (TYPE_2__*,TYPE_2__*,char const*,int *) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_9 (char const*) ;
 char* FUNC_10 (char const*,int *) ;

svn_error_t *
FUNC_11(svn_opt_revision_t *VAR_3,
                   const char **VAR_4,
                   const char *VAR_5 ,
                   apr_pool_t *VAR_6)
{
  const char *VAR_7;

  FUNC_0(FUNC_7(VAR_4, &VAR_7, VAR_5, VAR_6));


  if (FUNC_3(VAR_7))
    {
      int VAR_8;
      svn_opt_revision_t VAR_9, VAR_10;

      VAR_10.kind = VAR_2;

      if (VAR_7[1] == '\0')
        {
          VAR_8 = 0;
          VAR_9.kind = VAR_2;
          VAR_9.value.number = 0;
        }
      else
        {
          const char *VAR_11 = &VAR_7[1];


          if (FUNC_9(VAR_5))
            {


              size_t VAR_12 = FUNC_3(VAR_11);
              if (VAR_12 > 6
                  && VAR_11[0] == '%'
                  && VAR_11[1] == '7'
                  && (VAR_11[2] == 'B'
                      || VAR_11[2] == 'b')
                  && VAR_11[VAR_12-3] == '%'
                  && VAR_11[VAR_12-2] == '7'
                  && (VAR_11[VAR_12-1] == 'D'
                      || VAR_11[VAR_12-1] == 'd'))
                {
                  VAR_11 = FUNC_10(VAR_11, VAR_6);
                }
            }
          VAR_8 = FUNC_8(&VAR_9,
                                       &VAR_10,
                                       VAR_11, VAR_6);
        }

      if (VAR_8 || VAR_10.kind != VAR_2)
        {



          if (FUNC_4(VAR_5, "svn+ssh://", 10) == 0)
            {
              const char *VAR_13;

              VAR_13 = FUNC_2(VAR_5, '@');
              if (VAR_13 && FUNC_5(VAR_5, '@') == VAR_13)
                return FUNC_6(VAR_0, ((void*)0),
                                         FUNC_1("Syntax error parsing peg revision "
                                           "'%s'; did you mean '%s@'?"),
                                       &VAR_7[1], VAR_5);
            }

          return FUNC_6(VAR_0, ((void*)0),
                                   FUNC_1("Syntax error parsing peg revision '%s'"),
                                   &VAR_7[1]);
        }
      VAR_3->kind = VAR_9.kind;
      VAR_3->value = VAR_9.value;
    }
  else
    {

      VAR_3->kind = VAR_2;
    }

  return VAR_1;
}
