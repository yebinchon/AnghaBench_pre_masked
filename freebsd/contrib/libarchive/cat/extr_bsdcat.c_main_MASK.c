
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bsdcat {char** argv; int argc; } ;



 int VAR_0 ;
 int FUNC_0 (int ) ;
 char* VAR_1 ;
 int FUNC_1 (struct bsdcat*) ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ) ;
 int VAR_2 ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (struct bsdcat*,int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 () ;

int
FUNC_9(int VAR_5, char **VAR_6)
{
 struct bsdcat *VAR_7, VAR_8;
 int VAR_9;

 VAR_7 = &VAR_8;
 FUNC_6(VAR_7, 0, sizeof(*VAR_7));

 FUNC_5(*VAR_6, "bsdcat");

 VAR_7->argv = VAR_6;
 VAR_7->argc = VAR_5;

 while ((VAR_9 = FUNC_1(VAR_7)) != -1) {
  switch (VAR_9) {
  case 'h':
   FUNC_7(VAR_4, 0);
   break;
  case 128:
   FUNC_8();
   break;
  default:
   FUNC_7(VAR_3, 1);
  }
 }

 FUNC_2();
 if (*VAR_7->argv == ((void*)0)) {
  VAR_1 = "<stdin>";
  FUNC_3(((void*)0));
 } else {
  while (*VAR_7->argv) {
   VAR_1 = *VAR_7->argv++;
   FUNC_3(VAR_1);
   FUNC_2();
  }
  FUNC_0(VAR_0);
 }

 FUNC_4(VAR_2);
}
