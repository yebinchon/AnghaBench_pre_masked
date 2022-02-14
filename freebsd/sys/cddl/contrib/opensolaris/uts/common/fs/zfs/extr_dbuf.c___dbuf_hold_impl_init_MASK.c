
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
struct dbuf_hold_impl_data {int dh_depth; int * dh_dr; scalar_t__ dh_err; int * dh_bp; int * dh_parent; int * dh_db; int ** dh_dbp; void* dh_tag; void* dh_fail_uncached; void* dh_fail_sparse; int dh_blkid; int dh_level; int * dh_dn; } ;
typedef int dnode_t ;
typedef int dmu_buf_impl_t ;
typedef void* boolean_t ;



__attribute__((used)) static void
FUNC_0(struct dbuf_hold_impl_data *VAR_0,
    dnode_t *VAR_1, uint8_t VAR_2, uint64_t VAR_3,
    boolean_t VAR_4, boolean_t VAR_5,
    void *VAR_6, dmu_buf_impl_t **VAR_7, int VAR_8)
{
 VAR_0->dh_dn = VAR_1;
 VAR_0->dh_level = VAR_2;
 VAR_0->dh_blkid = VAR_3;

 VAR_0->dh_fail_sparse = VAR_4;
 VAR_0->dh_fail_uncached = VAR_5;

 VAR_0->dh_tag = VAR_6;
 VAR_0->dh_dbp = VAR_7;

 VAR_0->dh_db = ((void*)0);
 VAR_0->dh_parent = ((void*)0);
 VAR_0->dh_bp = ((void*)0);
 VAR_0->dh_err = 0;
 VAR_0->dh_dr = ((void*)0);

 VAR_0->dh_depth = VAR_8;
}
