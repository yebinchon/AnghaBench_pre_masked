
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct codestring {int code; char const* string1; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int ,char*,char const*,int) ;

__attribute__((used)) static const char *
FUNC_2(
 int VAR_1,
 const struct codestring * VAR_2
 )
{
 char * VAR_3;

 while (VAR_2->code != -1) {
  if (VAR_2->code == VAR_1)
   return VAR_2->string1;
  VAR_2++;
 }

 FUNC_0(VAR_3);
 FUNC_1(VAR_3, VAR_0, "%s_%d", VAR_2->string1, VAR_1);

 return VAR_3;
}
