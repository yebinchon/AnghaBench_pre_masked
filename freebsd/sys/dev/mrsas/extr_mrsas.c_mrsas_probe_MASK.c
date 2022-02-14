
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
struct mrsas_ident {int desc; } ;
typedef int device_t ;


 int VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (int ,int ) ;
 struct mrsas_ident* FUNC_1 (int ) ;
 int FUNC_2 (char*,char*) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_2)
{
 static u_int8_t VAR_3 = 1;
 struct mrsas_ident *VAR_4;

 if ((VAR_4 = FUNC_1(VAR_2)) != ((void*)0)) {
  if (VAR_3) {
   FUNC_2("AVAGO MegaRAID SAS FreeBSD mrsas driver version: %s\n",
       VAR_1);
   VAR_3 = 0;
  }
  FUNC_0(VAR_2, VAR_4->desc);

  return (-30);
 }
 return (VAR_0);
}
