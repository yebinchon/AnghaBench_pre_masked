
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t addrlen_t ;
typedef size_t addrkey_t ;


 size_t VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static int
FUNC_1(const addrkey_t *VAR_1, addrlen_t VAR_2, addrlen_t VAR_3)
{
 FUNC_0(VAR_2 > VAR_3);
 (void)VAR_2;
 return (int)(VAR_1[VAR_3/VAR_0]>>((VAR_0-1)-(VAR_3%VAR_0))) & 1;
}
