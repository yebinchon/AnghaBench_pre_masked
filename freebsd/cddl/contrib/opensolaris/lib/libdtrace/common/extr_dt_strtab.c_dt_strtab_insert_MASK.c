
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t ulong_t ;
typedef int ssize_t ;
struct TYPE_8__ {size_t str_hashsz; size_t str_size; TYPE_2__** str_hash; int str_nstrs; scalar_t__ str_nbufs; int str_ptr; } ;
typedef TYPE_1__ dt_strtab_t ;
struct TYPE_9__ {size_t str_off; size_t str_len; struct TYPE_9__* str_next; scalar_t__ str_buf; int str_data; } ;
typedef TYPE_2__ dt_strhash_t ;


 int FUNC_0 (TYPE_1__*,char const*,size_t) ;
 size_t FUNC_1 (char const*,size_t*) ;
 int FUNC_2 (TYPE_1__*,char const*) ;
 int FUNC_3 (TYPE_2__*) ;
 TYPE_2__* FUNC_4 (int) ;

ssize_t
FUNC_5(dt_strtab_t *VAR_0, const char *VAR_1)
{
 dt_strhash_t *VAR_2;
 size_t VAR_3;
 ssize_t VAR_4;
 ulong_t VAR_5;

 if ((VAR_4 = FUNC_2(VAR_0, VAR_1)) != -1)
  return (VAR_4);

 VAR_5 = FUNC_1(VAR_1, &VAR_3) % VAR_0->str_hashsz;





 if ((VAR_2 = FUNC_4(sizeof (dt_strhash_t))) == ((void*)0))
  return (-1L);

 VAR_2->str_data = VAR_0->str_ptr;
 VAR_2->str_buf = VAR_0->str_nbufs - 1;
 VAR_2->str_off = VAR_0->str_size;
 VAR_2->str_len = VAR_3;
 VAR_2->str_next = VAR_0->str_hash[VAR_5];





 if (FUNC_0(VAR_0, VAR_1, VAR_3 + 1) == -1) {
  FUNC_3(VAR_2);
  return (-1L);
 }

 VAR_0->str_nstrs++;
 VAR_0->str_size += VAR_3 + 1;
 VAR_0->str_hash[VAR_5] = VAR_2;

 return (VAR_2->str_off);
}
