
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct au_info {int dummy; } ;
typedef int kobj_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct au_info*,int ,int ,int) ;
 int FUNC_2 (struct au_info*,int ,int ,int,int) ;
 int FUNC_3 (char*,int,int) ;

__attribute__((used)) static int
FUNC_4(kobj_t VAR_4, void *VAR_5, int VAR_6, u_int32_t VAR_7)
{
 struct au_info *VAR_8 = (struct au_info *)VAR_5;
 int VAR_9, VAR_10, VAR_11;
 VAR_9=VAR_10=VAR_11=0;
 do {
  while (VAR_10<50 && (VAR_9 & VAR_1) == 0) {
   VAR_9=FUNC_1(VAR_8, 0, VAR_3, 4);
   FUNC_0(2000);
   VAR_10++;
  }
  if (VAR_10==50) FUNC_3("codec timeout during write of register %x, data %x\n",
      VAR_6, VAR_7);
  FUNC_2(VAR_8, 0, VAR_2, (VAR_6<<16) | VAR_0 | VAR_7, 4);


    VAR_11++;
 } while (0);




 return 0;
}
