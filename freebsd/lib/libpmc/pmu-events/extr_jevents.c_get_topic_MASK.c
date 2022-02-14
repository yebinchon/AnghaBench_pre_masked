
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char**,char*,int ) ;
 int FUNC_1 (char*,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (char*) ;
 int VAR_1 ;

__attribute__((used)) static char *FUNC_3(void)
{
 char *VAR_2;
 int VAR_3;


 VAR_3 = FUNC_0(&VAR_2, "%d", VAR_1);
 if (VAR_3 < 0) {
  FUNC_1("%s: asprintf() error %s\n", VAR_0);
  return ((void*)0);
 }

 for (VAR_3 = 0; VAR_3 < (int) FUNC_2(VAR_2); VAR_3++) {
  char VAR_4 = VAR_2[VAR_3];

  if (VAR_4 == '-')
   VAR_2[VAR_3] = ' ';
  else if (VAR_4 == '.') {
   VAR_2[VAR_3] = '\0';
   break;
  }
 }

 return VAR_2;
}
