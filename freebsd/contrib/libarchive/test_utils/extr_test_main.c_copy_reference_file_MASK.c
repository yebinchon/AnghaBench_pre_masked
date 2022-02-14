
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buff ;
typedef int FILE ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char const*,char*) ;
 size_t FUNC_4 (char*,int,int,int *) ;
 size_t FUNC_5 (char*,int,size_t,int *) ;
 int FUNC_6 (char*) ;
 char* VAR_0 ;
 int FUNC_7 (char*,char*,char*,char const*) ;

void
FUNC_8(const char *VAR_1)
{
 char VAR_2[1024];
 FILE *VAR_3, *VAR_4;
 size_t VAR_5;

 FUNC_7(VAR_2, "%s/%s", VAR_0, VAR_1);
 VAR_3 = FUNC_3(VAR_2, "rb");
 FUNC_1("Couldn't open reference file %s", VAR_2);
 FUNC_0(VAR_3 != ((void*)0));
 if (VAR_3 == ((void*)0))
  return;


 VAR_4 = FUNC_3(VAR_1, "wb");
 while ((VAR_5 = FUNC_4(VAR_2, 1, sizeof(VAR_2), VAR_3)) > 0) {
  if (FUNC_5(VAR_2, 1, VAR_5, VAR_4) != VAR_5) {
   FUNC_6("Error: fwrite\n");
   break;
  }
 }
 FUNC_2(VAR_4);
 FUNC_2(VAR_3);
}
