
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct malloc_type_internal {int mti_stats; } ;
struct malloc_type {scalar_t__ ks_magic; struct malloc_type* ks_next; struct malloc_type_internal* ks_handle; } ;
struct TYPE_2__ {scalar_t__ v_page_count; } ;


 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct malloc_type* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct malloc_type*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*) ;
 struct malloc_type_internal* FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int) ;
 TYPE_1__ VAR_8 ;

void
FUNC_7(void *VAR_9)
{
 struct malloc_type_internal *VAR_10;
 struct malloc_type *VAR_11;

 FUNC_0(VAR_8.v_page_count != 0, ("malloc_register before vm_init"));

 VAR_11 = VAR_9;
 if (VAR_11->ks_magic != VAR_0)
  FUNC_4("malloc_init: bad malloc type magic");

 VAR_10 = FUNC_5(VAR_7, VAR_1 | VAR_2);
 VAR_10->mti_stats = FUNC_6(VAR_6, VAR_1 | VAR_2);
 VAR_11->ks_handle = VAR_10;
 FUNC_1(VAR_11);

 FUNC_2(&VAR_5);
 VAR_11->ks_next = VAR_4;
 VAR_4 = VAR_11;
 VAR_3++;
 FUNC_3(&VAR_5);
}
