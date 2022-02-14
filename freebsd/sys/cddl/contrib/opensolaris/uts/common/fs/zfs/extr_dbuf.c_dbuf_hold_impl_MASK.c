
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
struct dbuf_hold_impl_data {int dummy; } ;
typedef int dnode_t ;
typedef int dmu_buf_impl_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dbuf_hold_impl_data*) ;
 int FUNC_1 (struct dbuf_hold_impl_data*,int *,int ,int ,int ,int ,void*,int **,int ) ;
 struct dbuf_hold_impl_data* FUNC_2 (int,int ) ;
 int FUNC_3 (struct dbuf_hold_impl_data*,int) ;

int
FUNC_4(dnode_t *VAR_2, uint8_t VAR_3, uint64_t VAR_4,
    boolean_t VAR_5, boolean_t VAR_6,
    void *VAR_7, dmu_buf_impl_t **VAR_8)
{
 struct dbuf_hold_impl_data *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_2(sizeof (struct dbuf_hold_impl_data) *
     VAR_0, VAR_1);
 FUNC_1(VAR_9, VAR_2, VAR_3, VAR_4, VAR_5,
     VAR_6, VAR_7, VAR_8, 0);

 VAR_10 = FUNC_0(VAR_9);

 FUNC_3(VAR_9, sizeof (struct dbuf_hold_impl_data) *
     VAR_0);

 return (VAR_10);
}
