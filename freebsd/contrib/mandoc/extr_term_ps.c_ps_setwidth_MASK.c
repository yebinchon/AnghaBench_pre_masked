
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct termp {TYPE_1__* ps; } ;
struct TYPE_2__ {size_t width; size_t lastwidth; } ;



__attribute__((used)) static void
FUNC_0(struct termp *VAR_0, int VAR_1, int VAR_2)
{
 size_t VAR_3;

 VAR_3 = VAR_0->ps->width;
 if (VAR_1 > 0)
  VAR_0->ps->width += VAR_2;
 else if (VAR_1 == 0)
  VAR_0->ps->width = VAR_2 ? (size_t)VAR_2 : VAR_0->ps->lastwidth;
 else if (VAR_0->ps->width > (size_t)VAR_2)
  VAR_0->ps->width -= VAR_2;
 else
  VAR_0->ps->width = 0;
 VAR_0->ps->lastwidth = VAR_3;
}
