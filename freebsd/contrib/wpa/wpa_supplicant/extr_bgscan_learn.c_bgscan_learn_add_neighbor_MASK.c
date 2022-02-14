
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct bgscan_learn_bss {int num_neigh; int * neigh; int bssid; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int,int const*) ;
 scalar_t__ FUNC_1 (int ,int const*,int) ;
 int FUNC_2 (int *,int const*,int) ;
 int * FUNC_3 (int *,int,int) ;

__attribute__((used)) static void FUNC_4(struct bgscan_learn_bss *VAR_1,
          const u8 *VAR_2)
{
 u8 *VAR_3;

 if (FUNC_1(VAR_1->bssid, VAR_2, VAR_0) == 0)
  return;
 if (FUNC_0(VAR_1->neigh, VAR_1->num_neigh, VAR_2))
  return;

 VAR_3 = FUNC_3(VAR_1->neigh, VAR_1->num_neigh + 1, VAR_0);
 if (VAR_3 == ((void*)0))
  return;

 FUNC_2(VAR_3 + VAR_1->num_neigh * VAR_0, VAR_2, VAR_0);
 VAR_1->neigh = VAR_3;
 VAR_1->num_neigh++;
}
