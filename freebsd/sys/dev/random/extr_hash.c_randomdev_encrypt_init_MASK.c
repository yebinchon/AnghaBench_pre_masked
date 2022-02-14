
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union randomdev_key {int key; int cipher; int chacha; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,void const*,int) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *,int ,int *) ;
 int FUNC_2 (int *,int ,int,void const*) ;

void
FUNC_3(union randomdev_key *VAR_4, const void *VAR_5)
{

 if (VAR_3) {
  FUNC_0(&VAR_4->chacha, VAR_5, VAR_2 * 8);
 } else {
  FUNC_1(&VAR_4->cipher, VAR_1, ((void*)0));
  FUNC_2(&VAR_4->key, VAR_0, VAR_2*8, VAR_5);
 }
}
