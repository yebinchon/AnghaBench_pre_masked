
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (int) ;
 char const* VAR_3 ;
 scalar_t__ FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (char const*,size_t) ;
 int FUNC_5 (char*,char const*,size_t) ;
 int FUNC_6 (int ,char const*) ;
 int FUNC_7 (char const*,char const*) ;
 int VAR_4 ;
 scalar_t__ FUNC_8 (char const*,char*) ;
 int FUNC_9 (char const*) ;
 char* FUNC_10 (char const*,char) ;
 scalar_t__ FUNC_11 (char const*,char const*,size_t) ;
 char* FUNC_12 (size_t) ;

__attribute__((used)) static char *
FUNC_13(const char *VAR_5, size_t VAR_6)
{

 static const char *const VAR_7[][4] = {
  {
   ".xz",
   ".txz",
   ((void*)0)
  }, {
   ".lzma",



   ".tlz",
   ((void*)0)






  }, {


   ((void*)0)
  }
 };


 FUNC_2(VAR_4 != VAR_0);

 const size_t VAR_8 = VAR_4 - 1;
 const char *const *VAR_9 = VAR_7[VAR_8];


 for (size_t VAR_10 = 0; VAR_9[VAR_10] != ((void*)0); ++VAR_10) {
  if (FUNC_11(VAR_9[VAR_10], VAR_5, VAR_6) != 0) {
   FUNC_7(VAR_5, VAR_9[VAR_10]);
   return ((void*)0);
  }
 }
 if (VAR_3 != ((void*)0)) {
  if (FUNC_11(VAR_3, VAR_5, VAR_6) != 0) {
   FUNC_7(VAR_5, VAR_3);
   return ((void*)0);
  }
 }



 if (VAR_4 == VAR_1 && VAR_3 == ((void*)0)) {
  FUNC_6(FUNC_0("%s: With --format=raw, "
    "--suffix=.SUF is required unless "
    "writing to stdout"), VAR_5);
  return ((void*)0);
 }

 const char *VAR_11 = VAR_3 != ((void*)0)
   ? VAR_3 : VAR_9[0];
 size_t VAR_12 = FUNC_9(VAR_11);
 char *VAR_13 = FUNC_12(VAR_6 + VAR_12 + 1);

 FUNC_5(VAR_13, VAR_5, VAR_6);
 FUNC_5(VAR_13 + VAR_6, VAR_11, VAR_12);
 VAR_13[VAR_6 + VAR_12] = '\0';

 return VAR_13;
}
