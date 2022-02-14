
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int buf ;
typedef int __register_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*,int*) ;
 char* FUNC_3 (char*) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*,char*,int) ;
 scalar_t__ FUNC_6 (char*) ;
 char* FUNC_7 (char**,char*) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_8(__register_t VAR_2)
{
 char VAR_3[2048];
 char *VAR_4, *VAR_5, *VAR_6;
 uint32_t VAR_7;




 if (VAR_2 & 1) {
  VAR_1 = VAR_2;
  return;
 }

 VAR_4 = (void *)(intptr_t)VAR_2;
 while (*VAR_4 != '\0') {
  FUNC_5(VAR_3, VAR_4, sizeof(VAR_3));
  VAR_5 = VAR_3;
  VAR_6 = FUNC_7(&VAR_5, "=");
  if (VAR_5 == ((void*)0))
   FUNC_4(VAR_6, "1");
  else
   FUNC_4(VAR_6, VAR_5);
  VAR_4 += FUNC_6(VAR_4) + 1;
 }


 if (FUNC_2("cpumask", &VAR_7) != 0)
  VAR_1 = VAR_7;


 VAR_5 = FUNC_3("bootargs");
 if (VAR_5 != ((void*)0)) {
  FUNC_5(VAR_3, VAR_5, sizeof(VAR_3));
  VAR_0 |= FUNC_0(VAR_3);
  FUNC_1(VAR_5);
 }
}
