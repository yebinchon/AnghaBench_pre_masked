
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strfilter_node {int* p; struct strfilter_node* r; struct strfilter_node* l; } ;


 int FUNC_0 (char const*,int*) ;

__attribute__((used)) static bool FUNC_1(struct strfilter_node *VAR_0,
        const char *VAR_1)
{
 if (!VAR_0 || !VAR_0->p)
  return 0;

 switch (*VAR_0->p) {
 case '|':
  return FUNC_1(VAR_0->l, VAR_1) ||
   FUNC_1(VAR_0->r, VAR_1);
 case '&':
  return FUNC_1(VAR_0->l, VAR_1) &&
   FUNC_1(VAR_0->r, VAR_1);
 case '!':
  return !FUNC_1(VAR_0->r, VAR_1);
 default:
  return FUNC_0(VAR_1, VAR_0->p);
 }
}
