
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct nlist {char* n_name; scalar_t__ n_type; int n_value; } ;
struct kinfo_proc {int ki_structsize; } ;
struct TYPE_15__ {struct kinfo_proc* procbase; int program; TYPE_1__* arch; } ;
typedef TYPE_2__ kvm_t ;
struct TYPE_14__ {int (* ka_native ) (TYPE_2__*) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (TYPE_2__*,int ,int*) ;
 int FUNC_2 (TYPE_2__*,int ,char*,...) ;
 int FUNC_3 (TYPE_2__*) ;
 struct kinfo_proc* FUNC_4 (TYPE_2__*,size_t) ;
 scalar_t__ FUNC_5 (TYPE_2__*,struct kinfo_proc*,size_t) ;
 int FUNC_6 (TYPE_2__*,int ,char*) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_7 (void*) ;
 int VAR_8 ;
 int FUNC_8 (TYPE_2__*,int,int,int ,int ,int) ;
 scalar_t__ FUNC_9 (TYPE_2__*,struct nlist*) ;
 struct kinfo_proc* FUNC_10 (struct kinfo_proc*,size_t) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (int*,int,struct kinfo_proc*,size_t*,int *,int ) ;
 int VAR_9 ;

struct kinfo_proc *
FUNC_13(kvm_t *VAR_10, int VAR_11, int VAR_12, int *VAR_13)
{
 int VAR_14[4], VAR_15, VAR_16;
 size_t VAR_17, VAR_18;
 int VAR_19;

 if (VAR_10->procbase != 0) {
  FUNC_7((void *)VAR_10->procbase);




  VAR_10->procbase = 0;
 }
 if (FUNC_0(VAR_10)) {
  VAR_17 = 0;
  VAR_14[0] = VAR_0;
  VAR_14[1] = VAR_2;
  VAR_14[2] = VAR_11;
  VAR_14[3] = VAR_12;
  VAR_19 = VAR_11 & ~VAR_4;
  VAR_15 = FUNC_12(VAR_14,
      VAR_19 == VAR_3 || VAR_19 == VAR_5 ?
      3 : 4, ((void*)0), &VAR_17, ((void*)0), 0);
  if (VAR_15 == -1) {
   FUNC_6(VAR_10, VAR_10->program, "kvm_getprocs");
   return (0);
  }





  if (VAR_17 == 0) {
   VAR_10->procbase = FUNC_4(VAR_10, 1);
   goto liveout;
  }
  do {
   VAR_17 += VAR_17 / 10;
   VAR_10->procbase = (struct kinfo_proc *)
       FUNC_5(VAR_10, VAR_10->procbase, VAR_17);
   if (VAR_10->procbase == ((void*)0))
    return (0);
   VAR_18 = VAR_17;
   VAR_15 = FUNC_12(VAR_14, VAR_19 == VAR_3 ||
       VAR_19 == VAR_5 ? 3 : 4,
       VAR_10->procbase, &VAR_17, ((void*)0), 0);
  } while (VAR_15 == -1 && VAR_7 == VAR_1 && VAR_17 == VAR_18);
  if (VAR_15 == -1) {
   FUNC_6(VAR_10, VAR_10->program, "kvm_getprocs");
   return (0);
  }






  if (VAR_17 > 0 &&
      VAR_10->procbase->ki_structsize != sizeof(struct kinfo_proc)) {
   FUNC_2(VAR_10, VAR_10->program,
       "kinfo_proc size mismatch (expected %zu, got %d)",
       sizeof(struct kinfo_proc),
       VAR_10->procbase->ki_structsize);
   return (0);
  }
liveout:
  VAR_16 = VAR_17 == 0 ? 0 : VAR_17 / VAR_10->procbase->ki_structsize;
 } else {
  struct nlist VAR_20[6], *VAR_21;
  struct nlist VAR_22[2];

  VAR_20[0].n_name = "_nprocs";
  VAR_20[1].n_name = "_allproc";
  VAR_20[2].n_name = "_ticks";
  VAR_20[3].n_name = "_hz";
  VAR_20[4].n_name = "_cpu_tick_frequency";
  VAR_20[5].n_name = 0;

  VAR_22[0].n_name = "_zombproc";
  VAR_22[1].n_name = 0;

  if (!VAR_10->arch->ka_native(VAR_10)) {
   FUNC_2(VAR_10, VAR_10->program,
       "cannot read procs from non-native core");
   return (0);
  }

  if (FUNC_9(VAR_10, VAR_20) != 0) {
   for (VAR_21 = VAR_20; VAR_21->n_type != 0; ++VAR_21)
    ;
   FUNC_2(VAR_10, VAR_10->program,
     "%s: no such symbol", VAR_21->n_name);
   return (0);
  }
  (void) FUNC_9(VAR_10, VAR_22);
  if (FUNC_1(VAR_10, VAR_20[0].n_value, &VAR_16)) {
   FUNC_2(VAR_10, VAR_10->program, "can't read nprocs");
   return (0);
  }





  if (VAR_11 == VAR_3 || (VAR_11 & VAR_4))
   VAR_16 *= 10;
  if (FUNC_1(VAR_10, VAR_20[2].n_value, &VAR_9)) {
   FUNC_2(VAR_10, VAR_10->program, "can't read ticks");
   return (0);
  }
  if (FUNC_1(VAR_10, VAR_20[3].n_value, &VAR_8)) {
   FUNC_2(VAR_10, VAR_10->program, "can't read hz");
   return (0);
  }
  if (FUNC_1(VAR_10, VAR_20[4].n_value, &VAR_6)) {
   FUNC_2(VAR_10, VAR_10->program,
       "can't read cpu_tick_frequency");
   return (0);
  }
  VAR_17 = VAR_16 * sizeof(struct kinfo_proc);
  VAR_10->procbase = (struct kinfo_proc *)FUNC_4(VAR_10, VAR_17);
  if (VAR_10->procbase == ((void*)0))
   return (0);

  VAR_16 = FUNC_8(VAR_10, VAR_11, VAR_12, VAR_20[1].n_value,
          VAR_22[0].n_value, VAR_16);
  if (VAR_16 <= 0) {
   FUNC_3(VAR_10);
   VAR_16 = 0;
  }






 }
 *VAR_13 = VAR_16;
 return (VAR_10->procbase);
}
