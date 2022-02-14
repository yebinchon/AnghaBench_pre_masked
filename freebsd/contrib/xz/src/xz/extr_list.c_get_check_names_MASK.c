
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int * VAR_2 ;
 int FUNC_2 (char**,size_t*,char*,char const*,int ) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void
FUNC_3(char VAR_4[VAR_0],
  uint32_t VAR_5, bool VAR_6)
{



 if (VAR_5 == 0)
  VAR_5 = 1;

 char *VAR_7 = VAR_4;
 size_t VAR_8 = VAR_0;

 const char *VAR_9 = VAR_6 ? ", " : ",";
 bool VAR_10 = 0;

 for (size_t VAR_11 = 0; VAR_11 <= VAR_1; ++VAR_11) {
  if (VAR_5 & (FUNC_0(1) << VAR_11)) {
   FUNC_2(&VAR_7, &VAR_8, "%s%s",
     VAR_10 ? VAR_9 : "",
     VAR_3 ? VAR_2[VAR_11]
      : FUNC_1(VAR_2[VAR_11]));
   VAR_10 = 1;
  }
 }

 return;
}
