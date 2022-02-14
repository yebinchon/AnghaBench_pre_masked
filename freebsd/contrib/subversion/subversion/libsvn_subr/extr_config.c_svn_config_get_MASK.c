
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* tmp_value; int pool; } ;
typedef TYPE_1__ svn_config_t ;
typedef int cfg_section_t ;
typedef int cfg_option_t ;
typedef int apr_pool_t ;
struct TYPE_8__ {char* data; } ;


 int FUNC_0 (TYPE_1__*,int *,char const*,char const**,int *) ;
 int * FUNC_1 (TYPE_1__*,char const*,char const*,int **) ;
 int FUNC_2 (char const**,TYPE_1__*,int *,int *,int *) ;
 scalar_t__ FUNC_3 (char const*,char) ;
 int * FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_2__*,char const*) ;

void
FUNC_7(svn_config_t *VAR_0, const char **VAR_1,
               const char *VAR_2, const char *VAR_3,
               const char *VAR_4)
{
  *VAR_1 = VAR_4;
  if (VAR_0)
    {
      cfg_section_t *VAR_5;
      cfg_option_t *VAR_6 = FUNC_1(VAR_0, VAR_2, VAR_3, &VAR_5);
      if (VAR_6 != ((void*)0))
        {
          FUNC_2(VAR_1, VAR_0, VAR_5, VAR_6, ((void*)0));
        }
      else



        if (VAR_4 && FUNC_3(VAR_4, '%'))
          {
            apr_pool_t *VAR_7 = FUNC_4(VAR_0->pool);
            const char *VAR_8;
            if (!FUNC_0(VAR_0, VAR_5, VAR_4, &VAR_8,
                                     VAR_7))
              {


                *VAR_1 = "";
              }
            else if (VAR_8)
              {
                FUNC_6(VAR_0->tmp_value, VAR_8);
                *VAR_1 = VAR_0->tmp_value->data;
              }
            FUNC_5(VAR_7);
          }
    }
}
