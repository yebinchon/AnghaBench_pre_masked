
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int zilog_t ;
typedef int zbookmark_phys_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_9__ {int td_arg; int td_spa; int (* td_func ) (int ,int *,TYPE_4__*,int *,int *,int ) ;int td_objset; } ;
typedef TYPE_1__ traverse_data_t ;
struct TYPE_12__ {scalar_t__ blk_birth; } ;
struct TYPE_10__ {int lr_offset; int lr_foid; TYPE_4__ lr_blkptr; } ;
typedef TYPE_2__ lr_write_t ;
struct TYPE_11__ {scalar_t__ lrc_txtype; } ;
typedef TYPE_3__ lr_t ;
typedef TYPE_4__ blkptr_t ;


 int FUNC_0 (TYPE_4__*) ;
 scalar_t__ FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int *,int ,int ,int ,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ,int *,TYPE_4__*,int *,int *,int ) ;

__attribute__((used)) static int
FUNC_4(zilog_t *VAR_2, lr_t *VAR_3, void *VAR_4, uint64_t VAR_5)
{
 traverse_data_t *VAR_6 = VAR_4;

 if (VAR_3->lrc_txtype == VAR_0) {
  lr_write_t *VAR_7 = (lr_write_t *)VAR_3;
  blkptr_t *VAR_8 = &VAR_7->lr_blkptr;
  zbookmark_phys_t VAR_9;

  if (FUNC_1(VAR_8))
   return (0);

  if (VAR_5 == 0 || VAR_8->blk_birth < VAR_5)
   return (0);

  FUNC_2(&VAR_9, VAR_6->td_objset, VAR_7->lr_foid,
      VAR_1, VAR_7->lr_offset / FUNC_0(VAR_8));

  (void) VAR_6->td_func(VAR_6->td_spa, VAR_2, VAR_8, &VAR_9, ((void*)0),
      VAR_6->td_arg);
 }
 return (0);
}
