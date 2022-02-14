
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* next; } ;
typedef TYPE_1__ x509_name ;
typedef int svn_error_t ;
typedef int ptrdiff_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int * VAR_3 ;
 void* FUNC_1 (int *,int) ;
 int * FUNC_2 (unsigned char const**,unsigned char const*,int*,int) ;
 int * FUNC_3 (int ,int *,int *) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (unsigned char const**,unsigned char const*,TYPE_1__*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_6(const unsigned char **VAR_4, const unsigned char *VAR_5,
              x509_name *VAR_6, apr_pool_t *VAR_7)
{
  svn_error_t *VAR_8;
  ptrdiff_t VAR_9;
  const unsigned char *VAR_10;
  x509_name *VAR_11 = ((void*)0);

  VAR_8 = FUNC_2(VAR_4, VAR_5, &VAR_9, VAR_0 | VAR_1);
  if (VAR_8 || VAR_9 < 1)
    return FUNC_3(VAR_2, VAR_8, ((void*)0));

  VAR_10 = *VAR_4 + VAR_9;




  while (*VAR_4 < VAR_10)
    {
      if (!VAR_11)
        {
          VAR_11 = VAR_6;
        }
      else
        {
          VAR_11->next = FUNC_1(VAR_7, sizeof(x509_name));
          VAR_11 = VAR_11->next;
        }
      FUNC_0(FUNC_5(VAR_4, VAR_10, VAR_11, VAR_7));
    }




  if (*VAR_4 == VAR_5)
    return VAR_3;

  VAR_11->next = FUNC_1(VAR_7, sizeof(x509_name));

  return FUNC_4(FUNC_6(VAR_4, VAR_5, VAR_11->next, VAR_7));
}
