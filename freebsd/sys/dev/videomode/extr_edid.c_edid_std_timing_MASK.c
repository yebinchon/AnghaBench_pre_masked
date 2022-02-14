
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct videomode {int dummy; } ;
typedef int name ;


 unsigned int FUNC_0 (int*) ;
 int FUNC_1 (int*) ;




 unsigned int FUNC_2 (int*) ;
 struct videomode* FUNC_3 (char*) ;
 int FUNC_4 (char*,int,char*,unsigned int,unsigned int,unsigned int) ;
 int FUNC_5 (unsigned int,unsigned int,unsigned int,struct videomode*) ;

__attribute__((used)) static int
FUNC_6(uint8_t *VAR_0, struct videomode *VAR_1)
{
 unsigned VAR_2, VAR_3, VAR_4;
 const struct videomode *VAR_5;
 char VAR_6[80];

 if ((VAR_0[0] == 1 && VAR_0[1] == 1) ||
     (VAR_0[0] == 0 && VAR_0[1] == 0) ||
     (VAR_0[0] == 0x20 && VAR_0[1] == 0x20))
  return 0;

 VAR_2 = FUNC_0(VAR_0);
 switch (FUNC_1(VAR_0)) {
 case 131:
  VAR_3 = VAR_2 * 10 / 16;
  break;
 case 129:
  VAR_3 = VAR_2 * 3 / 4;
  break;
 case 128:
  VAR_3 = VAR_2 * 4 / 5;
  break;
 case 130:
 default:
  VAR_3 = VAR_2 * 9 / 16;
  break;
 }
 VAR_4 = FUNC_2(VAR_0);


 FUNC_4(VAR_6, sizeof(VAR_6), "%dx%dx%d", VAR_2, VAR_3, VAR_4);
 if ((VAR_5 = FUNC_3(VAR_6)) != ((void*)0)) {
  *VAR_1 = *VAR_5;
 } else {





  FUNC_5(VAR_2, VAR_3, VAR_4, VAR_1);
 }
 return 1;
}
