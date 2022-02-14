
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct aac_softc {int flags; int aac_max_sectors; int aac_sg_tablesize; int aac_max_fibs_alloc; int aac_max_fib_size; int aac_common_busaddr; int aac_max_fibs; int total_fibs; int aac_commands; int aac_fibmap_tqh; struct aac_common* aac_common; int aac_common_dmamap; int aac_common_dmat; int aac_dev; int aac_parent_dmat; int aac_fib_dmat; int aac_buffer_dmat; int aac_io_lock; } ;
struct aac_common {int dummy; } ;
struct aac_command {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 char* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct aac_softc*) ;
 int VAR_12 ;
 scalar_t__ FUNC_2 (int ,int,int ,int,int,int *,int *,int,int,int,int ,int *,int *,int *) ;
 int FUNC_3 (int ,int ,struct aac_common*,int,int ,struct aac_softc*,int ) ;
 scalar_t__ FUNC_4 (int ,void**,int ,int *) ;
 int * VAR_13 ;
 int FUNC_5 (struct aac_common*,int) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (struct aac_softc*,char*,char*) ;
 int FUNC_8 (int,int ,int) ;

__attribute__((used)) static int
FUNC_9(struct aac_softc *VAR_14)
{

 FUNC_7(VAR_14, VAR_8, "");




 if (FUNC_2(VAR_14->aac_parent_dmat,
          1, 0,
          (VAR_14->flags & VAR_1) ?
          VAR_4 :
          VAR_5,
          VAR_4,
          ((void*)0), ((void*)0),
          VAR_14->aac_max_sectors << 9,
          VAR_14->aac_sg_tablesize,
          VAR_6,
          VAR_2,
          VAR_13,
          &VAR_14->aac_io_lock,
          &VAR_14->aac_buffer_dmat)) {
  FUNC_6(VAR_14->aac_dev, "can't allocate buffer DMA tag\n");
  return (VAR_7);
 }




 if (FUNC_2(VAR_14->aac_parent_dmat,
          1, 0,
          (VAR_14->flags & VAR_0) ?
          VAR_5 :
          0x7fffffff,
          VAR_4,
          ((void*)0), ((void*)0),
          VAR_14->aac_max_fibs_alloc *
          VAR_14->aac_max_fib_size,
          1,
          VAR_14->aac_max_fibs_alloc *
          VAR_14->aac_max_fib_size,
          0,
          ((void*)0), ((void*)0),
          &VAR_14->aac_fib_dmat)) {
  FUNC_6(VAR_14->aac_dev, "can't allocate FIB DMA tag\n");
  return (VAR_7);
 }




 if (FUNC_2(VAR_14->aac_parent_dmat,
          1, 0,
          (VAR_14->flags & VAR_0) ?
          VAR_5 :
          0x7fffffff,
          VAR_4,
          ((void*)0), ((void*)0),
          8192 + sizeof(struct aac_common),
          1,
          VAR_6,
          0,
          ((void*)0), ((void*)0),
          &VAR_14->aac_common_dmat)) {
  FUNC_6(VAR_14->aac_dev,
         "can't allocate common structure DMA tag\n");
  return (VAR_7);
 }
 if (FUNC_4(VAR_14->aac_common_dmat, (void **)&VAR_14->aac_common,
        VAR_3, &VAR_14->aac_common_dmamap)) {
  FUNC_6(VAR_14->aac_dev, "can't allocate common structure\n");
  return (VAR_7);
 }







 (void)FUNC_3(VAR_14->aac_common_dmat, VAR_14->aac_common_dmamap,
   VAR_14->aac_common, 8192 + sizeof(*VAR_14->aac_common),
   VAR_12, VAR_14, 0);

 if (VAR_14->aac_common_busaddr < 8192) {
  VAR_14->aac_common = (struct aac_common *)
      ((uint8_t *)VAR_14->aac_common + 8192);
  VAR_14->aac_common_busaddr += 8192;
 }
 FUNC_5(VAR_14->aac_common, sizeof(*VAR_14->aac_common));


 FUNC_0(&VAR_14->aac_fibmap_tqh);
 VAR_14->aac_commands = FUNC_8(VAR_14->aac_max_fibs * sizeof(struct aac_command),
      VAR_9, VAR_10|VAR_11);
 while (VAR_14->total_fibs < VAR_14->aac_max_fibs) {
  if (FUNC_1(VAR_14) != 0)
   break;
 }
 if (VAR_14->total_fibs == 0)
  return (VAR_7);

 return (0);
}
