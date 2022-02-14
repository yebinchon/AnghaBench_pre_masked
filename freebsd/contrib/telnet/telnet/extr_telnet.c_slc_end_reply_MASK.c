
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char,int *,int) ;
 int FUNC_3 (int *,int *,int) ;
 int * VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;

void
FUNC_4(void)
{
    int VAR_6;


    if (&VAR_5[2] > VAR_4)
            return;
    *VAR_5++ = VAR_0;
    *VAR_5++ = VAR_1;
    VAR_6 = VAR_5 - VAR_3;
    if (VAR_6 <= 6)
 return;
    if (FUNC_0() > VAR_6) {
 FUNC_3(&VAR_2, VAR_3, VAR_5 - VAR_3);
 FUNC_2('>', &VAR_3[2], VAR_5 - VAR_3 - 2);
    }
     else FUNC_1("slc_end_reply: not enough room\n");
}
