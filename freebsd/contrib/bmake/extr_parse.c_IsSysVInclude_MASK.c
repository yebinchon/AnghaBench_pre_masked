
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Boolean ;


 int VAR_0 ;
 int FUNC_0 (char const*,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (unsigned char) ;
 char* FUNC_2 (char const*,char) ;

__attribute__((used)) static Boolean
FUNC_3(const char *VAR_2)
{
 const char *VAR_3;

 if (!FUNC_0(VAR_2, VAR_1))
  return VAR_0;


 for (VAR_3 = VAR_2; (VAR_3 = FUNC_2(VAR_3, ':')) != ((void*)0);) {
  if (*++VAR_3 == '\0') {

   return VAR_0;
  }
  if (*VAR_3 == ':' || FUNC_1((unsigned char)*VAR_3)) {

   return VAR_0;
  }
 }
 return VAR_1;
}
