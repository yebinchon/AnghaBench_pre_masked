
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpa {int c; int sz; char** a; } ;


 int FUNC_0 (int,char*) ;
 char** FUNC_1 (char**,int) ;

__attribute__((used)) static void
FUNC_2(struct cpa *VAR_0, char *VAR_1)
{
 if (VAR_0->c + 1 == VAR_0->sz) {
  VAR_0->sz = VAR_0->sz == 0 ? 8 : VAR_0->sz * 2;
  VAR_0->a = FUNC_1(VAR_0->a, sizeof(*VAR_0->a) * VAR_0->sz);
  if (VAR_0->a == ((void*)0))
   FUNC_0(1, "realloc failed");
 }
 VAR_0->a[++VAR_0->c] = VAR_1;
}
