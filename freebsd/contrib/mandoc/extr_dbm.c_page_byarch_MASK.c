
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dbm_res {int member_0; int page; int member_1; } ;
struct dbm_match {int dummy; } ;
typedef size_t int32_t ;
struct TYPE_2__ {scalar_t__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (struct dbm_match const*,char const*) ;
 int VAR_2 ;
 size_t VAR_3 ;
 TYPE_1__* VAR_4 ;
 char* FUNC_2 (char const*,char) ;

__attribute__((used)) static struct dbm_res
FUNC_3(const struct dbm_match *VAR_5)
{
 static const struct dbm_match *VAR_6;
 struct dbm_res VAR_7 = {-1, 0};
 static int32_t VAR_8;
 const char *VAR_9;



 if (VAR_5 != ((void*)0)) {
  VAR_2 = VAR_0;
  VAR_6 = VAR_5;
  VAR_8 = 0;
  return VAR_7;
 }



 for ( ; VAR_8 < VAR_3; VAR_8++)
  if (VAR_4[VAR_8].arch)
   for (VAR_9 = FUNC_0(VAR_4[VAR_8].arch);
       *VAR_9 != '\0';
       VAR_9 = FUNC_2(VAR_9, '\0') + 1)
    if (FUNC_1(VAR_6, VAR_9)) {
     VAR_7.page = VAR_8++;
     return VAR_7;
    }



 VAR_2 = VAR_1;
 VAR_6 = ((void*)0);
 return VAR_7;
}
