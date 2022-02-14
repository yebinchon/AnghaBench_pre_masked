
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int data; scalar_t__ len; } ;
typedef TYPE_1__ svn_stringbuf_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_hash_index_t ;


 int * FUNC_0 (int *,int *) ;
 int * FUNC_1 (int *) ;
 char* FUNC_2 (int *) ;
 char const* FUNC_3 (int *,char*,int ,char*) ;
 char* FUNC_4 (char const*,int *) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_1__*,char*) ;
 TYPE_1__* FUNC_9 (int *) ;

const char *
FUNC_10(apr_hash_t *VAR_0,
                svn_boolean_t VAR_1, apr_pool_t *VAR_2)
{
  apr_hash_index_t *VAR_3;
  apr_pool_t *VAR_4 = FUNC_6(VAR_2);
  svn_stringbuf_t *VAR_5 = FUNC_9(VAR_2);

  for (VAR_3 = FUNC_0(VAR_2, VAR_0); VAR_3; VAR_3 = FUNC_1(VAR_3))
    {
      const char *VAR_6 = FUNC_2(VAR_3);
      FUNC_5(VAR_4);
      if (VAR_5->len)
        FUNC_8(VAR_5, " ");
      FUNC_8(VAR_5,
                               FUNC_4(VAR_6, VAR_4));
    }
  FUNC_7(VAR_4);

  return FUNC_3(VAR_2, "unlock (%s)%s", VAR_5->data,
                      VAR_1 ? " break" : "");
}
