
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* key; struct change_node* value; } ;
typedef TYPE_1__ svn_sort__item_t ;
struct change_node {scalar_t__ action; } ;
typedef int ptrdiff_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*,char const*,int) ;
 char* FUNC_2 (char const*,char) ;
 int FUNC_3 (char const*,char const*) ;

__attribute__((used)) static int
FUNC_4(const svn_sort__item_t *VAR_1,
                   const svn_sort__item_t *VAR_2)
{
  const char *VAR_3 = VAR_1->key;
  const char *VAR_4 = VAR_2->key;
  const struct change_node *VAR_5 = VAR_1->value;
  const struct change_node *VAR_6 = VAR_2->value;
  const char *VAR_7;
  const char *VAR_8;
  ptrdiff_t VAR_9;
  ptrdiff_t VAR_10;




  if (*VAR_3 == '\0')
    return -1;
  if (*VAR_4 == '\0')
    return 1;





  VAR_7 = FUNC_2(VAR_3, '/');
  VAR_8 = FUNC_2(VAR_4, '/');
  if ((VAR_7 == ((void*)0) && VAR_8 == ((void*)0))
      || (VAR_7 != ((void*)0)
          && VAR_8 != ((void*)0)
          && (VAR_9 = VAR_7 - VAR_3) == (VAR_10 = VAR_8 - VAR_4)
          && FUNC_1(VAR_3, VAR_4, VAR_9) == 0))
    {
      if (VAR_5->action == VAR_0)
        {
          if (VAR_6->action == VAR_0)
            {


              return 0;
            }


          return -1;
        }
      if (VAR_6->action == VAR_0)

        return 1;
    }
  if (VAR_5->action == VAR_0
      || VAR_6->action == VAR_0)
    {
      int VAR_11 = FUNC_0(VAR_3);
      int VAR_12 = FUNC_0(VAR_4);

      if (VAR_11 < VAR_12 && VAR_5->action == VAR_0)
        return -1;
      if (VAR_11 > VAR_12 && VAR_6->action == VAR_0)
        return 1;
    }


  return FUNC_3(VAR_3, VAR_4);
}
