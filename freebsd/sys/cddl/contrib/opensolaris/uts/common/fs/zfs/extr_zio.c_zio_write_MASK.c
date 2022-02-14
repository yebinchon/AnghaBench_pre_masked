
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ zp_checksum; scalar_t__ zp_compress; int zp_level; scalar_t__ zp_copies; scalar_t__ zp_dedup_verify; scalar_t__ zp_dedup; int zp_type; } ;
struct TYPE_8__ {TYPE_2__ io_prop; int * io_physdone; int * io_children_ready; int * io_ready; } ;
typedef TYPE_1__ zio_t ;
typedef TYPE_2__ zio_prop_t ;
typedef int zio_priority_t ;
typedef int zio_done_func_t ;
typedef int zbookmark_phys_t ;
typedef int uint64_t ;
typedef int spa_t ;
typedef enum zio_flag { ____Placeholder_zio_flag } zio_flag ;
typedef int blkptr_t ;
typedef int abd_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_2 (int *) ;
 TYPE_1__* FUNC_3 (TYPE_1__*,int *,int ,int *,int *,int ,int ,int *,void*,int ,int ,int,int *,int ,int const*,int ,int ) ;

zio_t *
FUNC_4(zio_t *VAR_10, spa_t *VAR_11, uint64_t VAR_12, blkptr_t *VAR_13,
    abd_t *VAR_14, uint64_t VAR_15, uint64_t VAR_16, const zio_prop_t *VAR_17,
    zio_done_func_t *VAR_18, zio_done_func_t *VAR_19,
    zio_done_func_t *VAR_20, zio_done_func_t *VAR_21,
    void *VAR_22, zio_priority_t VAR_23, enum zio_flag VAR_24,
    const zbookmark_phys_t *VAR_25)
{
 zio_t *VAR_26;

 FUNC_0(VAR_17->zp_checksum >= VAR_2 &&
     VAR_17->zp_checksum < VAR_1 &&
     VAR_17->zp_compress >= VAR_4 &&
     VAR_17->zp_compress < VAR_3 &&
     FUNC_1(VAR_17->zp_type) &&
     VAR_17->zp_level < 32 &&
     VAR_17->zp_copies > 0 &&
     VAR_17->zp_copies <= FUNC_2(VAR_11));

 VAR_26 = FUNC_3(VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_21, VAR_22,
     VAR_8, VAR_23, VAR_24, ((void*)0), 0, VAR_25,
     VAR_7, (VAR_24 & VAR_6) ?
     VAR_5 : VAR_9);

 VAR_26->io_ready = VAR_18;
 VAR_26->io_children_ready = VAR_19;
 VAR_26->io_physdone = VAR_20;
 VAR_26->io_prop = *VAR_17;







 if (VAR_14 == ((void*)0) && VAR_26->io_prop.zp_dedup_verify) {
  VAR_26->io_prop.zp_dedup = VAR_26->io_prop.zp_dedup_verify = VAR_0;
 }

 return (VAR_26);
}
