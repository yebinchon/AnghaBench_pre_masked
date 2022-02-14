
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct uart_class {int dummy; } ;


 size_t FUNC_0 (struct uart_class**) ;
 size_t FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char const*,char const*,size_t) ;
 struct uart_class** VAR_0 ;
 char* FUNC_3 (struct uart_class*) ;

__attribute__((used)) static struct uart_class *
FUNC_4(struct uart_class *VAR_1, const char **VAR_2)
{
 struct uart_class *VAR_3;
 const char *VAR_4;
 size_t VAR_5;
 u_int VAR_6;

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_0); VAR_6++) {
  VAR_3 = VAR_0[VAR_6];
  VAR_4 = FUNC_3(VAR_3);
  if (VAR_4 == ((void*)0) || *VAR_4 == '\0')
   continue;
  VAR_5 = FUNC_1(VAR_4);
  if (FUNC_2(VAR_4, *VAR_2, VAR_5) == 0) {
   *VAR_2 += VAR_5;
   return (VAR_3);
  }
 }
 return (VAR_1);
}
