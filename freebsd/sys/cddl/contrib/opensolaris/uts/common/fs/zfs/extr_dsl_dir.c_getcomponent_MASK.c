
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (char*,void*) ;
 scalar_t__ FUNC_2 (char const*,char) ;
 int FUNC_3 (char*,char const*) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (char*,char const*,int) ;
 char* FUNC_6 (char const*,char*) ;

__attribute__((used)) static int
FUNC_7(const char *VAR_4, char *VAR_5, const char **VAR_6)
{
 char *VAR_7;

 if ((VAR_4 == ((void*)0)) || (VAR_4[0] == '\0'))
  return (FUNC_0(VAR_2));

 VAR_7 = FUNC_6(VAR_4, "/@");
 if (VAR_7 && (VAR_7[1] == '/' || VAR_7[1] == '@')) {

  return (FUNC_0(VAR_0));
 }
 if (VAR_7 == ((void*)0) || VAR_7 == VAR_4) {





  if (VAR_7 != ((void*)0) &&
      (VAR_7[0] != '@' || FUNC_6(VAR_4+1, "/@") || VAR_7[1] == '\0'))
   return (FUNC_0(VAR_0));
  if (FUNC_4(VAR_4) >= VAR_3)
   return (FUNC_0(VAR_1));
  (void) FUNC_3(VAR_5, VAR_4);
  VAR_7 = ((void*)0);
 } else if (VAR_7[0] == '/') {
  if (VAR_7 - VAR_4 >= VAR_3)
   return (FUNC_0(VAR_1));
  (void) FUNC_5(VAR_5, VAR_4, VAR_7 - VAR_4);
  VAR_5[VAR_7 - VAR_4] = '\0';
  VAR_7++;
 } else if (VAR_7[0] == '@') {




  if (FUNC_2(VAR_4, '/'))
   return (FUNC_0(VAR_0));
  if (VAR_7 - VAR_4 >= VAR_3)
   return (FUNC_0(VAR_1));
  (void) FUNC_5(VAR_5, VAR_4, VAR_7 - VAR_4);
  VAR_5[VAR_7 - VAR_4] = '\0';
 } else {
  FUNC_1("invalid p=%p", (void *)VAR_7);
 }
 *VAR_6 = VAR_7;
 return (0);
}
