
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*) ;

__attribute__((used)) static inline unsigned int FUNC_1(const char *VAR_0)
{
 unsigned VAR_1;
 unsigned VAR_2;


 for (VAR_1 = 0x238F13AF * FUNC_0(VAR_0), VAR_2 = 0; VAR_0[VAR_2]; VAR_2++)
  VAR_1 = (VAR_1 + (((unsigned char *)VAR_0)[VAR_2] << (VAR_2*5 % 24)));

 return (1103515243 * VAR_1 + 12345);
}
