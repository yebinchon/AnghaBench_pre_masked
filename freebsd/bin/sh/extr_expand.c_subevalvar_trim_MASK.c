
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nodelist {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int,char*) ;




 int FUNC_2 () ;
 char* FUNC_3 (char const*,struct nodelist**,int,int *) ;
 char* VAR_2 ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*,char*,char*) ;
 char* FUNC_6 () ;

__attribute__((used)) static const char *
FUNC_7(const char *VAR_3, struct nodelist **restrict VAR_4, int VAR_5,
    int VAR_6, int VAR_7)
{
 char *VAR_8;
 char *VAR_9 = ((void*)0);
 char *VAR_10;
 int VAR_11 = 0;
 int VAR_12;

 VAR_3 = FUNC_3(VAR_3, VAR_4, VAR_0 | VAR_1, ((void*)0));
 FUNC_0(VAR_2);
 VAR_8 = FUNC_6() + VAR_7;
 VAR_10 = FUNC_6() + VAR_5;

 switch (VAR_6) {
 case 131:
  for (VAR_9 = VAR_8; VAR_9 < VAR_10; VAR_9++) {
   VAR_11 = *VAR_9;
   *VAR_9 = '\0';
   if (FUNC_4(VAR_10, VAR_8)) {
    *VAR_9 = VAR_11;
    FUNC_5(VAR_10, VAR_9, VAR_8);
    return VAR_3;
   }
   *VAR_9 = VAR_11;
  }
  break;

 case 130:
  for (VAR_9 = VAR_10 - 1; VAR_9 >= VAR_8;) {
   VAR_11 = *VAR_9;
   *VAR_9 = '\0';
   if (FUNC_4(VAR_10, VAR_8)) {
    *VAR_9 = VAR_11;
    FUNC_5(VAR_10, VAR_9, VAR_8);
    return VAR_3;
   }
   *VAR_9 = VAR_11;
   VAR_9--;
  }
  break;

 case 129:
  for (VAR_9 = VAR_10 - 1; VAR_9 >= VAR_8;) {
   if (FUNC_4(VAR_10, VAR_9)) {
    VAR_12 = VAR_9 - VAR_2;
    FUNC_1(VAR_12, VAR_2);
    return VAR_3;
   }
   VAR_9--;
  }
  break;

 case 128:
  for (VAR_9 = VAR_8; VAR_9 < VAR_10 - 1; VAR_9++) {
   if (FUNC_4(VAR_10, VAR_9)) {
    VAR_12 = VAR_9 - VAR_2;
    FUNC_1(VAR_12, VAR_2);
    return VAR_3;
   }
  }
  break;


 default:
  FUNC_2();
 }
 VAR_12 = (VAR_2 - FUNC_6() - VAR_5) + 1;
 FUNC_1(-VAR_12, VAR_2);
 return VAR_3;
}
