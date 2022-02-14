
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct linked_page {struct linked_page* next; } ;


 int FUNC_0 (struct linked_page*,int) ;

__attribute__((used)) static inline void
FUNC_1(struct linked_page *VAR_0, int VAR_1)
{
 while (VAR_0) {
  struct linked_page *VAR_2 = VAR_0->next;

  FUNC_0(VAR_0, VAR_1);
  VAR_0 = VAR_2;
 }
}
