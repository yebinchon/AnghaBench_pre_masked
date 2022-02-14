
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t ulong_t ;
struct TYPE_8__ {size_t str_hashsz; size_t str_size; int str_nstrs; TYPE_2__** str_hash; scalar_t__ str_nbufs; int str_ptr; } ;
typedef TYPE_1__ strtab_t ;
struct TYPE_9__ {size_t str_off; size_t str_len; struct TYPE_9__* str_next; scalar_t__ str_buf; int str_data; } ;
typedef TYPE_2__ strhash_t ;


 scalar_t__ FUNC_0 (TYPE_1__*,TYPE_2__*,char const*,size_t) ;
 int FUNC_1 (TYPE_1__*,char const*,size_t) ;
 size_t FUNC_2 (char const*,size_t*) ;
 TYPE_2__* FUNC_3 (int) ;

size_t
FUNC_4(strtab_t *VAR_0, const char *VAR_1)
{
 strhash_t *VAR_2;
 size_t VAR_3;
 ulong_t VAR_4;

 if (VAR_1 == ((void*)0) || VAR_1[0] == '\0')
  return (0);

 VAR_4 = FUNC_2(VAR_1, &VAR_3) % VAR_0->str_hashsz;





 for (VAR_2 = VAR_0->str_hash[VAR_4]; VAR_2 != ((void*)0); VAR_2 = VAR_2->str_next) {
  if (FUNC_0(VAR_0, VAR_2, VAR_1, VAR_3 + 1) == 0)
   return (VAR_2->str_off);
 }





 VAR_2 = FUNC_3(sizeof (strhash_t));

 VAR_2->str_data = VAR_0->str_ptr;
 VAR_2->str_buf = VAR_0->str_nbufs - 1;
 VAR_2->str_off = VAR_0->str_size;
 VAR_2->str_len = VAR_3;
 VAR_2->str_next = VAR_0->str_hash[VAR_4];

 VAR_0->str_hash[VAR_4] = VAR_2;





 FUNC_1(VAR_0, VAR_1, VAR_3 + 1);
 VAR_0->str_nstrs++;
 VAR_0->str_size += VAR_3 + 1;

 return (VAR_2->str_off);
}
