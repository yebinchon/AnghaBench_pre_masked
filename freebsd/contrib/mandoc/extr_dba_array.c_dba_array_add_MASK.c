
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dba_array {int eu; int ea; int flags; void* em; void* ep; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct dba_array*,int,void*) ;
 void* FUNC_2 (void*,int,int) ;

void
FUNC_3(struct dba_array *VAR_1, void *VAR_2)
{
 if (VAR_1->eu == VAR_1->ea) {
  FUNC_0(VAR_1->flags & VAR_0);
  VAR_1->ep = FUNC_2(VAR_1->ep,
      2, sizeof(*VAR_1->ep) * VAR_1->ea);
  VAR_1->em = FUNC_2(VAR_1->em,
      2, sizeof(*VAR_1->em) * VAR_1->ea);
  VAR_1->ea *= 2;
 }
 FUNC_1(VAR_1, VAR_1->eu, VAR_2);
}
