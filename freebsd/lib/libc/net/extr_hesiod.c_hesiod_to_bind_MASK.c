
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hesiod_p {char* rhs; char const* lhs; } ;
typedef int bindname ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (void*,char**) ;
 char** FUNC_1 (void*,char*,char*) ;
 int FUNC_2 (char*,char const*) ;
 char* FUNC_3 (char*,char) ;
 char* FUNC_4 (char*) ;
 int FUNC_5 (char*,char const*,int) ;
 int FUNC_6 (char const*) ;

char *
FUNC_7(void *VAR_5, const char *VAR_6, const char *VAR_7)
{
 struct hesiod_p *VAR_8 = (struct hesiod_p *) VAR_5;
 char VAR_9[VAR_3], *VAR_10, *VAR_11, **VAR_12 = ((void*)0);
 const char *VAR_13;
 int VAR_14;

 if (FUNC_5(VAR_9, VAR_6, sizeof(VAR_9)) >= sizeof(VAR_9)) {
  VAR_4 = VAR_0;
  return ((void*)0);
 }





 VAR_10 = FUNC_3(VAR_9, '@');
 if (VAR_10) {
  *VAR_10++ = 0;
  if (FUNC_3(VAR_10, '.'))
   VAR_13 = VAR_6 + (VAR_10 - VAR_9);
  else {
   VAR_12 = FUNC_1(VAR_5, VAR_10, "rhs-extension");
   if (VAR_12)
    VAR_13 = *VAR_12;
   else {
    VAR_4 = VAR_1;
    return ((void*)0);
   }
  }
 } else
  VAR_13 = VAR_8->rhs;


 VAR_14 = FUNC_6(VAR_9) + 1 + FUNC_6(VAR_7);
 if (VAR_8->lhs)
  VAR_14 += FUNC_6(VAR_8->lhs) + ((VAR_8->lhs[0] != '.') ? 1 : 0);
 VAR_14 += FUNC_6(VAR_13) + ((VAR_13[0] != '.') ? 1 : 0);
 if (VAR_14 > sizeof(VAR_9) - 1) {
  if (VAR_12)
   FUNC_0(VAR_5, VAR_12);
  VAR_4 = VAR_0;
  return ((void*)0);
 }

 FUNC_2(VAR_9, ".");
 FUNC_2(VAR_9, VAR_7);

 if (VAR_8->lhs && VAR_8->lhs[0] != '\0' ) {
  if (VAR_8->lhs[0] != '.')
   FUNC_2(VAR_9, ".");
  FUNC_2(VAR_9, VAR_8->lhs);
 }
 if (VAR_13[0] != '.')
  FUNC_2(VAR_9, ".");
 FUNC_2(VAR_9, VAR_13);


 if (VAR_12)
  FUNC_0(VAR_5, VAR_12);


 VAR_11 = FUNC_4(VAR_9);
 if (!VAR_11)
  VAR_4 = VAR_2;
 return VAR_11;
}
