
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;


 int FUNC_0 (int ) ;

__attribute__((used)) static u_int
FUNC_1(const char *VAR_0, size_t VAR_1, int VAR_2)
{
 u_int VAR_3 = 0;

 FUNC_0(VAR_0 != ((void*)0));

 while (VAR_1--) {
  VAR_3 += *VAR_0++;
  VAR_3 = (VAR_3 << 8) | (VAR_3 >> 24);
 }

 return (VAR_3 % VAR_2);
}
