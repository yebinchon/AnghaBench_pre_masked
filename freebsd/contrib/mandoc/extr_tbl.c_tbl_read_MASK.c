
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tbl_node {int part; } ;




 int VAR_0 ;
 int FUNC_0 (struct tbl_node*,int,char const*,int) ;
 int FUNC_1 (struct tbl_node*,int,char const*,int) ;
 int FUNC_2 (struct tbl_node*,int,char const*,int) ;
 int FUNC_3 (struct tbl_node*,int,char const*,int*) ;

void
FUNC_4(struct tbl_node *VAR_1, int VAR_2, const char *VAR_3, int VAR_4)
{
 const char *VAR_5;
 int VAR_6;







 if (VAR_1->part == VAR_0) {
  VAR_1->part = 128;
  VAR_6 = 1;
  for (VAR_5 = VAR_3 + VAR_4; *VAR_5 != '\0'; VAR_5++) {
   switch (*VAR_5) {
   case '(':
    VAR_6 = 0;
    continue;
   case ')':
    VAR_6 = 1;
    continue;
   case ';':
    if (VAR_6)
     break;
    continue;
   default:
    continue;
   }
   break;
  }
  if (*VAR_5 == ';') {
   FUNC_3(VAR_1, VAR_2, VAR_3, &VAR_4);
   if (VAR_3[VAR_4] == '\0')
    return;
  }
 }



 switch (VAR_1->part) {
 case 128:
  FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4);
  break;
 case 129:
  FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);
  break;
 default:
  FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4);
  break;
 }
}
