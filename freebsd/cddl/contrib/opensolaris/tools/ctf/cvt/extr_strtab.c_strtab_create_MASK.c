
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int str_hashsz; int str_nstrs; int str_size; int * str_ptr; int str_bufsz; scalar_t__ str_nbufs; int * str_bufs; int str_hash; } ;
typedef TYPE_1__ strtab_t ;
typedef int strhash_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;

void
FUNC_2(strtab_t *VAR_2)
{
 VAR_2->str_hash = FUNC_1(VAR_1 * sizeof (strhash_t *));
 VAR_2->str_hashsz = VAR_1;
 VAR_2->str_bufs = ((void*)0);
 VAR_2->str_ptr = ((void*)0);
 VAR_2->str_nbufs = 0;
 VAR_2->str_bufsz = VAR_0;
 VAR_2->str_nstrs = 1;
 VAR_2->str_size = 1;

 FUNC_0(VAR_2);
 *VAR_2->str_ptr++ = '\0';
}
