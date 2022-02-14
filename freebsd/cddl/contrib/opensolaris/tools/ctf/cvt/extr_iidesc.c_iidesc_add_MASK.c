
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tmp ;
typedef int iidesc_t ;
struct TYPE_3__ {int * iif_ret; int * iif_tgt; } ;
typedef TYPE_1__ iidesc_find_t ;
typedef int hash_t ;


 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *,int ,TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_3 (int *,int *) ;

void
FUNC_4(hash_t *VAR_1, iidesc_t *VAR_2)
{
 iidesc_find_t VAR_3;

 VAR_3.iif_tgt = VAR_2;
 VAR_3.iif_ret = ((void*)0);

 (void) FUNC_2(VAR_1, VAR_2, VAR_0, &VAR_3);

 if (VAR_3.iif_ret != ((void*)0)) {
  iidesc_t *VAR_4 = VAR_3.iif_ret;
  iidesc_t VAR_5;

  FUNC_0(VAR_4, &VAR_5, sizeof (VAR_5));
  FUNC_0(VAR_2, VAR_4, sizeof (*VAR_4));
  FUNC_0(&VAR_5, VAR_2, sizeof (*VAR_2));

  FUNC_3(VAR_2, ((void*)0));
  return;
 }

 FUNC_1(VAR_1, VAR_2);
}
