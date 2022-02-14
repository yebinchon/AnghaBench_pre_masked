
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive {char* current_code; int current_oemcp; int current_codepage; } ;


 char* FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 char* FUNC_3 (char const*) ;

__attribute__((used)) static const char *
FUNC_4(struct archive *VAR_0)
{
 const char *VAR_1;

 if (VAR_0 == ((void*)0))
  VAR_1 = FUNC_0("");
 else {
  VAR_1 = FUNC_0(VAR_0->current_code);
  if (VAR_0->current_code == ((void*)0)) {
   VAR_0->current_code = FUNC_3(VAR_1);
   VAR_0->current_codepage = FUNC_1();
   VAR_0->current_oemcp = FUNC_2();
  }
 }
 return (VAR_1);
}
