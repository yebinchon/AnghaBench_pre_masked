
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ssize_t ;
typedef int msg ;
typedef int buf ;


 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (char*,scalar_t__,char*) ;
 scalar_t__ FUNC_2 (int,char*,int) ;
 int FUNC_3 (int,char const*,scalar_t__) ;
 scalar_t__ FUNC_4 (char*,char const*) ;
 scalar_t__ FUNC_5 (char const*) ;

__attribute__((used)) static int
FUNC_6(int VAR_0, int VAR_1)
{
 size_t VAR_2;
 ssize_t VAR_3;
 static const char VAR_4[] = "hello world\n";
 char VAR_5[sizeof(VAR_4)+10];

 FUNC_0(VAR_5, 0, sizeof(VAR_5));
 FUNC_3(VAR_0, VAR_4, FUNC_5(VAR_4));
 VAR_3 = FUNC_2(VAR_1, VAR_5, sizeof(VAR_5));
 if (VAR_3 < (ssize_t)FUNC_5(VAR_4)) {
  FUNC_1("short message read: %zd chars: \"%s\"\n", VAR_3, VAR_5);
  return 1;
 }
 for (VAR_2 = 0; VAR_2 < sizeof(VAR_5); VAR_2++) {
  if (VAR_5[VAR_2] == '\r' || VAR_5[VAR_2] == '\n') {
   VAR_5[VAR_2] = '\n';
   VAR_5[VAR_2+1] = '\0';
   break;
  }
 }

 return FUNC_4(VAR_5, VAR_4) != 0;
}
