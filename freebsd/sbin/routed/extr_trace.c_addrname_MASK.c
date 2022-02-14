
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int naddr ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int,char*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,int ,int) ;
 size_t FUNC_4 (char*) ;

char *
FUNC_5(naddr VAR_1,
  naddr VAR_2,
  int VAR_3)
{

 static int VAR_4;
 static struct {
     char str[15+20];
 } VAR_5[4];
 char *VAR_6, *VAR_7;
 naddr VAR_8;
 size_t VAR_9;
 int VAR_10;

 FUNC_3(VAR_5[VAR_4].str, FUNC_0(VAR_1), sizeof(VAR_5[VAR_4].str));
 VAR_6 = VAR_5[VAR_4].str;
 VAR_9 = sizeof(VAR_5[VAR_4].str);
 VAR_4 = (VAR_4+1) % 4;

 if (VAR_3 == 1 || (VAR_3 == 0 && VAR_2 != FUNC_2(VAR_1))) {
  VAR_7 = &VAR_6[FUNC_4(VAR_6)];

  VAR_8 = VAR_2 & -VAR_2;
  if (VAR_2 + VAR_8 == 0) {
   for (VAR_10 = 0; VAR_10 != 32 && ((1<<VAR_10) & VAR_2) == 0; VAR_10++)
    continue;
   (void)FUNC_1(VAR_7, VAR_6 + VAR_9 - VAR_7, "/%d", 32-VAR_10);

  } else {
   (void)FUNC_1(VAR_7, VAR_6 + VAR_9 - VAR_7, " (mask %#x)",
       (u_int)VAR_2);
  }
 }

 return VAR_6;

}
