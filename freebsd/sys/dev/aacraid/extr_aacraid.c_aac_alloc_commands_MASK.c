
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int u_int8_t ;
typedef int u_int64_t ;
typedef int u_int32_t ;
struct aac_softc {int total_fibs; int aac_max_fibs_alloc; int aac_max_fibs; int aac_max_fib_size; int flags; int aac_fib_dmat; int aac_fibmap_tqh; int aac_buffer_dmat; struct aac_command* aac_commands; int aac_io_lock; int aac_dev; } ;
struct aac_fibmap {int aac_fibmap; scalar_t__ aac_fibs; struct aac_command* aac_commands; } ;
struct aac_fib_xporthdr {int dummy; } ;
struct aac_fib {int dummy; } ;
struct aac_command {int cm_fibphys; int cm_index; int cm_datamap; struct aac_fib* cm_fib; struct aac_softc* cm_sc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 char* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,struct aac_fibmap*,int ) ;
 int VAR_9 ;
 int FUNC_1 (struct aac_command*) ;
 int FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (int ,int ,scalar_t__,int,int ,int*,int ) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int ,void**,int ,int *) ;
 int FUNC_6 (int ,scalar_t__,int ) ;
 int FUNC_7 (scalar_t__,int) ;
 int FUNC_8 (int ,char*) ;
 int VAR_10 ;
 int FUNC_9 (struct aac_fibmap*,int ) ;
 int FUNC_10 (struct aac_softc*,char*,char*,...) ;
 struct aac_fibmap* FUNC_11 (int,int ,int) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static int
FUNC_15(struct aac_softc *VAR_11)
{
 struct aac_command *VAR_12;
 struct aac_fibmap *VAR_13;
 uint64_t VAR_14;
 int VAR_15, VAR_16;
 u_int32_t VAR_17;

 FUNC_10(VAR_11, VAR_4, "");
 FUNC_12(&VAR_11->aac_io_lock, VAR_5);

 if (VAR_11->total_fibs + VAR_11->aac_max_fibs_alloc > VAR_11->aac_max_fibs)
  return (VAR_2);

 VAR_13 = FUNC_11(sizeof(struct aac_fibmap), VAR_6, VAR_7|VAR_8);
 if (VAR_13 == ((void*)0))
  return (VAR_2);

 FUNC_14(&VAR_11->aac_io_lock);

 if (FUNC_5(VAR_11->aac_fib_dmat, (void **)&VAR_13->aac_fibs,
        VAR_1, &VAR_13->aac_fibmap)) {
  FUNC_8(VAR_11->aac_dev,
         "Not enough contiguous memory available.\n");
  FUNC_9(VAR_13, VAR_6);
  FUNC_13(&VAR_11->aac_io_lock);
  return (VAR_2);
 }

 VAR_17 = VAR_11->aac_max_fib_size + 31;
 if (VAR_11->flags & VAR_0)
  VAR_17 += sizeof(struct aac_fib_xporthdr);

 (void)FUNC_3(VAR_11->aac_fib_dmat, VAR_13->aac_fibmap, VAR_13->aac_fibs,
         VAR_11->aac_max_fibs_alloc * VAR_17,
         VAR_9, &VAR_14, 0);
 FUNC_13(&VAR_11->aac_io_lock);


 FUNC_7(VAR_13->aac_fibs, VAR_11->aac_max_fibs_alloc * VAR_17);
 for (VAR_15 = 0; VAR_15 < VAR_11->aac_max_fibs_alloc; VAR_15++) {
  VAR_12 = VAR_11->aac_commands + VAR_11->total_fibs;
  VAR_13->aac_commands = VAR_12;
  VAR_12->cm_sc = VAR_11;
  VAR_12->cm_fib = (struct aac_fib *)
   ((u_int8_t *)VAR_13->aac_fibs + VAR_15 * VAR_17);
  VAR_12->cm_fibphys = VAR_14 + VAR_15 * VAR_17;
  if (VAR_11->flags & VAR_0) {
   u_int64_t VAR_18;
   VAR_18 =
    (VAR_12->cm_fibphys + sizeof(struct aac_fib_xporthdr) + 31) & ~31;
   VAR_12->cm_fib = (struct aac_fib *)
    ((u_int8_t *)VAR_12->cm_fib + (VAR_18 - VAR_12->cm_fibphys));
   VAR_12->cm_fibphys = VAR_18;
  } else {
   u_int64_t VAR_19;
   VAR_19 = (VAR_12->cm_fibphys + 31) & ~31;
   VAR_12->cm_fib = (struct aac_fib *)
    ((u_int8_t *)VAR_12->cm_fib + (VAR_19 - VAR_12->cm_fibphys));
   VAR_12->cm_fibphys = VAR_19;
  }
  VAR_12->cm_index = VAR_11->total_fibs;

  if ((VAR_16 = FUNC_2(VAR_11->aac_buffer_dmat, 0,
            &VAR_12->cm_datamap)) != 0)
   break;
  if (VAR_11->aac_max_fibs <= 1 || VAR_11->aac_max_fibs - VAR_11->total_fibs > 1)
   FUNC_1(VAR_12);
  VAR_11->total_fibs++;
 }

 if (VAR_15 > 0) {
  FUNC_0(&VAR_11->aac_fibmap_tqh, VAR_13, VAR_10);
  FUNC_10(VAR_11, VAR_3, "total_fibs= %d\n", VAR_11->total_fibs);
  return (0);
 }

 FUNC_4(VAR_11->aac_fib_dmat, VAR_13->aac_fibmap);
 FUNC_6(VAR_11->aac_fib_dmat, VAR_13->aac_fibs, VAR_13->aac_fibmap);
 FUNC_9(VAR_13, VAR_6);
 return (VAR_2);
}
