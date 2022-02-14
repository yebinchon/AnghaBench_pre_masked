
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mps_ident {int desc; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 struct mps_ident* FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_2)
{
 struct mps_ident *VAR_3;

 if ((VAR_3 = FUNC_1(VAR_2)) != ((void*)0)) {
  FUNC_0(VAR_2, VAR_3->desc);
  return (VAR_0);
 }
 return (VAR_1);
}
