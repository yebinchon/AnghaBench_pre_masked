
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u_char ;
struct nb_name {char* nn_scope; } ;


 int VAR_0 ;
 int VAR_1 ;

int
FUNC_0(struct nb_name *VAR_2)
{
 u_char *VAR_3;
 int VAR_4, VAR_5;

 VAR_4 = 1 + VAR_0;
 if (VAR_2->nn_scope == ((void*)0))
  return VAR_4 + 1;
 VAR_5 = 0;
 for (VAR_3 = VAR_2->nn_scope; *VAR_3; VAR_3++) {
  if (*VAR_3 == '.') {
   VAR_5 = 0;
  } else {
   if (VAR_5 < VAR_1) {
    VAR_5++;
    VAR_4++;
   }
  }
 }
 return VAR_4 + 1;
}
