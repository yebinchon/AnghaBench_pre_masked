
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int name ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (unsigned int,unsigned int,unsigned int,char*,int) ;
 char** VAR_4 ;
 int FUNC_1 (unsigned int,unsigned int) ;
 int FUNC_2 (char*,char*,...) ;
 int FUNC_3 (char*,char const*) ;

int FUNC_4(const char *VAR_5, bool VAR_6)
{
 unsigned int VAR_7, VAR_8, VAR_9, VAR_10 = 0;
 char VAR_11[64];

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {

   if (!FUNC_1(VAR_7, VAR_8))
    continue;

   for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9++) {
    FUNC_0(VAR_7, VAR_8, VAR_9,
         VAR_11, sizeof(VAR_11));
    if (VAR_5 != ((void*)0) && !FUNC_3(VAR_11, VAR_5))
     continue;

    if (VAR_6)
     FUNC_2("%s ", VAR_11);
    else
     FUNC_2("  %-50s [%s]\n", VAR_11,
            VAR_4[VAR_3]);
    ++VAR_10;
   }
  }
 }

 return VAR_10;
}
