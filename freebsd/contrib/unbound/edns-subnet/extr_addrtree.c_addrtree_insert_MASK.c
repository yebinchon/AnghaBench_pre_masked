
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
struct addrtree {scalar_t__ max_depth; int size_bytes; int node_count; scalar_t__ (* sizefunc ) (void*) ;struct addrnode* root; } ;
struct addrnode {scalar_t__ ttl; scalar_t__ scope; void* elem; struct addredge** edge; } ;
struct addredge {scalar_t__ len; int parent_index; struct addrnode* parent_node; int const* str; struct addrnode* node; } ;
typedef scalar_t__ addrlen_t ;
typedef int addrkey_t ;


 scalar_t__ FUNC_0 (int const*,scalar_t__,int const*,scalar_t__,scalar_t__) ;
 int FUNC_1 (struct addrtree*,struct addrnode*) ;
 int FUNC_2 (struct addrnode*,int const*,scalar_t__,struct addrnode*,int) ;
 int FUNC_3 (struct addrnode*) ;
 int FUNC_4 (int const*,scalar_t__,scalar_t__) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct addrtree*) ;
 int FUNC_7 (struct addrtree*,struct addrnode*) ;
 struct addrnode* FUNC_8 (struct addrtree*,void*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_9 (struct addrtree*,struct addrnode*) ;
 int FUNC_10 (struct addrtree*,struct addrnode*) ;
 scalar_t__ FUNC_11 (void*) ;

void
FUNC_12(struct addrtree *VAR_0, const addrkey_t *VAR_1,
 addrlen_t VAR_2, addrlen_t VAR_3, void *VAR_4, time_t VAR_5,
 time_t VAR_6)
{
 struct addrnode *VAR_7, *VAR_8;
 struct addredge *VAR_9;
 int VAR_10;
 addrlen_t VAR_11, VAR_12;

 VAR_8 = VAR_0->root;
 FUNC_5(VAR_8 != ((void*)0));


 if (VAR_0->max_depth < VAR_3) VAR_3 = VAR_0->max_depth;

 if (VAR_3 < VAR_2) VAR_2 = VAR_3;

 VAR_12 = 0;
 while (1) {
  FUNC_5(VAR_12 <= VAR_2);

  if (VAR_12 == VAR_2) {

   FUNC_1(VAR_0, VAR_8);
   VAR_8->ttl = VAR_5;
   VAR_8->elem = VAR_4;
   VAR_8->scope = VAR_3;
   VAR_0->size_bytes += VAR_0->sizefunc(VAR_4);
   return;
  }
  VAR_10 = FUNC_4(VAR_1, VAR_2, VAR_12);

  VAR_9 = VAR_8->edge[VAR_10];
  while (VAR_9) {

   if (!VAR_9->node->elem || VAR_9->node->ttl >= VAR_6)
    break;
   FUNC_10(VAR_0, VAR_9->node);
   VAR_9 = VAR_8->edge[VAR_10];
  }

  if (!VAR_9) {
   VAR_7 = FUNC_8(VAR_0, VAR_4, VAR_3, VAR_5);
   if (!VAR_7) return;
   if (!FUNC_2(VAR_7, VAR_1, VAR_2, VAR_8,
    VAR_10)) {
    FUNC_1(VAR_0, VAR_7);
    VAR_0->node_count--;
    FUNC_3(VAR_7);
    return;
   }
   VAR_0->size_bytes += FUNC_9(VAR_0, VAR_7);
   FUNC_7(VAR_0, VAR_7);
   FUNC_6(VAR_0);
   return;
  }

  VAR_11 = FUNC_0(VAR_9->str, VAR_9->len, VAR_1, VAR_2,
   VAR_12);
  if (VAR_11 == VAR_9->len) {



   VAR_8->scope = VAR_3;
   VAR_12 = VAR_9->len;
   VAR_8 = VAR_9->node;
   continue;
  }

  if (!(VAR_7 = FUNC_8(VAR_0, ((void*)0), 0, 0)))
   return;
  VAR_8->edge[VAR_10] = ((void*)0);
  if (!FUNC_2(VAR_7, VAR_1, VAR_11, VAR_8, VAR_10)) {
   VAR_8->edge[VAR_10] = VAR_9;
   FUNC_1(VAR_0, VAR_7);
   VAR_0->node_count--;
   FUNC_3(VAR_7);
   return;
  }
  FUNC_7(VAR_0, VAR_7);

  VAR_10 = FUNC_4(VAR_9->str, VAR_9->len, VAR_11);
  VAR_7->edge[VAR_10] = VAR_9;
  VAR_9->parent_node = VAR_7;
  VAR_9->parent_index = (int)VAR_10;

  if (VAR_11 == VAR_2) {

   VAR_7->elem = VAR_4;
   VAR_7->scope = VAR_3;
   VAR_7->ttl = VAR_5;
  }

  VAR_0->size_bytes += FUNC_9(VAR_0, VAR_7);

  if (VAR_11 != VAR_2) {

   VAR_8 = VAR_7;
   VAR_7 = FUNC_8(VAR_0, VAR_4, VAR_3, VAR_5);
   if (!FUNC_2(VAR_7, VAR_1, VAR_2, VAR_8,
    VAR_10^1)) {
    FUNC_1(VAR_0, VAR_7);
    VAR_0->node_count--;
    FUNC_3(VAR_7);
    return;
   }
   VAR_0->size_bytes += FUNC_9(VAR_0, VAR_7);
   FUNC_7(VAR_0, VAR_7);
  }
  FUNC_6(VAR_0);
  return;
 }
}
