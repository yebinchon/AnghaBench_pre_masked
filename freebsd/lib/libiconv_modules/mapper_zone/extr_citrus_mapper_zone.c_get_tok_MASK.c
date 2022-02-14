
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _parse_state {int ps_state; } ;
struct _memstream {int dummy; } ;


 int VAR_0 ;


 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct _memstream*) ;
 int FUNC_2 (struct _memstream*) ;
 int FUNC_3 (struct _memstream*,struct _parse_state*) ;

__attribute__((used)) static int
FUNC_4(struct _memstream *VAR_2, struct _parse_state *VAR_3)
{
 int VAR_4;

loop:
 VAR_4 = FUNC_2(VAR_2);
 if (VAR_4 == 0x00)
  return (VAR_0);
 if (FUNC_0(VAR_4)) {
  FUNC_1(VAR_2);
  goto loop;
 }

 switch (VAR_3->ps_state) {
 case 129:
  switch (VAR_4) {
  case ':':
  case '-':
  case '/':
   FUNC_1(VAR_2);
   return (VAR_4);
  case '0':
  case '1':
  case '2':
  case '3':
  case '4':
  case '5':
  case '6':
  case '7':
  case '8':
  case '9':
   return (FUNC_3(VAR_2, VAR_3));
  }
  break;
 case 128:
  switch (VAR_4) {
  case '/':
   FUNC_1(VAR_2);
   return (VAR_4);
  case '+':
  case '-':
  case '0':
  case '1':
  case '2':
  case '3':
  case '4':
  case '5':
  case '6':
  case '7':
  case '8':
  case '9':
   return (FUNC_3(VAR_2, VAR_3));
  }
  break;
 }
 return (VAR_1);
}
