
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ kptr_restrict; } ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (char const*,int *) ;
 scalar_t__ FUNC_2 (char*,char const*) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static bool FUNC_3(const char *VAR_1,
     const char *VAR_2)
{
 bool VAR_3 = 0;

 if (VAR_0.kptr_restrict) {
  char *VAR_4 = FUNC_1(VAR_1, ((void*)0));

  if (VAR_4 != ((void*)0)) {
   VAR_3 = FUNC_2(VAR_4, VAR_2) == 0;
   FUNC_0(VAR_4);
   return VAR_3;
  }
 }

 return VAR_3;
}
