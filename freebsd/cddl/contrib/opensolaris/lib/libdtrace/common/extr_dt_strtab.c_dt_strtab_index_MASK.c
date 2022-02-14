
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t ulong_t ;
typedef int ssize_t ;
struct TYPE_6__ {size_t str_hashsz; TYPE_2__** str_hash; } ;
typedef TYPE_1__ dt_strtab_t ;
struct TYPE_7__ {int str_off; struct TYPE_7__* str_next; } ;
typedef TYPE_2__ dt_strhash_t ;


 scalar_t__ FUNC_0 (TYPE_1__*,TYPE_2__*,char const*,size_t) ;
 size_t FUNC_1 (char const*,size_t*) ;

ssize_t
FUNC_2(dt_strtab_t *VAR_0, const char *VAR_1)
{
 dt_strhash_t *VAR_2;
 size_t VAR_3;
 ulong_t VAR_4;

 if (VAR_1 == ((void*)0) || VAR_1[0] == '\0')
  return (0);

 VAR_4 = FUNC_1(VAR_1, &VAR_3) % VAR_0->str_hashsz;

 for (VAR_2 = VAR_0->str_hash[VAR_4]; VAR_2 != ((void*)0); VAR_2 = VAR_2->str_next) {
  if (FUNC_0(VAR_0, VAR_2, VAR_1, VAR_3 + 1) == 0)
   return (VAR_2->str_off);
 }

 return (-1);
}
