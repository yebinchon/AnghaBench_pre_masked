
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mfi_ident {int flags; int desc; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 struct mfi_ident* FUNC_1 (int ) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static int
FUNC_2(device_t VAR_5)
{
 struct mfi_ident *VAR_6;

 if ((VAR_6 = FUNC_1(VAR_5)) != ((void*)0)) {
  FUNC_0(VAR_5, VAR_6->desc);


  if ((VAR_6->flags & VAR_3) && VAR_4)
   return (VAR_1);
  else
   return (VAR_0);
 }
 return (VAR_2);
}
