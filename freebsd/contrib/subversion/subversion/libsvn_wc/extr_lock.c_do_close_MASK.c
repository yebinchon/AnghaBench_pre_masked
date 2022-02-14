
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {char* path; int db; int abspath; scalar_t__ closed; } ;
typedef TYPE_1__ svn_wc_adm_access_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_hash_index_t ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int * VAR_0 ;
 int * FUNC_2 (int *,int *) ;
 int * FUNC_3 (int *) ;
 char* FUNC_4 (int *) ;
 TYPE_1__* FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*,int ,int *) ;
 TYPE_1__* FUNC_7 (int ,int ,int *) ;
 scalar_t__ FUNC_8 (char*,char const*) ;
 int FUNC_9 (char*,char const*) ;
 int * FUNC_10 (int ) ;
 int FUNC_11 (int ,char const*,int *) ;
 int * FUNC_12 (int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_13(svn_wc_adm_access_t *VAR_1,
         svn_boolean_t VAR_2,
         apr_pool_t *VAR_3)
{
  svn_wc_adm_access_t *VAR_4;

  if (VAR_1->closed)
    return VAR_0;


  VAR_4 = FUNC_7(VAR_1->abspath, VAR_1->db, VAR_3);
  if (VAR_4 != ((void*)0))
    {
      apr_hash_t *VAR_5;
      apr_hash_index_t *VAR_6;


      VAR_5 = FUNC_12(VAR_1->db, VAR_3);


      for (VAR_6 = FUNC_2(VAR_3, VAR_5);
           VAR_6;
           VAR_6 = FUNC_3(VAR_6))
        {
          const char *VAR_7 = FUNC_4(VAR_6);
          svn_wc_adm_access_t *VAR_8 = FUNC_5(VAR_6);
          const char *VAR_9 = VAR_8->path;

          if (FUNC_0(VAR_8))
            {


              FUNC_11(VAR_1->db, VAR_7,
                                           VAR_3);
              continue;
            }

          if (! FUNC_9(VAR_1->path, VAR_9)
              || FUNC_8(VAR_1->path, VAR_9) == 0)
            continue;

          FUNC_1(FUNC_6(VAR_8, VAR_2, VAR_3));
        }
    }

  return FUNC_10(FUNC_6(VAR_1, VAR_2,
                                      VAR_3));
}
