
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wint_t ;
struct parse {char* next; char* end; } ;
typedef int mbstate_t ;
typedef int mbs ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct parse*) ;
 size_t FUNC_4 (char*,int ,int *) ;

__attribute__((used)) static void
FUNC_5(struct parse *VAR_1, wint_t VAR_2)
{
 const char *VAR_3 = VAR_1->next;
 const char *VAR_4 = VAR_1->end;
 char VAR_5[3 + VAR_0];
 size_t VAR_6;
 mbstate_t VAR_7;

 FUNC_0(FUNC_2(VAR_2) != VAR_2);
 VAR_1->next = VAR_5;
 FUNC_1(&VAR_7, 0, sizeof(VAR_7));
 VAR_6 = FUNC_4(VAR_5, VAR_2, &VAR_7);
 FUNC_0(VAR_6 != (size_t)-1);
 VAR_5[VAR_6] = ']';
 VAR_5[VAR_6 + 1] = '\0';
 VAR_1->end = VAR_5+VAR_6+1;
 FUNC_3(VAR_1);
 FUNC_0(VAR_1->next == VAR_1->end);
 VAR_1->next = VAR_3;
 VAR_1->end = VAR_4;
}
