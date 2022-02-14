
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct rangeset {int rs_alloc_flags; void* rs_data_ctx; int rs_free_data; int rs_dup_data; int rs_trie; } ;
typedef int rs_free_data_t ;
typedef int rs_dup_data_t ;


 int FUNC_0 (int *) ;

void
FUNC_1(struct rangeset *VAR_0, rs_dup_data_t VAR_1,
    rs_free_data_t VAR_2, void *VAR_3, u_int VAR_4)
{

 FUNC_0(&VAR_0->rs_trie);
 VAR_0->rs_dup_data = VAR_1;
 VAR_0->rs_free_data = VAR_2;
 VAR_0->rs_data_ctx = VAR_3;
 VAR_0->rs_alloc_flags = VAR_4;
}
