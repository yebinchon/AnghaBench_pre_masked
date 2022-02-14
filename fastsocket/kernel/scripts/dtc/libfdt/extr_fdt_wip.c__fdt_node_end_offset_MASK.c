
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;





 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (void*,int,int*) ;

int FUNC_1(void *VAR_2, int VAR_3)
{
 int VAR_4 = 0;
 uint32_t VAR_5;
 int VAR_6, VAR_7;

 VAR_5 = FUNC_0(VAR_2, VAR_3, &VAR_7);
 if (VAR_5 != 132)
  return -VAR_0;
 do {
  VAR_6 = VAR_7;
  VAR_5 = FUNC_0(VAR_2, VAR_6, &VAR_7);

  switch (VAR_5) {
  case 131:
   return VAR_6;

  case 132:
   VAR_4++;
   break;

  case 130:
   VAR_4--;
   break;

  case 128:
  case 129:
   break;

  default:
   return -VAR_1;
  }
 } while (VAR_4 >= 0);

 return VAR_7;
}
