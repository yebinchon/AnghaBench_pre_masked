
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u_char ;
struct nb_name {char* nn_name; char nn_type; char* nn_scope; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char**,char,int) ;
 int FUNC_1 (char*) ;
 char FUNC_2 (int ) ;

int
FUNC_3(struct nb_name *VAR_3, u_char *VAR_4)
{
 u_char *VAR_5, *VAR_6;
 u_char *VAR_7 = VAR_4;
 int VAR_8, VAR_9;

 *VAR_7++ = VAR_0;
 VAR_5 = VAR_3->nn_name;
 if (VAR_5[0] == '*' && VAR_5[1] == 0) {
  FUNC_0(&VAR_7, '*', 1);
  FUNC_0(&VAR_7, ' ', VAR_2 - 1);
 } else {
  for (VAR_8 = 0; VAR_8 < VAR_2 - 1; VAR_8++)
   if (*VAR_5 != 0)
    FUNC_0(&VAR_7, FUNC_2(*VAR_5++), 1);
   else
    FUNC_0(&VAR_7, ' ', 1);
  FUNC_0(&VAR_7, VAR_3->nn_type, 1);
 }
 *VAR_7 = 0;
 if (VAR_3->nn_scope == ((void*)0))
  return FUNC_1(VAR_4);
 VAR_6 = VAR_7++;
 VAR_9 = 0;
 for (VAR_5 = VAR_3->nn_scope; ; VAR_5++) {
  if (*VAR_5 == '.' || *VAR_5 == 0) {
   *VAR_6 = VAR_9;
   VAR_6 = VAR_7++;
   *VAR_6 = 0;
   if (*VAR_5 == 0)
    break;
  } else {
   if (VAR_9 < VAR_1) {
    *VAR_7++ = *VAR_5;
    VAR_9++;
   }
  }
 }
 return FUNC_1(VAR_4);
}
