
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct attr_counter {struct attr_counter* next; } ;


 int FUNC_0 (struct attr_counter*) ;

__attribute__((used)) static void
FUNC_1(struct attr_counter **VAR_0)
{
 struct attr_counter *VAR_1, *VAR_2;

 if (*VAR_0 == ((void*)0))
  return;
 VAR_1 = *VAR_0;
        while (VAR_1 != ((void*)0)) {
  VAR_2 = VAR_1->next;
  FUNC_0(VAR_1);
  VAR_1 = VAR_2;
 }
 *VAR_0 = ((void*)0);
}
