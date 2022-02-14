
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int data; } ;
typedef TYPE_1__ svn_string_t ;
typedef int svn_ra_serf__xml_estate_t ;
typedef int svn_mergeinfo_t ;
typedef int svn_error_t ;
struct TYPE_5__ {int pool; int result_catalog; } ;
typedef TYPE_2__ mergeinfo_context_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int * VAR_3 ;
 int FUNC_2 (int ,char const*) ;
 char* FUNC_3 (int *,char*) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int *,char const*,int ) ;
 int FUNC_6 (int *,int,char*,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_7(svn_ra_serf__xml_estate_t *VAR_4,
                 void *VAR_5,
                 int VAR_6,
                 const svn_string_t *VAR_7,
                 apr_hash_t *VAR_8,
                 apr_pool_t *VAR_9)
{
  mergeinfo_context_t *VAR_10 = VAR_5;

  if (VAR_6 == VAR_1)
    {

      const char *VAR_11 = FUNC_3(VAR_8, "path");
      const char *VAR_12 = FUNC_3(VAR_8, "info");

      if (VAR_11 != ((void*)0) && VAR_12 != ((void*)0))
        {
          svn_mergeinfo_t VAR_13;



          if (VAR_11[0] == '/')
            ++VAR_11;

          FUNC_0(FUNC_5(&VAR_13, VAR_12,
                                      VAR_10->pool));

          FUNC_4(VAR_10->result_catalog,
                        FUNC_2(VAR_10->pool, VAR_11),
                        VAR_13);
        }
    }
  else
    {
      FUNC_1(VAR_6 == VAR_2
                     || VAR_6 == VAR_0);


      FUNC_6(VAR_4, VAR_1,
                            VAR_6 == VAR_2
                              ? "path"
                              : "info",
                            VAR_7->data);
    }

  return VAR_3;
}
