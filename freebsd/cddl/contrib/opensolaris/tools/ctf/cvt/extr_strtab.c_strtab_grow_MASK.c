
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int str_nbufs; int str_ptr; int * str_bufs; int str_bufsz; } ;
typedef TYPE_1__ strtab_t ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (int *,int) ;

__attribute__((used)) static void
FUNC_2(strtab_t *VAR_0)
{
 VAR_0->str_nbufs++;
 VAR_0->str_bufs = FUNC_1(VAR_0->str_bufs, VAR_0->str_nbufs * sizeof (char *));
 VAR_0->str_ptr = FUNC_0(VAR_0->str_bufsz);
 VAR_0->str_bufs[VAR_0->str_nbufs - 1] = VAR_0->str_ptr;
}
