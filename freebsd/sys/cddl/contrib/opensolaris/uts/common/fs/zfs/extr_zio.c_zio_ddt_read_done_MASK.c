
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ io_size; scalar_t__ io_child_type; int io_stage; TYPE_2__* io_vsd; scalar_t__* io_child_error; int io_abd; int io_spa; int * io_bp; } ;
typedef TYPE_1__ zio_t ;
typedef int ddt_t ;
struct TYPE_9__ {int * dde_repair_abd; } ;
typedef TYPE_2__ ddt_entry_t ;
typedef int blkptr_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int ,int *,scalar_t__) ;
 int FUNC_4 (int *,TYPE_2__*) ;
 int * FUNC_5 (int ,int *) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (TYPE_1__*,int ,int ) ;
 scalar_t__ FUNC_8 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static zio_t *
FUNC_9(zio_t *VAR_8)
{
 blkptr_t *VAR_9 = VAR_8->io_bp;

 if (FUNC_8(VAR_8, VAR_3, VAR_7)) {
  return (((void*)0));
 }

 FUNC_0(FUNC_1(VAR_9));
 FUNC_0(FUNC_2(VAR_9) == VAR_8->io_size);
 FUNC_0(VAR_8->io_child_type == VAR_4);

 if (VAR_8->io_child_error[VAR_2]) {
  ddt_t *VAR_10 = FUNC_5(VAR_8->io_spa, VAR_9);
  ddt_entry_t *VAR_11 = VAR_8->io_vsd;
  if (VAR_10 == ((void*)0)) {
   FUNC_0(FUNC_6(VAR_8->io_spa) != VAR_1);
   return (VAR_8);
  }
  if (VAR_11 == ((void*)0)) {
   VAR_8->io_stage = VAR_5 >> 1;
   FUNC_7(VAR_8, VAR_6, VAR_0);
   return (((void*)0));
  }
  if (VAR_11->dde_repair_abd != ((void*)0)) {
   FUNC_3(VAR_8->io_abd, VAR_11->dde_repair_abd,
       VAR_8->io_size);
   VAR_8->io_child_error[VAR_2] = 0;
  }
  FUNC_4(VAR_10, VAR_11);
  VAR_8->io_vsd = ((void*)0);
 }

 FUNC_0(VAR_8->io_vsd == ((void*)0));

 return (VAR_8);
}
