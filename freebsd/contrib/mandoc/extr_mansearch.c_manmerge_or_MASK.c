
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ohash {int dummy; } ;
struct expr {struct expr* next; } ;


 struct ohash* FUNC_0 (struct expr*,struct ohash*) ;

__attribute__((used)) static struct ohash *
FUNC_1(struct expr *VAR_0, struct ohash *VAR_1)
{
 while (VAR_0 != ((void*)0)) {
  VAR_1 = FUNC_0(VAR_0, VAR_1);
  VAR_0 = VAR_0->next;
 }
 return VAR_1;
}
