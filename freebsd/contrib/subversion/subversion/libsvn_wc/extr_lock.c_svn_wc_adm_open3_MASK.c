
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int db_provided; int * db; } ;
typedef TYPE_1__ svn_wc_adm_access_t ;
typedef int svn_wc__db_t ;
typedef int svn_error_t ;
typedef int svn_cancel_func_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*) ;
 TYPE_1__* FUNC_3 (char const*,int *,int *) ;
 int FUNC_4 (TYPE_1__**,char const*,int *,int ,int ,int,int ,void*,int *) ;
 int FUNC_5 (char const**,char const*,int *) ;
 int FUNC_6 (char const*,int *) ;
 int * FUNC_7 (int ,int *,int ,int ) ;
 int * FUNC_8 (int ) ;
 int FUNC_9 (int **,int *,int ,int ,int *,int *) ;

svn_error_t *
FUNC_10(svn_wc_adm_access_t **VAR_3,
                 svn_wc_adm_access_t *VAR_4,
                 const char *VAR_5,
                 svn_boolean_t VAR_6,
                 int VAR_7,
                 svn_cancel_func_t VAR_8,
                 void *VAR_9,
                 apr_pool_t *VAR_10)
{
  svn_wc__db_t *VAR_11;
  svn_boolean_t VAR_12;



  if (VAR_4)
    {
      const char *VAR_13;
      svn_wc_adm_access_t *VAR_14;

      FUNC_1(FUNC_5(&VAR_13, VAR_5, VAR_10));
      VAR_14 = FUNC_3(VAR_13, VAR_4->db, VAR_10);
      if (VAR_14 && !FUNC_0(VAR_14))




        return FUNC_7(VAR_1, ((void*)0),
                                 FUNC_2("Working copy '%s' locked"),
                                 FUNC_6(VAR_5, VAR_10));
      VAR_11 = VAR_4->db;
      VAR_12 = VAR_4->db_provided;
    }
  else
    {





      FUNC_1(FUNC_9(&VAR_11, ((void*)0) , VAR_0, VAR_2,
                              VAR_10, VAR_10));
      VAR_12 = VAR_0;
    }

  return FUNC_8(FUNC_4(VAR_3, VAR_5, VAR_11, VAR_12,
                                  VAR_6, VAR_7,
                                  VAR_8, VAR_9, VAR_10));
}
