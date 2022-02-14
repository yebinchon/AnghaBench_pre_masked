
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_stream_t ;
struct TYPE_3__ {int keylen; int * key; int vallen; scalar_t__ val; } ;
typedef TYPE_1__ svn_hash__entry_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int *,int *,int ,int *) ;
 int * FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (TYPE_1__*,int *,char const*,int ,int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (scalar_t__,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_8(apr_hash_t *VAR_1, svn_stream_t *VAR_2, const char *VAR_3,
          svn_boolean_t VAR_4, apr_pool_t *VAR_5)
{
  apr_pool_t *VAR_6 = FUNC_5(VAR_5);

  while (1)
    {
      svn_hash__entry_t VAR_7;

      FUNC_4(VAR_6);
      FUNC_0(FUNC_3(&VAR_7, VAR_2, VAR_3,
                                   VAR_4, VAR_6));


      if (VAR_7.key == ((void*)0))
        break;

      if (VAR_7.val)
        {

          FUNC_1(VAR_1, FUNC_2(VAR_5, VAR_7.key, VAR_7.keylen),
                       VAR_7.keylen,
                       FUNC_7(VAR_7.val, VAR_7.vallen, VAR_5));
        }
      else
        {

          FUNC_1(VAR_1, VAR_7.key, VAR_7.keylen, ((void*)0));
        }
    }

  FUNC_6(VAR_6);
  return VAR_0;
}
