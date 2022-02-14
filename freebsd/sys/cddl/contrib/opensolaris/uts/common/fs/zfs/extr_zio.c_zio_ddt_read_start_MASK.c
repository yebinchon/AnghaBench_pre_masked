
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_16__ {scalar_t__ io_size; scalar_t__ io_child_type; int io_bookmark; int io_priority; int io_abd; int io_spa; TYPE_4__* io_vsd; scalar_t__* io_child_error; int * io_bp; } ;
typedef TYPE_1__ zio_t ;
struct TYPE_17__ {int ddt_checksum; } ;
typedef TYPE_2__ ddt_t ;
struct TYPE_18__ {scalar_t__ ddp_phys_birth; } ;
typedef TYPE_3__ ddt_phys_t ;
struct TYPE_19__ {int dde_key; TYPE_3__* dde_phys; } ;
typedef TYPE_4__ ddt_entry_t ;
typedef int blkptr_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_4 ;
 int FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (int ,int *,TYPE_3__*,int *) ;
 TYPE_3__* FUNC_6 (TYPE_4__*,int *) ;
 TYPE_4__* FUNC_7 (TYPE_2__*,int *) ;
 TYPE_2__* FUNC_8 (int ,int *) ;
 int * VAR_5 ;
 int FUNC_9 (int ) ;
 int FUNC_10 (TYPE_1__*,int ,int *,int ,scalar_t__,int *,TYPE_4__*,int ,int,int *) ;

__attribute__((used)) static zio_t *
FUNC_11(zio_t *VAR_6)
{
 blkptr_t *VAR_7 = VAR_6->io_bp;

 FUNC_0(FUNC_1(VAR_7));
 FUNC_0(FUNC_2(VAR_7) == VAR_6->io_size);
 FUNC_0(VAR_6->io_child_type == VAR_3);

 if (VAR_6->io_child_error[VAR_2]) {
  ddt_t *VAR_8 = FUNC_8(VAR_6->io_spa, VAR_7);
  ddt_entry_t *VAR_9 = FUNC_7(VAR_8, VAR_7);
  ddt_phys_t *VAR_10 = VAR_9->dde_phys;
  ddt_phys_t *VAR_11 = FUNC_6(VAR_9, VAR_7);
  blkptr_t VAR_12;

  FUNC_0(VAR_6->io_vsd == ((void*)0));
  VAR_6->io_vsd = VAR_9;

  if (VAR_11 == ((void*)0))
   return (VAR_6);

  for (int VAR_13 = 0; VAR_13 < VAR_1; VAR_13++, VAR_10++) {
   if (VAR_10->ddp_phys_birth == 0 || VAR_10 == VAR_11)
    continue;
   FUNC_5(VAR_8->ddt_checksum, &VAR_9->dde_key, VAR_10,
       &VAR_12);
   FUNC_9(FUNC_10(VAR_6, VAR_6->io_spa, &VAR_12,
       FUNC_4(VAR_6->io_size, VAR_0),
       VAR_6->io_size, VAR_5, VAR_9,
       VAR_6->io_priority, FUNC_3(VAR_6) |
       VAR_4, &VAR_6->io_bookmark));
  }
  return (VAR_6);
 }

 FUNC_9(FUNC_10(VAR_6, VAR_6->io_spa, VAR_7,
     VAR_6->io_abd, VAR_6->io_size, ((void*)0), ((void*)0), VAR_6->io_priority,
     FUNC_3(VAR_6), &VAR_6->io_bookmark));

 return (VAR_6);
}
