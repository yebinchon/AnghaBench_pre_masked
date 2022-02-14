
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wordent {int* word; struct wordent* next; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct wordent*,struct wordent*) ;
 int FUNC_1 (struct wordent*,struct wordent*) ;
 int FUNC_2 (int*,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(struct wordent *VAR_2, struct wordent *VAR_3)
{
    struct wordent *VAR_4;
    int VAR_5 = 0;

    for (VAR_4 = VAR_2; VAR_4 != VAR_3; VAR_4 = VAR_4->next)
 switch (VAR_4->word[0]) {

 case '(':
     VAR_5++;
     continue;

 case ')':
     VAR_5--;
     if (VAR_5 < 0)
  FUNC_3(VAR_0);
     continue;

 case '>':
     if (VAR_4->next != VAR_3 && FUNC_2(VAR_4->next->word, VAR_1))
  VAR_4 = VAR_4->next;
     continue;

 case '&':
 case '|':
 case ';':
 case '\n':
     if (VAR_5 != 0)
  continue;
     if (FUNC_0(VAR_2, VAR_4) != 0)
  return 1;
     return FUNC_1(VAR_4->next, VAR_3);

 default:
     break;
 }
    if (VAR_5 == 0)
 return FUNC_0(VAR_2, VAR_3);
    return 0;
}
