
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* data; int len; struct TYPE_5__* children; int is_atom; struct TYPE_5__* next; } ;
typedef TYPE_1__ svn_skel_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int *,int) ;
 TYPE_1__* FUNC_1 (char const*,int,int *) ;
 scalar_t__* VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static svn_skel_t *
FUNC_2(const char *VAR_3,
     apr_size_t VAR_4,
     apr_pool_t *VAR_5)
{
  const char *VAR_6 = VAR_3 + VAR_4;
  const char *VAR_7;




  if (VAR_3 >= VAR_6 || *VAR_3 != '(')
    return ((void*)0);


  VAR_7 = VAR_3;


  VAR_3++;


  {
    svn_skel_t *VAR_8 = ((void*)0);
    svn_skel_t **VAR_9 = &VAR_8;

    for (;;)
      {
        svn_skel_t *VAR_10;


        while (VAR_3 < VAR_6
               && VAR_1[(unsigned char) *VAR_3] == VAR_2)
          VAR_3++;


        if (VAR_3 >= VAR_6)
          return ((void*)0);


        if (*VAR_3 == ')')
          {
            VAR_3++;
            break;
          }


        VAR_10 = FUNC_1(VAR_3, VAR_6 - VAR_3, VAR_5);
        if (! VAR_10)
          return ((void*)0);


        VAR_10->next = ((void*)0);
        *VAR_9 = VAR_10;
        VAR_9 = &VAR_10->next;


        VAR_3 = VAR_10->data + VAR_10->len;
      }


    {
      svn_skel_t *VAR_11 = FUNC_0(VAR_5, sizeof(*VAR_11));

      VAR_11->is_atom = VAR_0;
      VAR_11->data = VAR_7;
      VAR_11->len = VAR_3 - VAR_7;
      VAR_11->children = VAR_8;

      return VAR_11;
    }
  }
}
