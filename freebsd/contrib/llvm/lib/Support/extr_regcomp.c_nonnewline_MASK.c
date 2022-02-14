
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parse {char* next; char* end; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct parse*) ;

__attribute__((used)) static void
FUNC_2(struct parse *VAR_0)
{
 char *VAR_1 = VAR_0->next;
 char *VAR_2 = VAR_0->end;
 char VAR_3[4];

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
