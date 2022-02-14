
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct config_strlist {char const* str; } ;
typedef int rr ;
typedef int buf ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,int *,size_t*,int *,int,int *,int ,int *,int ) ;
 scalar_t__ FUNC_4 (int *,size_t,int) ;
 int FUNC_5 (char*,int,char*,char*,char const*) ;

__attribute__((used)) static int
FUNC_6(const char* VAR_2, const struct config_strlist* VAR_3)
{
 char VAR_4[65536];
 uint8_t VAR_5[VAR_0];
 size_t VAR_6 = sizeof(VAR_5);
 int VAR_7;


 FUNC_5(VAR_4, sizeof(VAR_4), "%s %s", ".", VAR_2);
 VAR_7 = FUNC_3(VAR_4, VAR_5, &VAR_6, ((void*)0), 3600, ((void*)0), 0,
  ((void*)0), 0);



 if(VAR_7 == 0 && VAR_3) {
  const char* VAR_8 = ((void*)0);

  if(FUNC_4(VAR_5, VAR_6, 1) == VAR_1) {

   VAR_8 = VAR_2;
  } else {
   FUNC_5(VAR_4, sizeof(VAR_4), "%s %s", ".", VAR_3->str);
   VAR_6 = sizeof(VAR_5);
   VAR_7 = FUNC_3(VAR_4, VAR_5, &VAR_6, ((void*)0), 3600,
    ((void*)0), 0, ((void*)0), 0);
   if(VAR_7 != 0) {



    return 0;
   }
   if(FUNC_4(VAR_5, VAR_6, 1) ==
    VAR_1)
    VAR_8 = VAR_3->str;
  }
  if(VAR_8) {
   FUNC_1("redirect tag data '%s' must not coexist with "
    "other data.", VAR_8);
   return 0;
  }
 }
 if(VAR_7 == 0)
  return 1;
 FUNC_1("rr data [char %d] parse error %s",
  (int)FUNC_0(VAR_7)-13,
  FUNC_2(VAR_7));
 return 0;
}
