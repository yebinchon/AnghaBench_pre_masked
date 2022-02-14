
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct termp {int line; } ;
struct roff_node {scalar_t__ type; char* string; } ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (unsigned char) ;
 int FUNC_2 (char const**,char const**,int*) ;
 int FUNC_3 (char const*,int,int ) ;

__attribute__((used)) static void
FUNC_4(struct termp *VAR_2, struct roff_node *VAR_3)
{
 const char *VAR_4, *VAR_5;
 int VAR_6, VAR_7;

 FUNC_0(VAR_3->type == VAR_1);
 VAR_4 = VAR_3->string;
 VAR_6 = 1;
 for (;;) {
  switch (*VAR_4) {
  case ' ':
  case '\t':
   VAR_6 = VAR_0;

  case '-':
   VAR_4++;
   break;
  case '\\':
   VAR_4++;
   switch (FUNC_2(&VAR_4, &VAR_5, &VAR_7)) {
   case 134:
   case 129:
   case 131:
   case 132:
   case 130:
   case 133:
    break;
   case 128:
    if (VAR_7 != 1)
     return;
    switch (*VAR_5) {
    case '&':
    case '-':
    case 'e':
     break;
    default:
     return;
    }
    break;
   default:
    return;
   }
   break;
  default:
   if (FUNC_1((unsigned char)*VAR_4))
    FUNC_3(VAR_4, VAR_6, VAR_2->line);
   return;
  }
 }
}
