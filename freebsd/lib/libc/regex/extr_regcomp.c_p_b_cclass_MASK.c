
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wctype_t ;
typedef int uch ;
struct parse {char* next; } ;
typedef int cset ;
typedef int clname ;


 int FUNC_0 (struct parse*,int *,int ) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 int VAR_0 ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (char*,char const*,size_t) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static void
FUNC_8(struct parse *VAR_1, cset *VAR_2)
{
 const char *VAR_3 = VAR_1->next;
 size_t VAR_4;
 wctype_t VAR_5;
 char VAR_6[16];

 while (FUNC_1() && FUNC_5((uch)FUNC_3()))
  FUNC_2();
 VAR_4 = VAR_1->next - VAR_3;
 if (VAR_4 >= sizeof(VAR_6) - 1) {
  FUNC_4(VAR_0);
  return;
 }
 FUNC_6(VAR_6, VAR_3, VAR_4);
 VAR_6[VAR_4] = '\0';
 if ((VAR_5 = FUNC_7(VAR_6)) == 0) {
  FUNC_4(VAR_0);
  return;
 }
 FUNC_0(VAR_1, VAR_2, VAR_5);
}
