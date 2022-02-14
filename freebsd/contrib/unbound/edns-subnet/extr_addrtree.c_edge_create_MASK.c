
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct addrnode {struct addredge** edge; struct addredge* parent_edge; } ;
struct addredge {int len; int parent_index; int * str; struct addrnode* parent_node; struct addrnode* node; } ;
typedef int addrlen_t ;
typedef int addrkey_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (size_t,int) ;
 int FUNC_1 (struct addredge*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int *,int const*,size_t) ;

__attribute__((used)) static struct addredge *
FUNC_5(struct addrnode *VAR_1, const addrkey_t *VAR_2,
 addrlen_t VAR_3, struct addrnode *VAR_4, int VAR_5)
{
 size_t VAR_6;
 struct addredge *VAR_7 = (struct addredge *)FUNC_3( sizeof (*VAR_7) );
 if (!VAR_7)
  return ((void*)0);
 VAR_7->node = VAR_1;
 VAR_7->len = VAR_3;
 VAR_7->parent_index = VAR_5;
 VAR_7->parent_node = VAR_4;

 VAR_6 = (size_t)((VAR_3 / VAR_0) + ((VAR_3 % VAR_0 != 0)?1:0));
 VAR_7->str = (addrkey_t *)FUNC_0(VAR_6, sizeof (addrkey_t));
 if (!VAR_7->str) {
  FUNC_1(VAR_7);
  return ((void*)0);
 }
 FUNC_4(VAR_7->str, VAR_2, VAR_6 * sizeof (addrkey_t));

 VAR_1->parent_edge = VAR_7;
 FUNC_2(VAR_4->edge[VAR_5] == ((void*)0));
 VAR_4->edge[VAR_5] = VAR_7;
 return VAR_7;
}
