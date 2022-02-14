
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uch ;
struct parse {char* next; char* end; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct parse*) ;

__attribute__((used)) static void
FUNC_3(struct parse *VAR_0, int VAR_1)
{
 char *VAR_2 = VAR_0->next;
 char *VAR_3 = VAR_0->end;
 char VAR_4[3];

 VAR_1 = (uch)VAR_1;
 FUNC_0(FUNC_1(VAR_1) != VAR_1);
 VAR_0->next = VAR_4;
 VAR_0->end = VAR_4+2;
 VAR_4[0] = VAR_1;
 VAR_4[1] = ']';
 VAR_4[2] = '\0';
 FUNC_2(VAR_0);
 FUNC_0(VAR_0->next == VAR_4+2);
 VAR_0->next = VAR_2;
 VAR_0->end = VAR_3;
}
