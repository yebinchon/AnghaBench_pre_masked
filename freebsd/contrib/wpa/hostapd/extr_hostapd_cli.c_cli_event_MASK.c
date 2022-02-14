
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char const*) ;
 int FUNC_1 (int *,char const*) ;
 char* FUNC_2 (char const*,char) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (char const*,int ) ;

__attribute__((used)) static void FUNC_4(const char *VAR_3)
{
 const char *VAR_4, *VAR_5;

 VAR_4 = FUNC_2(VAR_3, '>');
 if (VAR_4 == ((void*)0))
  return;

 VAR_4++;

 if (FUNC_3(VAR_4, VAR_0)) {
  VAR_5 = FUNC_2(VAR_4, ' ');
  if (VAR_5 == ((void*)0))
   return;
  FUNC_0(&VAR_2, VAR_5 + 1);
  return;
 }

 if (FUNC_3(VAR_4, VAR_1)) {
  VAR_5 = FUNC_2(VAR_4, ' ');
  if (VAR_5 == ((void*)0))
   return;
  FUNC_1(&VAR_2, VAR_5 + 1);
  return;
 }
}
