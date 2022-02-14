
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_14__ {int zl_spa; int zl_os; TYPE_2__* zl_header; } ;
typedef TYPE_3__ zilog_t ;
typedef int zbookmark_phys_t ;
typedef int u_longlong_t ;
struct TYPE_12__ {int lrc_reclen; } ;
struct TYPE_16__ {scalar_t__ blk_birth; } ;
struct TYPE_15__ {int lr_offset; int lr_length; scalar_t__ lr_foid; TYPE_1__ lr_common; TYPE_5__ lr_blkptr; } ;
typedef TYPE_4__ lr_write_t ;
typedef TYPE_5__ blkptr_t ;
typedef int abd_t ;
struct TYPE_13__ {scalar_t__ zh_claim_txg; } ;


 int FUNC_0 (TYPE_5__*) ;
 scalar_t__ FUNC_1 (TYPE_5__*) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int *,int ,scalar_t__,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_5 (int,int ) ;
 int FUNC_6 (int *,TYPE_4__*,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ,int ,int ,int *) ;
 int FUNC_9 (int ) ;
 int * VAR_6 ;
 int FUNC_10 (TYPE_5__*,char*) ;
 int FUNC_11 (char*,...) ;
 scalar_t__ FUNC_12 (int ) ;
 char* VAR_7 ;
 int VAR_8 ;
 int FUNC_13 (int *,int ,TYPE_5__*,int *,int,int *,int *,int ,int ,int *) ;
 int FUNC_14 (int ) ;

__attribute__((used)) static void
FUNC_15(zilog_t *VAR_9, int VAR_10, void *VAR_11)
{
 lr_write_t *VAR_12 = VAR_11;
 abd_t *VAR_13;
 blkptr_t *VAR_14 = &VAR_12->lr_blkptr;
 zbookmark_phys_t VAR_15;
 int VAR_16 = FUNC_2(VAR_6['d'], VAR_6['i']);
 int VAR_17;

 (void) FUNC_11("%sfoid %llu, offset %llx, length %llx\n", VAR_7,
     (u_longlong_t)VAR_12->lr_foid, (u_longlong_t)VAR_12->lr_offset,
     (u_longlong_t)VAR_12->lr_length);

 if (VAR_10 == VAR_2 || VAR_16 < 5)
  return;

 if (VAR_12->lr_common.lrc_reclen == sizeof (lr_write_t)) {
  (void) FUNC_11("%shas blkptr, %s\n", VAR_7,
      !FUNC_1(VAR_14) &&
      VAR_14->blk_birth >= FUNC_12(VAR_9->zl_spa) ?
      "will claim" : "won't claim");
  FUNC_10(VAR_14, VAR_7);

  if (FUNC_1(VAR_14)) {
   (void) FUNC_11("\t\t\tLSIZE 0x%llx\n",
       (u_longlong_t)FUNC_0(VAR_14));
   (void) FUNC_11("%s<hole>\n", VAR_7);
   return;
  }
  if (VAR_14->blk_birth < VAR_9->zl_header->zh_claim_txg) {
   (void) FUNC_11("%s<block already committed>\n",
       VAR_7);
   return;
  }

  FUNC_4(&VAR_15, FUNC_9(VAR_9->zl_os),
      VAR_12->lr_foid, VAR_3,
      VAR_12->lr_offset / FUNC_0(VAR_14));

  VAR_13 = FUNC_5(FUNC_0(VAR_14), VAR_0);
  VAR_17 = FUNC_14(FUNC_13(((void*)0), VAR_9->zl_spa,
      VAR_14, VAR_13, FUNC_0(VAR_14), ((void*)0), ((void*)0),
      VAR_5, VAR_4, &VAR_15));
  if (VAR_17)
   goto out;
 } else {

  VAR_13 = FUNC_5(VAR_12->lr_length, VAR_0);
  FUNC_6(VAR_13, VAR_12 + 1, VAR_12->lr_length);
 }

 (void) FUNC_11("%s", VAR_7);
 (void) FUNC_8(VAR_13,
     0, FUNC_3(VAR_12->lr_length, (VAR_16 < 6 ? 20 : VAR_1)),
     VAR_8, ((void*)0));
 (void) FUNC_11("\n");

out:
 FUNC_7(VAR_13);
}
