
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint_t ;
struct TYPE_7__ {size_t str_bufsz; int str_nstrs; int str_size; int * str_ptr; scalar_t__ str_nbufs; int * str_bufs; int str_hashsz; int * str_hash; } ;
typedef TYPE_1__ dt_strtab_t ;
typedef int dt_strhash_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int * FUNC_2 (int ,int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 TYPE_1__* FUNC_5 (int) ;

dt_strtab_t *
FUNC_6(size_t VAR_1)
{
 dt_strtab_t *VAR_2 = FUNC_5(sizeof (dt_strtab_t));
 uint_t VAR_3 = VAR_0;

 FUNC_0(VAR_1 != 0);

 if (VAR_2 == ((void*)0))
  return (((void*)0));

 FUNC_1(VAR_2, sizeof (dt_strtab_t));
 VAR_2->str_hash = FUNC_2(VAR_3, sizeof (dt_strhash_t *));

 if (VAR_2->str_hash == ((void*)0))
  goto err;

 VAR_2->str_hashsz = VAR_3;
 VAR_2->str_bufs = ((void*)0);
 VAR_2->str_ptr = ((void*)0);
 VAR_2->str_nbufs = 0;
 VAR_2->str_bufsz = VAR_1;
 VAR_2->str_nstrs = 1;
 VAR_2->str_size = 1;

 if (FUNC_4(VAR_2) == -1)
  goto err;

 *VAR_2->str_ptr++ = '\0';
 return (VAR_2);

err:
 FUNC_3(VAR_2);
 return (((void*)0));
}
