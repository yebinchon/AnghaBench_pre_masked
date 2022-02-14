
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t uint64_t ;
typedef int objset_t ;
struct TYPE_7__ {scalar_t__ db_state; int db_mtx; struct TYPE_7__* db_hash_next; } ;
typedef TYPE_1__ dmu_buf_impl_t ;
struct TYPE_8__ {size_t hash_table_mask; TYPE_1__** hash_table; } ;
typedef TYPE_2__ dbuf_hash_table_t ;


 scalar_t__ FUNC_0 (TYPE_1__*,int *,size_t,int ,size_t) ;
 int * FUNC_1 (TYPE_2__*,size_t) ;
 scalar_t__ VAR_0 ;
 size_t FUNC_2 (int *,size_t,int ,size_t) ;
 TYPE_2__ VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

dmu_buf_impl_t *
FUNC_5(objset_t *VAR_2, uint64_t VAR_3, uint8_t VAR_4, uint64_t VAR_5)
{
 dbuf_hash_table_t *VAR_6 = &VAR_1;
 uint64_t VAR_7 = FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5);
 uint64_t VAR_8 = VAR_7 & VAR_6->hash_table_mask;
 dmu_buf_impl_t *VAR_9;

 FUNC_3(FUNC_1(VAR_6, VAR_8));
 for (VAR_9 = VAR_6->hash_table[VAR_8]; VAR_9 != ((void*)0); VAR_9 = VAR_9->db_hash_next) {
  if (FUNC_0(VAR_9, VAR_2, VAR_3, VAR_4, VAR_5)) {
   FUNC_3(&VAR_9->db_mtx);
   if (VAR_9->db_state != VAR_0) {
    FUNC_4(FUNC_1(VAR_6, VAR_8));
    return (VAR_9);
   }
   FUNC_4(&VAR_9->db_mtx);
  }
 }
 FUNC_4(FUNC_1(VAR_6, VAR_8));
 return (((void*)0));
}
