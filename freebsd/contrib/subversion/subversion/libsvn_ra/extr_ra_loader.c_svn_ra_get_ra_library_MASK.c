
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* get_version ) () ;} ;
typedef TYPE_1__ svn_ra_plugin_t ;
typedef int (* svn_ra_init_func_t ) (int ,int *,int *) ;
typedef int svn_error_t ;
struct ra_lib_defn {int * ra_name; int (* compat_initfunc ) (int ,int *,int *) ;int schemes; } ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 (int ,char const*) ;
 char* FUNC_4 (int ,char const*) ;
 int FUNC_5 (int *,int (*) (int ,int *,int *),int *,int *) ;
 struct ra_lib_defn* VAR_2 ;
 int FUNC_6 () ;
 int * FUNC_7 (int ,int *,int ,char const*) ;
 TYPE_1__* FUNC_8 (int *,char const*) ;

svn_error_t *
FUNC_9(svn_ra_plugin_t **VAR_3,
                      void *VAR_4,
                      const char *VAR_5,
                      apr_pool_t *VAR_6)
{
  const struct ra_lib_defn *VAR_7;
  apr_pool_t *VAR_8 = VAR_4;
  apr_hash_t *VAR_9 = FUNC_2(VAR_6);


  for (VAR_7 = VAR_2; VAR_7->ra_name != ((void*)0); ++VAR_7)
    {
      const char *VAR_10;
      if ((VAR_10 = FUNC_4(VAR_7->schemes, VAR_5)))
        {
          svn_ra_init_func_t VAR_11 = VAR_7->compat_initfunc;

          if (! VAR_11)
            {
              FUNC_0(FUNC_5
                      (((void*)0), VAR_11, VAR_7->ra_name, VAR_8));
            }
          if (! VAR_11)
            {
              continue;
            }

          FUNC_0(VAR_11(VAR_1, VAR_8, VAR_9));

          *VAR_3 = FUNC_8(VAR_9, VAR_10);



          if (! *VAR_3)
            break;

          return FUNC_3((*VAR_3)->get_version(), VAR_10);
        }
    }


  *VAR_3 = ((void*)0);
  return FUNC_7(VAR_0, ((void*)0),
                           FUNC_1("Unrecognized URL scheme '%s'"), VAR_5);
}
