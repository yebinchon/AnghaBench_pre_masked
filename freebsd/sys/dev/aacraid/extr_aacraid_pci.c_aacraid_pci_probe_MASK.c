
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aac_ident {int desc; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 struct aac_ident* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,char*,char*) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_3)
{
 struct aac_ident *VAR_4;

 FUNC_2(((void*)0), VAR_2, "");

 if ((VAR_4 = FUNC_0(VAR_3)) != ((void*)0)) {
  FUNC_1(VAR_3, VAR_4->desc);
  return(VAR_0);
 }
 return(VAR_1);
}
