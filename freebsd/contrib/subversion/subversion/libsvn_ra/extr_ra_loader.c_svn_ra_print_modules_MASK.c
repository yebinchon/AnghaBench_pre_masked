
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_stringbuf_t ;
struct TYPE_4__ {char** (* get_schemes ) (int *) ;int (* get_description ) (int *) ;int (* get_version ) () ;} ;
typedef TYPE_1__ svn_ra__vtable_t ;
typedef int (* svn_ra__init_func_t ) (int ,TYPE_1__ const**,int *) ;
typedef int svn_error_t ;
struct ra_lib_defn {int * ra_name; int (* initfunc ) (int ,TYPE_1__ const**,int *) ;} ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int *,char*,char const* const,...) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int (*) (int ,TYPE_1__ const**,int *),int *,int *,int *) ;
 struct ra_lib_defn* VAR_1 ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;
 char** FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 () ;
 int FUNC_12 (int *,char*) ;

svn_error_t *
FUNC_13(svn_stringbuf_t *VAR_2,
                     apr_pool_t *VAR_3)
{
  const struct ra_lib_defn *VAR_4;
  const char * const *VAR_5;
  svn_ra__init_func_t VAR_6;
  const svn_ra__vtable_t *VAR_7;
  apr_pool_t *VAR_8 = FUNC_9(VAR_3);

  for (VAR_4 = VAR_1; VAR_4->ra_name != ((void*)0); ++VAR_4)
    {
      char *VAR_9;

      FUNC_8(VAR_8);

      VAR_6 = VAR_4->initfunc;
      if (! VAR_6)
        FUNC_0(FUNC_4(VAR_6, ((void*)0), VAR_4->ra_name,
                               VAR_8));

      if (VAR_6)
        {
          FUNC_0(VAR_6(FUNC_11(), &VAR_7, VAR_8));

          FUNC_0(FUNC_3(VAR_7->get_version(), VAR_4->ra_name));




          VAR_9 = FUNC_2(VAR_8, "* ra_%s : %s\n",
                              VAR_4->ra_name,
                              VAR_7->get_description(VAR_8));
          FUNC_12(VAR_2, VAR_9);

          for (VAR_5 = VAR_7->get_schemes(VAR_8); *VAR_5 != ((void*)0);
               ++VAR_5)
            {
              VAR_9 = FUNC_2(VAR_8, FUNC_1("  - handles '%s' scheme\n"),
                                  *VAR_5);
              FUNC_12(VAR_2, VAR_9);
            }
        }
    }

  FUNC_10(VAR_8);

  return VAR_0;
}
