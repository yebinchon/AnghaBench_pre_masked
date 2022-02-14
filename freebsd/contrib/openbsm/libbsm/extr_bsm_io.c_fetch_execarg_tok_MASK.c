
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u_int32_t ;
typedef char u_char ;
struct TYPE_5__ {size_t count; char** text; } ;
struct TYPE_6__ {TYPE_1__ execarg; } ;
struct TYPE_7__ {int len; TYPE_2__ tt; } ;
typedef TYPE_3__ tokenstr_t ;


 size_t VAR_0 ;
 int FUNC_0 (char*,int,size_t,int,int) ;

__attribute__((used)) static int
FUNC_1(tokenstr_t *VAR_1, u_char *VAR_2, int VAR_3)
{
 int VAR_4 = 0;
 u_int32_t VAR_5;
 u_char *VAR_6;

 FUNC_0(VAR_2, VAR_3, VAR_1->tt.execarg.count, VAR_1->len, VAR_4);
 if (VAR_4)
  return (-1);

 for (VAR_5 = 0; VAR_5 < VAR_1->tt.execarg.count; VAR_5++) {
  VAR_6 = VAR_2 + VAR_1->len;
  if (VAR_5 < VAR_0)
   VAR_1->tt.execarg.text[VAR_5] = (char*)VAR_6;


  while (VAR_6 && (*VAR_6 != '\0')) {
   if (++VAR_1->len >= (u_int32_t)VAR_3)
    return (-1);
   VAR_6 = VAR_2 + VAR_1->len;
  }
  if (!VAR_6)
   return (-1);
  VAR_1->len++;
 }
 if (VAR_1->tt.execarg.count > VAR_0)
  VAR_1->tt.execarg.count = VAR_0;

 return (0);
}
