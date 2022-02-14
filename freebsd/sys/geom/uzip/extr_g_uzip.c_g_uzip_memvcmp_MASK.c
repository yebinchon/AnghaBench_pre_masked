
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char u_char ;


 scalar_t__ FUNC_0 (unsigned char const*,unsigned char const*,size_t) ;

__attribute__((used)) static int
FUNC_1(const void *VAR_0, unsigned char VAR_1, size_t VAR_2)
{
 const u_char *VAR_3;

 VAR_3 = (const u_char *)VAR_0;
 return (*VAR_3 == VAR_1) && FUNC_0(VAR_3, VAR_3 + 1, VAR_2 - 1) == 0;
}
