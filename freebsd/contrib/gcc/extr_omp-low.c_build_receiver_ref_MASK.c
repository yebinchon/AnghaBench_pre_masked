
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int * tree ;
struct TYPE_5__ {int * receiver_decl; } ;
typedef TYPE_1__ omp_context ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int ,int ,int *,int *,int *) ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 (int *,TYPE_1__*) ;
 int * FUNC_4 (int *,TYPE_1__*) ;

__attribute__((used)) static tree
FUNC_5 (tree VAR_1, bool VAR_2, omp_context *VAR_3)
{
  tree VAR_4, VAR_5 = FUNC_3 (VAR_1, VAR_3);



  VAR_4 = FUNC_4 (VAR_5, VAR_3);
  if (VAR_4 != ((void*)0))
    VAR_5 = VAR_4;

  VAR_4 = FUNC_2 (VAR_3->receiver_decl);
  VAR_4 = FUNC_1 (VAR_0, FUNC_0 (VAR_5), VAR_4, VAR_5, ((void*)0));
  if (VAR_2)
    VAR_4 = FUNC_2 (VAR_4);

  return VAR_4;
}
