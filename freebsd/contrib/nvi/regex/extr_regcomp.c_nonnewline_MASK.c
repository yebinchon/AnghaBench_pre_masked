
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parse {char* next; char* end; } ;
typedef char RCHAR_T ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct parse*) ;

__attribute__((used)) static void
FUNC_2(struct parse *VAR_0)
{
 RCHAR_T *VAR_1 = VAR_0->next;
 RCHAR_T *VAR_2 = VAR_0->end;
 RCHAR_T VAR_3[4];

 VAR_0->next = VAR_3;
 VAR_0->end = VAR_3+3;
 VAR_3[0] = '^';
 VAR_3[1] = '\n';
 VAR_3[2] = ']';
 VAR_3[3] = '\0';
 FUNC_1(VAR_0);
 FUNC_0(VAR_0->next == VAR_3+3);
 VAR_0->next = VAR_1;
 VAR_0->end = VAR_2;
}
