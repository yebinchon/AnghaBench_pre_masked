
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ViceIoctl {char* out; int out_size; scalar_t__ in_size; int * in; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,struct ViceIoctl*,int) ;
 int FUNC_1 (char const*) ;

int
FUNC_2(const char *VAR_1, char *VAR_2, int VAR_3)
{
    struct ViceIoctl VAR_4;
    VAR_4.in = ((void*)0);
    VAR_4.in_size = 0;
    VAR_4.out = VAR_2;
    VAR_4.out_size = VAR_3;
    return FUNC_0(FUNC_1(VAR_1), VAR_0, &VAR_4, 1);
}
