
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 void* VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_5 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char,unsigned char*,int) ;
 int FUNC_4 (int *,unsigned char*,int) ;
 int VAR_6 ;

int
FUNC_5()
{
    unsigned char VAR_7[16];
    unsigned char *VAR_8;

    if (FUNC_1(VAR_3)) {
 FUNC_2("Remote side does not support STATUS option\n");
 return 0;
    }
    VAR_8 = VAR_7;

    *VAR_8++ = VAR_0;
    *VAR_8++ = VAR_1;
    *VAR_8++ = VAR_3;
    *VAR_8++ = VAR_4;
    *VAR_8++ = VAR_0;
    *VAR_8++ = VAR_2;
    if (FUNC_0() >= VAR_8 - VAR_7) {
 FUNC_4(&VAR_5, VAR_7, VAR_8-VAR_7);
 FUNC_3('>', VAR_7+2, VAR_8 - VAR_7 - 2);
    }
    ++VAR_6;
    return 1;
}
