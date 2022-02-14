
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int,char*) ;
 int * VAR_3 ;
 int FUNC_1 (char const*,char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*,int ) ;

int
FUNC_4(int VAR_4, FILE *VAR_5, const char *VAR_6)
{

 if (VAR_5 == ((void*)0)) {
  VAR_3 = FUNC_0(VAR_4, "w");
  if (VAR_3 == ((void*)0)) {
   int VAR_7 = VAR_2;
   FUNC_3(VAR_0, "fdopen() failed: %s",
       FUNC_2(VAR_2));
   return VAR_7;
  }
 } else
  VAR_3 = VAR_5;
 VAR_1 = !FUNC_1(VAR_6, "netascii");
 return 0;
}
