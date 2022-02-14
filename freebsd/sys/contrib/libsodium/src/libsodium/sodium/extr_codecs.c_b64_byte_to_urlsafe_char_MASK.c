
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char FUNC_0 (unsigned int,int) ;
 unsigned int FUNC_1 (unsigned int,int) ;
 unsigned int FUNC_2 (unsigned int,int) ;

__attribute__((used)) static int
FUNC_3(unsigned int VAR_0)
{
    return (FUNC_2(VAR_0, 26) & (VAR_0 + 'A')) |
           (FUNC_1(VAR_0, 26) & FUNC_2(VAR_0, 52) & (VAR_0 + ('a' - 26))) |
           (FUNC_1(VAR_0, 52) & FUNC_2(VAR_0, 62) & (VAR_0 + ('0' - 52))) | (FUNC_0(VAR_0, 62) & '-') |
           (FUNC_0(VAR_0, 63) & '_');
}
