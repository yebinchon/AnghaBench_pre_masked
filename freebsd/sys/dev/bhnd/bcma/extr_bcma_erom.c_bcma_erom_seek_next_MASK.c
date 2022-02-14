
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct bcma_erom {int dummy; } ;





 int FUNC_0 (scalar_t__,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct bcma_erom*,scalar_t__*) ;
 int FUNC_2 (struct bcma_erom*) ;
 int FUNC_3 (struct bcma_erom*) ;
 int FUNC_4 (struct bcma_erom*) ;

__attribute__((used)) static int
FUNC_5(struct bcma_erom *VAR_5, uint8_t VAR_6)
{
 uint32_t VAR_7;
 int VAR_8;


 while (!(VAR_8 = FUNC_1(VAR_5, &VAR_7))) {

  if (VAR_7 == VAR_0)
   return (VAR_2);


  if (!FUNC_0(VAR_7, VAR_3))
   return (VAR_1);


  if (FUNC_0(VAR_7, VAR_4) == VAR_6)
   return (0);


  switch (FUNC_0(VAR_7, VAR_4)) {
  case 130:
   if ((VAR_8 = FUNC_2(VAR_5)))
    return (VAR_8);

   break;

  case 129:
   if ((VAR_8 = FUNC_3(VAR_5)))
    return (VAR_8);

   break;

  case 128:
   if ((VAR_8 = FUNC_4(VAR_5)))
    return (VAR_8);
   break;

  default:

   return (VAR_1);
  }
 }

 return (VAR_8);
}
