
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bsdar {char* as; int as_cap; size_t as_sz; } ;


 int VAR_0 ;
 int FUNC_0 (struct bsdar*,int ,char*) ;
 int VAR_1 ;
 char* FUNC_1 (int) ;
 char* FUNC_2 (char*,int) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (char*,char const*,int) ;

__attribute__((used)) static void
FUNC_5(struct bsdar *VAR_2, const char *VAR_3)
{

 if (VAR_2->as == ((void*)0)) {
  VAR_2->as_cap = VAR_0;
  VAR_2->as_sz = 0;
  if ((VAR_2->as = FUNC_1(VAR_2->as_cap)) == ((void*)0))
   FUNC_0(VAR_2, VAR_1, "malloc failed");
 }






 while (VAR_2->as_sz + FUNC_3(VAR_3) + 3 > VAR_2->as_cap) {
  VAR_2->as_cap *= 2;
  VAR_2->as = FUNC_2(VAR_2->as, VAR_2->as_cap);
  if (VAR_2->as == ((void*)0))
   FUNC_0(VAR_2, VAR_1, "realloc failed");
 }
 FUNC_4(&VAR_2->as[VAR_2->as_sz], VAR_3, FUNC_3(VAR_3));
 VAR_2->as_sz += FUNC_3(VAR_3);
 VAR_2->as[VAR_2->as_sz++] = '/';
 VAR_2->as[VAR_2->as_sz++] = '\n';
}
