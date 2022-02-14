
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ti_pinmux_padconf {int * ballname; } ;
struct TYPE_2__ {struct ti_pinmux_padconf* padconf; } ;


 scalar_t__ FUNC_0 (char const*,int *) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static const struct ti_pinmux_padconf*
FUNC_1(const char *VAR_1)
{
 const struct ti_pinmux_padconf *VAR_2;

 VAR_2 = VAR_0->padconf;
 while (VAR_2->ballname != ((void*)0)) {
  if (FUNC_0(VAR_1, VAR_2->ballname) == 0)
   return(VAR_2);
  VAR_2++;
 }

 return (((void*)0));
}
