
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ibv_mem_node {uintptr_t start; uintptr_t end; int refcnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ibv_mem_node* FUNC_0 (struct ibv_mem_node*) ;
 struct ibv_mem_node* FUNC_1 (struct ibv_mem_node*) ;
 unsigned long FUNC_2 (void*) ;
 struct ibv_mem_node* FUNC_3 (uintptr_t,uintptr_t,int) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (void*,uintptr_t,int) ;
 struct ibv_mem_node* FUNC_5 (struct ibv_mem_node*,struct ibv_mem_node*) ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct ibv_mem_node*,uintptr_t) ;
 struct ibv_mem_node* FUNC_9 (struct ibv_mem_node*,uintptr_t,int) ;

__attribute__((used)) static int FUNC_10(void *VAR_5, size_t VAR_6, int VAR_7)
{
 uintptr_t VAR_8, VAR_9;
 struct ibv_mem_node *VAR_10, *VAR_11;
 int VAR_12;
 int VAR_13 = 0;
 int VAR_14 = 0;
 unsigned long VAR_15;

 if (!VAR_6)
  return 0;

 if (VAR_2)
  VAR_15 = FUNC_2(VAR_5);
 else
  VAR_15 = VAR_4;

 VAR_8 = (uintptr_t) VAR_5 & ~(VAR_15 - 1);
 VAR_9 = ((uintptr_t) (VAR_5 + VAR_6 + VAR_15 - 1) &
   ~(VAR_15 - 1)) - 1;

 FUNC_6(&VAR_3);
again:
 VAR_12 = VAR_7 == VAR_1 ? 1 : -1;

 VAR_10 = FUNC_3(VAR_8, VAR_9, VAR_12);
 if (!VAR_10) {
  VAR_14 = -1;
  goto out;
 }

 while (VAR_10 && VAR_10->start <= VAR_9) {
  if (VAR_10->end > VAR_9) {
   if (!FUNC_8(VAR_10, VAR_9 + 1)) {
    VAR_14 = -1;
    goto out;
   }
  }

  if ((VAR_12 == -1 && VAR_10->refcnt == 1) ||
      (VAR_12 == 1 && VAR_10->refcnt == 0)) {
   if (VAR_8 > VAR_10->start)
    VAR_14 = FUNC_4((void *) VAR_8, VAR_10->end - VAR_8 + 1,
           VAR_7);
   else
    VAR_14 = FUNC_4((void *) VAR_10->start,
           VAR_10->end - VAR_10->start + 1,
           VAR_7);
   if (VAR_14) {
    VAR_10 = FUNC_9(VAR_10, VAR_8, VAR_12);

    if (VAR_13 || !VAR_10)
     goto out;


    VAR_13 = 1;
    VAR_7 = VAR_7 == VAR_1 ?
     VAR_0 : VAR_1;
    VAR_11 = FUNC_1(VAR_10);
    if (!VAR_11 || VAR_8 > VAR_11->end)
     goto out;
    VAR_9 = VAR_11->end;
    goto again;
   }
  }

  VAR_10->refcnt += VAR_12;
  VAR_10 = FUNC_0(VAR_10);
 }

 if (VAR_10) {
  VAR_11 = FUNC_1(VAR_10);
  if (VAR_11 && VAR_10->refcnt == VAR_11->refcnt)
   VAR_10 = FUNC_5(VAR_10, VAR_11);
 }

out:
 if (VAR_13)
  VAR_14 = -1;

 FUNC_7(&VAR_3);

 return VAR_14;
}
