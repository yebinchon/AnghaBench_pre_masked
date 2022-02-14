
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;


typedef int u_longlong_t ;
struct TYPE_24__ {int t_type; int t_size; char* t_name; TYPE_3__* t_members; } ;
typedef TYPE_2__ tdesc_t ;
struct TYPE_25__ {int ml_offset; int ml_size; struct TYPE_25__* ml_next; int * ml_name; int ml_type; } ;
typedef TYPE_3__ mlist_t ;
struct TYPE_26__ {TYPE_2__* ii_dtype; int ii_name; int ii_type; } ;
typedef TYPE_4__ iidesc_t ;
struct TYPE_27__ {TYPE_1__* dw_td; int dw_fwdhash; } ;
typedef TYPE_5__ dwarf_t ;
struct TYPE_23__ {int td_iihash; } ;
typedef int Dwarf_Unsigned ;
typedef int Dwarf_Off ;
typedef scalar_t__ Dwarf_Half ;
typedef int * Dwarf_Die ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int,char*,int ,char const*,...) ;
 int * FUNC_1 (TYPE_5__*,int *) ;
 int FUNC_2 (TYPE_5__*,int *) ;
 int VAR_10 ;
 scalar_t__ FUNC_3 (TYPE_5__*,int *) ;
 int FUNC_4 (TYPE_5__*,int *,int ) ;
 scalar_t__ FUNC_5 (TYPE_5__*,int *,int ,int*,int ) ;
 int * FUNC_6 (TYPE_5__*,int *) ;
 int FUNC_7 (TYPE_5__*,int *) ;
 int * FUNC_8 (TYPE_5__*,int *) ;
 scalar_t__ FUNC_9 (TYPE_5__*,int *) ;
 scalar_t__ FUNC_10 (TYPE_5__*,int *,int ,int*,int ) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (int ,TYPE_2__*) ;
 int FUNC_13 (int ,TYPE_2__*,int ,TYPE_2__*) ;
 int FUNC_14 (int ,TYPE_4__*) ;
 int FUNC_15 (char*,size_t,char*,char const*) ;
 int FUNC_16 (char const*) ;
 int FUNC_17 (int ) ;
 char const* FUNC_18 (TYPE_2__*) ;
 void* FUNC_19 (int) ;
 char* FUNC_20 (size_t) ;
 int FUNC_21 (char*) ;

__attribute__((used)) static void
FUNC_22(dwarf_t *VAR_11, Dwarf_Die VAR_12, Dwarf_Off VAR_13, tdesc_t *VAR_14,
    int VAR_15, const char *VAR_16)
{
 Dwarf_Unsigned VAR_17, VAR_18, VAR_19;

 Dwarf_Unsigned VAR_20;

 Dwarf_Die VAR_21;
 mlist_t *VAR_22, **VAR_23;
 iidesc_t *VAR_24;

 VAR_14->t_type = (FUNC_3(VAR_11, VAR_12) ? VAR_7 : VAR_15);

 FUNC_0(3, "die %llu: creating %s %s\n", VAR_13,
     (VAR_14->t_type == VAR_7 ? "forward decl" : VAR_16),
     FUNC_18(VAR_14));

 if (VAR_14->t_type == VAR_7) {
  FUNC_12(VAR_11->dw_fwdhash, VAR_14);
  return;
 }

 (void) FUNC_13(VAR_11->dw_fwdhash, VAR_14, VAR_10, VAR_14);

 (void) FUNC_10(VAR_11, VAR_12, VAR_3, &VAR_17, VAR_0);
 VAR_14->t_size = VAR_17;




 if ((VAR_21 = FUNC_1(VAR_11, VAR_12)) == ((void*)0)) {
  goto out;
 }

 VAR_23 = &VAR_14->t_members;

 do {
  Dwarf_Off VAR_25 = FUNC_7(VAR_11, VAR_21);
  Dwarf_Half VAR_26 = FUNC_9(VAR_11, VAR_21);
  Dwarf_Unsigned VAR_27;

  if (VAR_26 != VAR_6) {

   FUNC_2(VAR_11, VAR_21);
   continue;
  }

  FUNC_0(3, "die %llu: mem %llu: creating member\n", VAR_13, VAR_25);

  VAR_22 = FUNC_19(sizeof (mlist_t));
  if ((VAR_22->ml_name = FUNC_6(VAR_11, VAR_21)) == ((void*)0))
   VAR_22->ml_name = ((void*)0);

  VAR_22->ml_type = FUNC_4(VAR_11, VAR_21, VAR_5);

  if (FUNC_5(VAR_11, VAR_21, VAR_4,
      &VAR_27, 0)) {
   FUNC_0(3, "die %llu: got mloff %llx\n", VAR_13,
       (u_longlong_t)VAR_27);
   VAR_22->ml_offset = VAR_27 * 8;
  }

  if (FUNC_10(VAR_11, VAR_21, VAR_2, &VAR_18, 0))
   VAR_22->ml_size = VAR_18;
  else
   VAR_22->ml_size = FUNC_17(VAR_22->ml_type);

  if (FUNC_10(VAR_11, VAR_21, VAR_1, &VAR_19, 0)) {

   VAR_22->ml_offset += VAR_19;
  }

  FUNC_0(3, "die %llu: mem %llu: created \"%s\" (off %u sz %u)\n",
      VAR_13, VAR_25, VAR_22->ml_name, VAR_22->ml_offset, VAR_22->ml_size);

  *VAR_23 = VAR_22;
  VAR_23 = &VAR_22->ml_next;
 } while ((VAR_21 = FUNC_8(VAR_11, VAR_21)) != ((void*)0));
 if (VAR_14->t_members == ((void*)0)) {
  const char *VAR_28 = FUNC_18(VAR_14);
  size_t VAR_29 = 7 + FUNC_16(VAR_28) + 1;
  char *VAR_30 = FUNC_20(VAR_29);
  (void) FUNC_15(VAR_30, VAR_29, "orphan %s", VAR_28);

  FUNC_0(3, "die %llu: worked around %s %s\n", VAR_13, VAR_16, VAR_28);

  if (VAR_14->t_name != ((void*)0))
   FUNC_11(VAR_14->t_name);
  VAR_14->t_name = VAR_30;
  return;
 }

out:
 if (VAR_14->t_name != ((void*)0)) {
  VAR_24 = FUNC_19(sizeof (iidesc_t));
  VAR_24->ii_type = VAR_8;
  VAR_24->ii_name = FUNC_21(VAR_14->t_name);
  VAR_24->ii_dtype = VAR_14;

  FUNC_14(VAR_11->dw_td->td_iihash, VAR_24);
 }
}
