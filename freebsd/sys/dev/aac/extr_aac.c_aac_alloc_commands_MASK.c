
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int u_int8_t ;
struct aac_softc {scalar_t__ total_fibs; int aac_max_fibs_alloc; scalar_t__ aac_max_fibs; int aac_max_fib_size; int aac_fib_dmat; int aac_io_lock; int aac_fibmap_tqh; int aac_buffer_dmat; struct aac_command* aac_commands; int aac_dev; } ;
struct aac_fibmap {int aac_fibmap; scalar_t__ aac_fibs; struct aac_command* aac_commands; } ;
struct aac_fib {int dummy; } ;
struct aac_command {int cm_datamap; struct aac_command* cm_index; scalar_t__ cm_fibphys; struct aac_fib* cm_fib; struct aac_softc* cm_sc; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,struct aac_fibmap*,int ) ;
 int VAR_7 ;
 int FUNC_1 (struct aac_command*) ;
 int FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (int ,int ,scalar_t__,int,int ,scalar_t__*,int ) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int ,void**,int ,int *) ;
 int FUNC_6 (int ,scalar_t__,int ) ;
 int FUNC_7 (scalar_t__,int) ;
 int FUNC_8 (int ,char*) ;
 int VAR_8 ;
 int FUNC_9 (struct aac_fibmap*,int ) ;
 int FUNC_10 (struct aac_softc*,char*,char*,...) ;
 struct aac_fibmap* FUNC_11 (int,int ,int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static int
FUNC_14(struct aac_softc *VAR_9)
{
 struct aac_command *VAR_10;
 struct aac_fibmap *VAR_11;
 uint64_t VAR_12;
 int VAR_13, VAR_14;

 FUNC_10(VAR_9, VAR_3, "");

 if (VAR_9->total_fibs + VAR_9->aac_max_fibs_alloc > VAR_9->aac_max_fibs)
  return (VAR_1);

 VAR_11 = FUNC_11(sizeof(struct aac_fibmap), VAR_4, VAR_5|VAR_6);
 if (VAR_11 == ((void*)0))
  return (VAR_1);


 if (FUNC_5(VAR_9->aac_fib_dmat, (void **)&VAR_11->aac_fibs,
        VAR_0, &VAR_11->aac_fibmap)) {
  FUNC_8(VAR_9->aac_dev,
         "Not enough contiguous memory available.\n");
  FUNC_9(VAR_11, VAR_4);
  return (VAR_1);
 }


 (void)FUNC_3(VAR_9->aac_fib_dmat, VAR_11->aac_fibmap, VAR_11->aac_fibs,
         VAR_9->aac_max_fibs_alloc * VAR_9->aac_max_fib_size,
         VAR_7, &VAR_12, 0);


 FUNC_7(VAR_11->aac_fibs, VAR_9->aac_max_fibs_alloc * VAR_9->aac_max_fib_size);
 for (VAR_13 = 0; VAR_13 < VAR_9->aac_max_fibs_alloc; VAR_13++) {
  VAR_10 = VAR_9->aac_commands + VAR_9->total_fibs;
  VAR_11->aac_commands = VAR_10;
  VAR_10->cm_sc = VAR_9;
  VAR_10->cm_fib = (struct aac_fib *)
   ((u_int8_t *)VAR_11->aac_fibs + VAR_13*VAR_9->aac_max_fib_size);
  VAR_10->cm_fibphys = VAR_12 + VAR_13*VAR_9->aac_max_fib_size;
  VAR_10->cm_index = VAR_9->total_fibs;

  if ((VAR_14 = FUNC_2(VAR_9->aac_buffer_dmat, 0,
            &VAR_10->cm_datamap)) != 0)
   break;
  FUNC_12(&VAR_9->aac_io_lock);
  FUNC_1(VAR_10);
  VAR_9->total_fibs++;
  FUNC_13(&VAR_9->aac_io_lock);
 }

 if (VAR_13 > 0) {
  FUNC_12(&VAR_9->aac_io_lock);
  FUNC_0(&VAR_9->aac_fibmap_tqh, VAR_11, VAR_8);
  FUNC_10(VAR_9, VAR_2, "total_fibs= %d\n", VAR_9->total_fibs);
  FUNC_13(&VAR_9->aac_io_lock);
  return (0);
 }

 FUNC_4(VAR_9->aac_fib_dmat, VAR_11->aac_fibmap);
 FUNC_6(VAR_9->aac_fib_dmat, VAR_11->aac_fibs, VAR_11->aac_fibmap);
 FUNC_9(VAR_11, VAR_4);
 return (VAR_1);
}
