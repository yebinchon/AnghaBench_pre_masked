
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int zl_spa; int zl_os; TYPE_1__* zl_header; } ;
typedef TYPE_2__ zilog_t ;
typedef int zbookmark_phys_t ;
struct TYPE_13__ {int lr_offset; int lr_foid; int lr_length; int lr_blkptr; } ;
typedef TYPE_3__ lr_write_t ;
typedef enum zio_flag { ____Placeholder_zio_flag } zio_flag ;
typedef int blkptr_t ;
typedef int arc_flags_t ;
struct TYPE_14__ {int b_data; } ;
typedef TYPE_4__ arc_buf_t ;
struct TYPE_11__ {scalar_t__ zh_claim_txg; } ;


 int VAR_0 ;
 int FUNC_0 (int const*) ;
 scalar_t__ FUNC_1 (int const*) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int ,int ,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (TYPE_4__*,TYPE_4__**) ;
 int FUNC_5 (TYPE_4__*) ;
 int VAR_6 ;
 int FUNC_6 (int *,int ,int const*,int ,TYPE_4__**,int ,int,int *,int *) ;
 int FUNC_7 (int ,void*,int ) ;
 int FUNC_8 (void*,int ) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static int
FUNC_10(zilog_t *VAR_7, const lr_write_t *VAR_8, void *VAR_9)
{
 enum zio_flag VAR_10 = VAR_2;
 const blkptr_t *VAR_11 = &VAR_8->lr_blkptr;
 arc_flags_t VAR_12 = VAR_0;
 arc_buf_t *VAR_13 = ((void*)0);
 zbookmark_phys_t VAR_14;
 int VAR_15;

 if (FUNC_1(VAR_11)) {
  if (VAR_9 != ((void*)0))
   FUNC_8(VAR_9, FUNC_2(FUNC_0(VAR_11), VAR_8->lr_length));
  return (0);
 }

 if (VAR_7->zl_header->zh_claim_txg == 0)
  VAR_10 |= VAR_4 | VAR_3;

 FUNC_3(&VAR_14, FUNC_9(VAR_7->zl_os), VAR_8->lr_foid,
     VAR_1, VAR_8->lr_offset / FUNC_0(VAR_11));

 VAR_15 = FUNC_6(((void*)0), VAR_7->zl_spa, VAR_11, VAR_6, &VAR_13,
     VAR_5, VAR_10, &VAR_12, &VAR_14);

 if (VAR_15 == 0) {
  if (VAR_9 != ((void*)0))
   FUNC_7(VAR_13->b_data, VAR_9, FUNC_5(VAR_13));
  FUNC_4(VAR_13, &VAR_13);
 }

 return (VAR_15);
}
