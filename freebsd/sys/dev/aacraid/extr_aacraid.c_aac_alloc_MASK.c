
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct aac_softc {int flags; int aac_max_sectors; int aac_sg_tablesize; int aac_max_fibs_alloc; int aac_max_fib_size; int aac_max_fibs; int total_fibs; int aac_io_lock; int aac_commands; int aac_fibmap_tqh; int aac_common; int aac_common_dmamap; int aac_common_dmat; int aac_dev; int aac_parent_dmat; int aac_fib_dmat; int aac_buffer_dmat; } ;
struct aac_fib_xporthdr {int dummy; } ;
struct aac_common {int dummy; } ;
struct aac_command {int dummy; } ;
typedef int bus_size_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 char* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct aac_softc*) ;
 int VAR_13 ;
 scalar_t__ FUNC_2 (int ,int,int ,int,int,int *,int *,int,int,int,int ,int *,int *,int *) ;
 int FUNC_3 (int ,int ,int ,int,int ,struct aac_softc*,int ) ;
 scalar_t__ FUNC_4 (int ,void**,int ,int *) ;
 int * VAR_14 ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (struct aac_softc*,char*,char*) ;
 int FUNC_8 (int,int ,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int
FUNC_11(struct aac_softc *VAR_15)
{
 bus_size_t VAR_16;

 FUNC_7(VAR_15, VAR_9, "");




 if (FUNC_2(VAR_15->aac_parent_dmat,
          1, 0,
          (VAR_15->flags & VAR_2) ?
          VAR_5 :
          VAR_6,
          VAR_5,
          ((void*)0), ((void*)0),
          VAR_15->aac_max_sectors << 9,
          VAR_15->aac_sg_tablesize,
          VAR_7,
          VAR_3,
          VAR_14,
          &VAR_15->aac_io_lock,
          &VAR_15->aac_buffer_dmat)) {
  FUNC_6(VAR_15->aac_dev, "can't allocate buffer DMA tag\n");
  return (VAR_8);
 }




 if (VAR_15->flags & VAR_1)
  VAR_16 = VAR_15->aac_max_fibs_alloc * (VAR_15->aac_max_fib_size +
   sizeof(struct aac_fib_xporthdr) + 31);
 else
  VAR_16 = VAR_15->aac_max_fibs_alloc * (VAR_15->aac_max_fib_size + 31);
 if (FUNC_2(VAR_15->aac_parent_dmat,
          1, 0,
          (VAR_15->flags & VAR_0) ?
          VAR_6 :
          0x7fffffff,
          VAR_5,
          ((void*)0), ((void*)0),
          VAR_16,
          1,
          VAR_16,
          0,
          ((void*)0), ((void*)0),
          &VAR_15->aac_fib_dmat)) {
  FUNC_6(VAR_15->aac_dev, "can't allocate FIB DMA tag\n");
  return (VAR_8);
 }




 VAR_16 = sizeof(struct aac_common);
 VAR_16 += VAR_15->aac_max_fibs * sizeof(u_int32_t);
 if (FUNC_2(VAR_15->aac_parent_dmat,
          1, 0,
          (VAR_15->flags & VAR_0) ?
          VAR_6 :
          0x7fffffff,
          VAR_5,
          ((void*)0), ((void*)0),
          VAR_16,
          1,
          VAR_16,
          0,
          ((void*)0), ((void*)0),
          &VAR_15->aac_common_dmat)) {
  FUNC_6(VAR_15->aac_dev,
         "can't allocate common structure DMA tag\n");
  return (VAR_8);
 }
 if (FUNC_4(VAR_15->aac_common_dmat, (void **)&VAR_15->aac_common,
        VAR_4, &VAR_15->aac_common_dmamap)) {
  FUNC_6(VAR_15->aac_dev, "can't allocate common structure\n");
  return (VAR_8);
 }

 (void)FUNC_3(VAR_15->aac_common_dmat, VAR_15->aac_common_dmamap,
   VAR_15->aac_common, VAR_16,
   VAR_13, VAR_15, 0);
 FUNC_5(VAR_15->aac_common, VAR_16);


 FUNC_0(&VAR_15->aac_fibmap_tqh);
 VAR_15->aac_commands = FUNC_8(VAR_15->aac_max_fibs * sizeof(struct aac_command),
      VAR_10, VAR_11|VAR_12);
 FUNC_9(&VAR_15->aac_io_lock);
 while (VAR_15->total_fibs < VAR_15->aac_max_fibs) {
  if (FUNC_1(VAR_15) != 0)
   break;
 }
 FUNC_10(&VAR_15->aac_io_lock);
 if (VAR_15->total_fibs == 0)
  return (VAR_8);

 return (0);
}
