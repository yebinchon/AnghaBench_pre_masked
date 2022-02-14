
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* key; size_t klen; } ;
typedef TYPE_1__ svn_sort__item_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (char const*,char const*) ;

int
FUNC_2(const svn_sort__item_t *VAR_0,
                                const svn_sort__item_t *VAR_1)
{
  const char *VAR_2, *VAR_3;

  VAR_2 = VAR_0->key;
  VAR_3 = VAR_1->key;
  FUNC_0(VAR_2[VAR_0->klen] == '\0');
  FUNC_0(VAR_3[VAR_1->klen] == '\0');
  return FUNC_1(VAR_2, VAR_3);
}
