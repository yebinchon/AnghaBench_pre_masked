
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
struct addrtree {struct addrnode* root; } ;
struct addrnode {scalar_t__ ttl; scalar_t__ scope; struct addredge** edge; scalar_t__ elem; } ;
struct addredge {scalar_t__ len; struct addrnode* node; int str; } ;
typedef scalar_t__ addrlen_t ;
typedef int addrkey_t ;


 size_t FUNC_0 (int const*,scalar_t__,scalar_t__) ;
 int FUNC_1 (int ,scalar_t__,int const*,scalar_t__,scalar_t__) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct addrtree*,struct addrnode*) ;

struct addrnode *
FUNC_4(struct addrtree *VAR_0, const addrkey_t *VAR_1,
 addrlen_t VAR_2, time_t VAR_3)
{
 struct addrnode *VAR_4 = VAR_0->root;
 struct addredge *VAR_5 = ((void*)0);
 addrlen_t VAR_6 = 0;

 FUNC_2(VAR_4 != ((void*)0));
 while (1) {

  FUNC_2(VAR_6 <= VAR_2);

  if (VAR_4->elem && VAR_4->ttl >= VAR_3) {
                             ;
   FUNC_2(VAR_4->scope >= VAR_6);
   if (VAR_6 == VAR_4->scope ||
    (VAR_4->scope > VAR_2 &&
     VAR_6 == VAR_2)) {



    FUNC_3(VAR_0, VAR_4);
    return VAR_4;
   }
  }

  if (VAR_6 == VAR_2)
   return ((void*)0);

  VAR_5 = VAR_4->edge[FUNC_0(VAR_1, VAR_2, VAR_6)];
  if (!VAR_5 || !VAR_5->node)
   return ((void*)0);
  if (VAR_5->len > VAR_2 )
   return ((void*)0);
  if (!FUNC_1(VAR_5->str, VAR_5->len, VAR_1, VAR_2, VAR_6))
   return ((void*)0);
  FUNC_2(VAR_6 < VAR_5->len);
  VAR_6 = VAR_5->len;
  VAR_4 = VAR_5->node;
 }
}
