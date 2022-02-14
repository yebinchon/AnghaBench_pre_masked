
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 unsigned char* FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int,unsigned char*,int) ;

__attribute__((used)) static char *FUNC_5(int VAR_0)
{
 static char VAR_1[] = "/tmp/test-XXXXXX";
 char *VAR_2 = VAR_1;
 int VAR_3, VAR_4;
 unsigned char *VAR_5;

 VAR_3 = FUNC_2(VAR_2);
 if (VAR_3 < 0) {
  FUNC_3("mkstemp failed");
  return ((void*)0);
 }

 VAR_5 = FUNC_1(VAR_0);
 if (!VAR_5) {
  FUNC_0(VAR_3);
  return ((void*)0);
 }

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  VAR_5[VAR_4] = (unsigned char) ((int) VAR_4 % 10);

 if (VAR_0 != FUNC_4(VAR_3, VAR_5, VAR_0))
  VAR_2 = ((void*)0);

 FUNC_0(VAR_3);
 return VAR_2;
}
