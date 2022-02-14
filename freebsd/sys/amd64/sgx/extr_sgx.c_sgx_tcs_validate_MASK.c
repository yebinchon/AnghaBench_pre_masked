
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcs {int ossa; int ofsbasgx; int ogsbasgx; int fslimit; int gslimit; scalar_t__* reserved3; scalar_t__ flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__*) ;

__attribute__((used)) static int
FUNC_1(struct tcs *VAR_2)
{
 int VAR_3;

 if ((VAR_2->flags) ||
     (VAR_2->ossa & (VAR_1 - 1)) ||
     (VAR_2->ofsbasgx & (VAR_1 - 1)) ||
     (VAR_2->ogsbasgx & (VAR_1 - 1)) ||
     ((VAR_2->fslimit & 0xfff) != 0xfff) ||
     ((VAR_2->gslimit & 0xfff) != 0xfff))
  return (VAR_0);

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_2->reserved3); VAR_3++)
  if (VAR_2->reserved3[VAR_3])
   return (VAR_0);

 return (0);
}
