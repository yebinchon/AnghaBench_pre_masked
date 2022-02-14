
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pam_handle_t ;


 int FUNC_0 (char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char const) ;
 int FUNC_3 (int ) ;

int
FUNC_4(const pam_handle_t *VAR_8,
    char *VAR_9, size_t *VAR_10, const char *VAR_11)
{
 size_t VAR_12;
 int VAR_13;

 FUNC_0(VAR_11);
 if (VAR_11 == ((void*)0))
  VAR_11 = "(null)";

 VAR_12 = 1;
 VAR_13 = VAR_4;
 while (*VAR_11 && VAR_13 == VAR_4) {
  if (VAR_11[0] == '%') {
   ++VAR_11;
   switch (*VAR_11) {
   case 's':
    FUNC_3(VAR_3);
    break;
   case 't':
    FUNC_3(VAR_6);
    break;
   case 'h':
    FUNC_3(VAR_0);
    break;
   case 'u':
    FUNC_3(VAR_7);
    break;
   case 'H':
    FUNC_3(VAR_1);
    break;
   case 'U':
    FUNC_3(VAR_2);
    break;
   case '\0':
    FUNC_2('%');
    break;
   default:
    FUNC_2('%');
    FUNC_2(*VAR_11);
   }
   ++VAR_11;
  } else {
   FUNC_2(*VAR_11++);
  }
 }
 if (VAR_9)
  *VAR_9 = '\0';
 if (VAR_13 == VAR_4) {
  if (VAR_12 > *VAR_10)
   VAR_13 = VAR_5;
  *VAR_10 = VAR_12;
 }
 FUNC_1(VAR_13);
}
