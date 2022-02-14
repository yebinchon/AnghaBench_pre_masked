
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int,char*,char const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 int * FUNC_3 (char const*,char*) ;
 char* FUNC_4 (int *,size_t*,size_t*,int *,int ) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (char*,int *) ;
 int FUNC_7 (char*,int ) ;
 int VAR_1 ;

void
FUNC_8(const char *VAR_2)
{
 FILE *VAR_3;
 char *VAR_4;
 size_t VAR_5, VAR_6;

 if ((VAR_3 = FUNC_3(VAR_2, "r")) == ((void*)0))
  FUNC_0(1, "Cannot open `%s'", VAR_2);

 while ((VAR_4 = FUNC_4(VAR_3, &VAR_5, &VAR_6, ((void*)0), VAR_0))) {
  uint32_t VAR_7;
  if (FUNC_6(VAR_4, &VAR_7))
   FUNC_0(1, "Duplicate entry %s", VAR_4);
  FUNC_7(VAR_4, VAR_7);
  FUNC_2(VAR_4);
  FUNC_5(VAR_4);
 }

 FUNC_1(VAR_3);
 VAR_1 = 1;
}
