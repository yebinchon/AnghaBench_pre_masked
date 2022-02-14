
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct utsname {char* release; } ;


 int VAR_0 ;
 int VAR_1 ;
 long FUNC_0 (char*,char**,int) ;
 int FUNC_1 (struct utsname*) ;

__attribute__((used)) static void
FUNC_2(void) {

  struct utsname VAR_2;
  char *VAR_3;
  long int VAR_4;
  long int VAR_5;

  FUNC_1(&VAR_2);


  VAR_4 = FUNC_0(VAR_2.release, &VAR_3, 10);
  if (*VAR_3 == '.') {
  VAR_5 = FUNC_0(VAR_3+1, &VAR_3, 10);
  if ((VAR_4 > 2) || ((VAR_4 == 2) && (VAR_5 >= 4))) {
   VAR_1 = VAR_0;
  }
  }

}
