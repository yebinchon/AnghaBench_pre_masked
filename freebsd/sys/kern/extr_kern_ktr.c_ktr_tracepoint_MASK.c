
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef void* u_long ;
struct thread {int td_pflags; scalar_t__ td_critnest; } ;
struct ktr_entry {int ktr_cpu; char const* ktr_file; int ktr_line; char const* ktr_desc; void** ktr_parms; void* ktr_thread; int ktr_timestamp; } ;
struct ale {scalar_t__ ae_data; } ;


 int VAR_0 ;
 int FUNC_0 (int,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct thread*) ;
 struct thread* VAR_4 ;
 struct ale* FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,struct ale*) ;
 scalar_t__ FUNC_4 (int*,int,int) ;
 void* VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 struct ktr_entry* VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_5 (char const*,...) ;
 scalar_t__ FUNC_6 (char const*,char*,int) ;

void
FUNC_7(uint64_t VAR_19, const char *VAR_20, int VAR_21, const char *VAR_22,
    u_long VAR_23, u_long VAR_24, u_long VAR_25, u_long VAR_26, u_long VAR_27,
    u_long VAR_28)
{
 struct ktr_entry *VAR_29;



 int VAR_30, VAR_31;



 int VAR_32;

 if (VAR_18 || VAR_6)
  return;
 if ((VAR_16 & VAR_19) == 0 || VAR_12 == ((void*)0))
  return;
 VAR_32 = VAR_1;
 if (!FUNC_0(VAR_32, &VAR_13))
  return;
 {
  do {
   VAR_31 = VAR_15;
   VAR_30 = (VAR_31 + 1) % VAR_14;
  } while (FUNC_4(&VAR_15, VAR_31, VAR_30) == 0);
  VAR_29 = &VAR_12[VAR_31];
 }
 VAR_29->ktr_timestamp = VAR_2;
 VAR_29->ktr_cpu = VAR_32;
 VAR_29->ktr_thread = VAR_5;
 if (VAR_20 != ((void*)0))
  while (FUNC_6(VAR_20, "../", 3) == 0)
   VAR_20 += 3;
 VAR_29->ktr_file = VAR_20;
 VAR_29->ktr_line = VAR_21;
 VAR_29->ktr_desc = VAR_22;
 VAR_29->ktr_parms[0] = VAR_23;
 VAR_29->ktr_parms[1] = VAR_24;
 VAR_29->ktr_parms[2] = VAR_25;
 VAR_29->ktr_parms[3] = VAR_26;
 VAR_29->ktr_parms[4] = VAR_27;
 VAR_29->ktr_parms[5] = VAR_28;
}
