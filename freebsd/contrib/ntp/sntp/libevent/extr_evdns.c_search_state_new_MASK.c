
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct search_state {int refcount; int ndots; } ;


 int FUNC_0 (struct search_state*,int ,int) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static struct search_state *
FUNC_2(void) {
 struct search_state *VAR_0 = (struct search_state *) FUNC_1(sizeof(struct search_state));
 if (!VAR_0) return ((void*)0);
 FUNC_0(VAR_0, 0, sizeof(struct search_state));
 VAR_0->refcount = 1;
 VAR_0->ndots = 1;

 return VAR_0;
}
