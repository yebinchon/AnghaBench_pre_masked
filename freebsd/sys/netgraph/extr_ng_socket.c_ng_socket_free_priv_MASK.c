
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ngsock {int refs; int mtx; int * node; int hmask; int hash; } ;
typedef int * node_p ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct ngsock*,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void
FUNC_7(struct ngsock *VAR_2)
{
 FUNC_3(&VAR_2->mtx, VAR_0);

 VAR_2->refs--;

 if (VAR_2->refs == 0) {
  FUNC_4(&VAR_2->mtx);
  FUNC_2(VAR_2->hash, VAR_1, VAR_2->hmask);
  FUNC_1(VAR_2, VAR_1);
  return;
 }

 if ((VAR_2->refs == 1) && (VAR_2->node != ((void*)0))) {
  node_p VAR_3 = VAR_2->node;

  VAR_2->node = ((void*)0);
  FUNC_5(&VAR_2->mtx);
  FUNC_0(VAR_3);
  FUNC_6(VAR_3);
 } else
  FUNC_5(&VAR_2->mtx);
}
