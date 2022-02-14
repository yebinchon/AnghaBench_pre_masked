
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char const* data; } ;
typedef TYPE_1__ svn_stringbuf_t ;
struct TYPE_6__ {char const* data; } ;
typedef TYPE_2__ svn_string_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int * VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int *,char const*) ;
 int * FUNC_1 () ;
 TYPE_2__* FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_4(const char **VAR_2,
                     const char *VAR_3,
                     apr_hash_t *VAR_4,
                     svn_stringbuf_t *VAR_5,
                     apr_pool_t *VAR_6,
                     apr_pool_t *VAR_7)
{
  svn_string_t *VAR_8;

  *VAR_2 = ((void*)0);



  VAR_8 = FUNC_2(VAR_4, VAR_1);
  if (VAR_8)
    {
      if (VAR_5 || VAR_3)
        return FUNC_1();

      *VAR_2 = FUNC_0(VAR_6, VAR_8->data);


      FUNC_3(VAR_4, VAR_1, ((void*)0));
    }
  else if (VAR_5)
    {
      if (VAR_3)
        return FUNC_1();

      *VAR_2 = FUNC_0(VAR_6, VAR_5->data);
    }
  else if (VAR_3)
    {
      *VAR_2 = FUNC_0(VAR_6, VAR_3);
    }

  return VAR_0;
}
