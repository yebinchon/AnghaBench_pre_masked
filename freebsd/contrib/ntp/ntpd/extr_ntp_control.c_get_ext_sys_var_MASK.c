
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ctl_var {int flags; char* text; } ;


 int VAR_0 ;
 struct ctl_var* VAR_1 ;
 int FUNC_0 (char const*,char*,size_t) ;
 size_t FUNC_1 (char const*) ;

const char *
FUNC_2(const char *VAR_2)
{
 struct ctl_var * VAR_3;
 size_t VAR_4;
 const char * VAR_5;

 VAR_5 = ((void*)0);
 VAR_4 = FUNC_1(VAR_2);
 for (VAR_3 = VAR_1; !(VAR_0 & VAR_3->flags); VAR_3++) {
  if (((void*)0) != VAR_3->text && !FUNC_0(VAR_2, VAR_3->text, VAR_4)) {
   if ('=' == VAR_3->text[VAR_4]) {
    VAR_5 = VAR_3->text + VAR_4 + 1;
    break;
   } else if ('\0' == VAR_3->text[VAR_4]) {
    VAR_5 = "";
    break;
   }
  }
 }

 return VAR_5;
}
