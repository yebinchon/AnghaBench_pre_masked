
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 void* VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (unsigned char*,long) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (long*,long*) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_4 ;
 int FUNC_4 (char,unsigned char*,int) ;
 int FUNC_5 (int *,unsigned char*,int) ;

void
FUNC_6()
{
    long VAR_5, VAR_6;
    unsigned char VAR_7[16];
    unsigned char *VAR_8;

    if (FUNC_3(VAR_3))
 return;





    if (FUNC_2(&VAR_5, &VAR_6) == 0) {
 return;
    }

    VAR_8 = VAR_7;

    *VAR_8++ = VAR_0;
    *VAR_8++ = VAR_1;
    *VAR_8++ = VAR_3;
    { if ((*VAR_8++ = ((VAR_6)>>8)&0xff) == VAR_0) *VAR_8++ = VAR_0; if ((*VAR_8++ = ((VAR_6))&0xff) == VAR_0) *VAR_8++ = VAR_0; };
    { if ((*VAR_8++ = ((VAR_5)>>8)&0xff) == VAR_0) *VAR_8++ = VAR_0; if ((*VAR_8++ = ((VAR_5))&0xff) == VAR_0) *VAR_8++ = VAR_0; };
    *VAR_8++ = VAR_0;
    *VAR_8++ = VAR_2;
    if (FUNC_0() >= VAR_8 - VAR_7) {
 FUNC_5(&VAR_4, VAR_7, VAR_8-VAR_7);
 FUNC_4('>', VAR_7+2, VAR_8 - VAR_7 - 2);
    }
}
