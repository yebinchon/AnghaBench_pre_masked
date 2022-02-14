
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int t_flags; TYPE_2__* t_fndef; int t_type; } ;
typedef TYPE_1__ tdesc_t ;
struct TYPE_5__ {int fn_nargs; int fn_vargs; void** fn_args; void* fn_ret; } ;
typedef TYPE_2__ fndef_t ;
typedef int dwarf_t ;
typedef int Dwarf_Off ;
typedef scalar_t__ Dwarf_Half ;
typedef int * Dwarf_Die ;
typedef int * Dwarf_Attribute ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,char*,int ,int,...) ;
 int * FUNC_1 (int *,int *,int ,int ) ;
 int * FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (int *,int *) ;
 void* FUNC_5 (int *,int *,int ) ;
 int * FUNC_6 (int *,int *) ;
 scalar_t__ FUNC_7 (int *,int *) ;
 void* FUNC_8 (int *) ;
 void* FUNC_9 (int) ;

__attribute__((used)) static void
FUNC_10(dwarf_t *VAR_5, Dwarf_Die VAR_6, Dwarf_Off VAR_7, tdesc_t *VAR_8)
{
 Dwarf_Attribute VAR_9;
 Dwarf_Half VAR_10;
 Dwarf_Die VAR_11;
 fndef_t *VAR_12;
 int VAR_13;

 FUNC_0(3, "die %llu <%llx>: creating function pointer\n", VAR_7, VAR_7);





 for (VAR_11 = FUNC_2(VAR_5, VAR_6); VAR_11 != ((void*)0);
     VAR_11 = FUNC_6(VAR_5, VAR_11)) {
  if ((VAR_10 = FUNC_7(VAR_5, VAR_11)) != VAR_1 &&
      VAR_10 != VAR_2) {

   FUNC_3(VAR_5, VAR_11);
  }
 }

 if (FUNC_4(VAR_5, VAR_6)) {






  return;
 }

 VAR_12 = FUNC_9(sizeof (fndef_t));

 VAR_8->t_type = VAR_3;

 if ((VAR_9 = FUNC_1(VAR_5, VAR_6, VAR_0, 0)) != ((void*)0)) {
  VAR_12->fn_ret = FUNC_5(VAR_5, VAR_6, VAR_0);
 } else {
  VAR_12->fn_ret = FUNC_8(VAR_5);
 }




 for (VAR_12->fn_nargs = 0, VAR_11 = FUNC_2(VAR_5, VAR_6); VAR_11 != ((void*)0);
     VAR_11 = FUNC_6(VAR_5, VAR_11)) {
  if ((VAR_10 = FUNC_7(VAR_5, VAR_11)) == VAR_1)
   VAR_12->fn_nargs++;
  else if (VAR_10 == VAR_2 &&
      VAR_12->fn_nargs > 0)
   VAR_12->fn_vargs = 1;
 }

 if (VAR_12->fn_nargs != 0) {
  FUNC_0(3, "die %llu: adding %d argument%s\n", VAR_7, VAR_12->fn_nargs,
      (VAR_12->fn_nargs > 1 ? "s" : ""));

  VAR_12->fn_args = FUNC_9(sizeof (tdesc_t *) * VAR_12->fn_nargs);
  for (VAR_13 = 0, VAR_11 = FUNC_2(VAR_5, VAR_6);
      VAR_11 != ((void*)0) && VAR_13 < (int) VAR_12->fn_nargs;
      VAR_11 = FUNC_6(VAR_5, VAR_11)) {
   if (FUNC_7(VAR_5, VAR_11) != VAR_1)
    continue;

   VAR_12->fn_args[VAR_13++] = FUNC_5(VAR_5, VAR_11,
       VAR_0);
  }
 }

 VAR_8->t_fndef = VAR_12;
 VAR_8->t_flags |= VAR_4;
}
