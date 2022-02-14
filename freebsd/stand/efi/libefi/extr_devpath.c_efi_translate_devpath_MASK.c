
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int EFI_DEVICE_PATH ;




 int FUNC_0 (int *) ;

 int FUNC_1 (int *) ;


 int * FUNC_2 (int *) ;
 int FUNC_3 (char**,char*,int,char*) ;
 char* FUNC_4 (int *,char*) ;
 char* FUNC_5 (int *,char*) ;
 char* FUNC_6 (int *,char*) ;
 char* FUNC_7 (int *,char*) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static char *
FUNC_9(EFI_DEVICE_PATH *VAR_0)
{
 EFI_DEVICE_PATH *VAR_1 = FUNC_2(VAR_0);
 char *VAR_2, *VAR_3;
 uint8_t VAR_4;

 if (!FUNC_1(VAR_0))
  VAR_2 = FUNC_9(VAR_1);
 else
  return (((void*)0));

 VAR_3 = ((void*)0);
 VAR_4 = FUNC_0(VAR_0);
 switch (VAR_4) {
 case 130:
  VAR_3 = FUNC_5(VAR_0, VAR_2);
  break;
 case 132:
  VAR_3 = FUNC_4(VAR_0, VAR_2);
  break;
 case 128:
  VAR_3 = FUNC_7(VAR_0, VAR_2);
  break;
 case 129:
  VAR_3 = FUNC_6(VAR_0, VAR_2);
  break;
 case 131:
 default:
  if (FUNC_3(&VAR_3, "UnknownPath(%x)%s", VAR_4,
      VAR_2? VAR_2 : "") < 0)
   VAR_3 = ((void*)0);
  break;
 }

 if (VAR_3 != ((void*)0)) {
  FUNC_8(VAR_2);
  VAR_2 = VAR_3;
 }
 return (VAR_2);
}
