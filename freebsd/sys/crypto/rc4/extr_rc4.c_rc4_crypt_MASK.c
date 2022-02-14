
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_char ;
struct rc4_state {size_t index1; size_t index2; size_t* perm; } ;


 int FUNC_0 (size_t*,size_t*) ;

void
FUNC_1(struct rc4_state *const VAR_0,
 const u_char *VAR_1, u_char *VAR_2, int VAR_3)
{
 int VAR_4;
 u_char VAR_5;

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {


  VAR_0->index1++;
  VAR_0->index2 += VAR_0->perm[VAR_0->index1];


  FUNC_0(&VAR_0->perm[VAR_0->index1],
      &VAR_0->perm[VAR_0->index2]);


  VAR_5 = VAR_0->perm[VAR_0->index1] + VAR_0->perm[VAR_0->index2];
  VAR_2[VAR_4] = VAR_1[VAR_4] ^ VAR_0->perm[VAR_5];
 }
}
