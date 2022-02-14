
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char FUNC_0 (char) ;
 char* VAR_0 ;

__attribute__((used)) static char
FUNC_1(void)
{
    return (char) ((VAR_0[0] == '^' && VAR_0[1] != '\0')
     ? ((VAR_0[1] == '?') ? '\177' : FUNC_0(VAR_0[1]))
     : VAR_0[0]);
}
