
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_pinmux_padconf {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ti_pinmux_padconf* FUNC_0 (char const*) ;
 int FUNC_1 (int ,struct ti_pinmux_padconf const*,char const*,unsigned int) ;
 int VAR_2 ;

int
FUNC_2(const char *VAR_3, const char *VAR_4, unsigned int VAR_5)
{
 const struct ti_pinmux_padconf *VAR_6;

 if (!VAR_2)
  return (VAR_1);


 VAR_6 = FUNC_0(VAR_3);
 if (VAR_6 == ((void*)0))
  return (VAR_0);

 return (FUNC_1(VAR_2, VAR_6, VAR_4, VAR_5));
}
