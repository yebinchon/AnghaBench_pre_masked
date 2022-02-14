
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int rm_so; int rm_eo; } ;
typedef TYPE_1__ regmatch_t ;


 int FUNC_0 (char*,char const*,char*,size_t) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,char*,char*,int,size_t) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,size_t,char*,...) ;
 char* FUNC_5 (char const*) ;
 int FUNC_6 (char const*) ;

__attribute__((used)) static void
FUNC_7(const char *VAR_0, size_t VAR_1, const regmatch_t *VAR_2,
    size_t VAR_3)
{
 if (VAR_1 == 0)
  return;

 char *VAR_4;
 size_t VAR_5 = FUNC_6(VAR_0) + 1, VAR_6 = 0;

 FUNC_1((VAR_4 = FUNC_5(VAR_0)) != ((void*)0));
 for (size_t VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
  int VAR_8;
  if (VAR_2[VAR_7].rm_so == -1 && VAR_2[VAR_7].rm_eo == -1)
   VAR_8 = FUNC_4(VAR_4 + VAR_6, VAR_5 - VAR_6, "(?,?)");
  else
   VAR_8 = FUNC_4(VAR_4 + VAR_6, VAR_5 - VAR_6, "(%lld,%lld)",
       (long long)VAR_2[VAR_7].rm_so, (long long)VAR_2[VAR_7].rm_eo);
  FUNC_2((size_t) VAR_8 < VAR_5 - VAR_6, "String too long %s"
      " cur=%d, max=%zu", VAR_4, VAR_8, VAR_5 - VAR_6);
  VAR_6 += VAR_8;
 }
 FUNC_0(VAR_4, VAR_0, " at line %zu", VAR_3);
 FUNC_3(VAR_4);
}
