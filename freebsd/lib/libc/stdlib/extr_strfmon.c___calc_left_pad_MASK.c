
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char*,char*,char*,char**) ;
 scalar_t__ FUNC_1 (char*) ;

__attribute__((used)) static int
FUNC_2(int VAR_0, char *VAR_1) {

 char VAR_2, VAR_3, VAR_4, *VAR_5;
 int VAR_6 = 0;

 FUNC_0(VAR_0, &VAR_2, &VAR_3, &VAR_4, &VAR_5);

 if (VAR_2 != 0) {
  VAR_6 += FUNC_1(VAR_1);
  if (VAR_3 != 0)
   VAR_6++;
 }

 switch (VAR_4) {
  case 1:
   VAR_6 += FUNC_1(VAR_5);
   break;
  case 3:
  case 4:
   if (VAR_2 != 0)
    VAR_6 += FUNC_1(VAR_5);
 }
 return (VAR_6);
}
