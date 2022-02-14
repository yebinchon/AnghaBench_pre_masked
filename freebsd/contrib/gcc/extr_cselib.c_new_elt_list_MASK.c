
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct elt_list {int * elt; struct elt_list* next; } ;
typedef int cselib_val ;


 int VAR_0 ;
 struct elt_list* FUNC_0 (int ) ;

__attribute__((used)) static inline struct elt_list *
FUNC_1 (struct elt_list *VAR_1, cselib_val *VAR_2)
{
  struct elt_list *VAR_3;
  VAR_3 = FUNC_0 (VAR_0);
  VAR_3->next = VAR_1;
  VAR_3->elt = VAR_2;
  return VAR_3;
}
