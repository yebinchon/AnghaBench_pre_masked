
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xlocale_collate {int __collate_load_error; } ;
struct TYPE_2__ {scalar_t__* components; } ;
typedef int Char ;


 int FUNC_0 (int) ;
 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 int VAR_4 ;

 size_t VAR_5 ;
 TYPE_1__* FUNC_1 () ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int
FUNC_3(Char *VAR_6, Char *VAR_7, Char *VAR_8)
{
 int VAR_9, VAR_10;
 Char VAR_11, VAR_12, *VAR_13, *VAR_14;
 struct xlocale_collate *VAR_15 =
  (struct xlocale_collate*)FUNC_1()->components[VAR_5];

 VAR_14 = ((void*)0);
 VAR_13 = ((void*)0);

 while (1) {
  while (VAR_7 < VAR_8) {
   VAR_11 = *VAR_7++;
   switch (VAR_11 & VAR_2) {
   case 130:
    if (VAR_7 == VAR_8)
     return (1);
    if (*VAR_6 == VAR_0)
     return (0);
    VAR_14 = VAR_6 + 1;
    VAR_13 = VAR_7 - 1;
    break;
   case 129:
    if (*VAR_6++ == VAR_0)
     goto fail;
    break;
   case 128:
    VAR_9 = 0;
    if ((VAR_12 = *VAR_6++) == VAR_0)
     goto fail;
    VAR_10 = ((*VAR_7 & VAR_2) == VAR_3);
    if (VAR_10 != 0)
     ++VAR_7;
    while (((VAR_11 = *VAR_7++) & VAR_2) != VAR_1)
     if ((*VAR_7 & VAR_2) == VAR_4) {
      if (VAR_15->__collate_load_error ?
          FUNC_0(VAR_11) <= FUNC_0(VAR_12) &&
          FUNC_0(VAR_12) <= FUNC_0(VAR_7[1]) :
          FUNC_2(FUNC_0(VAR_11),
          FUNC_0(VAR_12)) <= 0 &&
          FUNC_2(FUNC_0(VAR_12),
          FUNC_0(VAR_7[1])) <= 0)
       VAR_9 = 1;
      VAR_7 += 2;
     } else if (VAR_11 == VAR_12)
      VAR_9 = 1;
    if (VAR_9 == VAR_10)
     goto fail;
    break;
   default:
    if (*VAR_6++ != VAR_11)
     goto fail;
    break;
   }
  }
  if (*VAR_6 == VAR_0)
   return (1);

 fail:
  if (VAR_14 == ((void*)0))
   break;
  VAR_7 = VAR_13;
  VAR_6 = VAR_14;
 }
 return (0);
}
