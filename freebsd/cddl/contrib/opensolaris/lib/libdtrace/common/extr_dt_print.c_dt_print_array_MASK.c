
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int ulong_t ;
typedef int ssize_t ;
struct TYPE_8__ {scalar_t__ pa_depth; scalar_t__ pa_addr; int pa_nest; int * pa_ctfp; int * pa_file; } ;
typedef TYPE_1__ dt_printarg_t ;
typedef int ctf_id_t ;
typedef int ctf_file_t ;
typedef int ctf_encoding_t ;
struct TYPE_9__ {int ctr_nelems; int ctr_contents; } ;
typedef TYPE_2__ ctf_arinfo_t ;
typedef scalar_t__ caddr_t ;
typedef scalar_t__ boolean_t ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,int,TYPE_2__*) ;
 int FUNC_3 (int *,int,int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ,int ,TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int VAR_5 ;
 int FUNC_9 (TYPE_1__*,int ) ;
 int FUNC_10 (int *,char*,...) ;
 int FUNC_11 (char) ;

__attribute__((used)) static void
FUNC_12(ctf_id_t VAR_6, ulong_t VAR_7, dt_printarg_t *VAR_8)
{
 FILE *VAR_9 = VAR_8->pa_file;
 ctf_file_t *VAR_10 = VAR_8->pa_ctfp;
 caddr_t VAR_11 = VAR_8->pa_addr + VAR_7 / VAR_4;
 ctf_arinfo_t VAR_12;
 ssize_t VAR_13;
 ctf_encoding_t VAR_14;
 int VAR_15;
 boolean_t VAR_16;
 int VAR_17;
 ctf_id_t VAR_18;

 if (FUNC_2(VAR_10, VAR_6, &VAR_12) == VAR_2) {
  (void) FUNC_10(VAR_9, "%p", (void *)VAR_11);
  return;
 }

 if ((VAR_13 = FUNC_6(VAR_10, VAR_12.ctr_contents)) < 0 ||
     (VAR_18 = FUNC_5(VAR_10, VAR_12.ctr_contents)) == VAR_2 ||
     (VAR_17 = FUNC_4(VAR_10, VAR_18)) == VAR_2) {
  (void) FUNC_10(VAR_9, "<invalid type %lu>", VAR_12.ctr_contents);
  return;
 }


 VAR_16 = VAR_0;
 if (VAR_17 == VAR_3 &&
     FUNC_3(VAR_10, VAR_18, &VAR_14) != VAR_2 && FUNC_0(VAR_14)) {
  char VAR_19;
  for (VAR_15 = 0; VAR_15 < VAR_12.ctr_nelems; VAR_15++) {
   VAR_19 = *((char *)VAR_11 + VAR_13 * VAR_15);
   if (!FUNC_11(VAR_19) || VAR_19 == '\0')
    break;
  }

  if (VAR_15 != VAR_12.ctr_nelems && VAR_19 == '\0')
   VAR_16 = VAR_1;
 }
 if (!VAR_16 || VAR_8->pa_depth != 0)
  (void) FUNC_10(VAR_9, "[ ");

 if (VAR_16)
  (void) FUNC_10(VAR_9, "\"");

 for (VAR_15 = 0; VAR_15 < VAR_12.ctr_nelems; VAR_15++) {
  if (VAR_16) {
   char VAR_20 = *((char *)VAR_11 + VAR_13 * VAR_15);
   if (VAR_20 == '\0')
    break;
   (void) FUNC_10(VAR_9, "%c", VAR_20);
  } else {





   dt_printarg_t VAR_21 = *VAR_8;
   VAR_21.pa_nest += VAR_8->pa_depth + 1;
   VAR_21.pa_depth = 0;
   VAR_21.pa_addr = VAR_11 + VAR_13 * VAR_15;
   (void) FUNC_7(VAR_10, VAR_12.ctr_contents,
       VAR_5, &VAR_21);

   FUNC_9(&VAR_21, 0);
   if (VAR_15 != VAR_12.ctr_nelems - 1)
    (void) FUNC_10(VAR_9, ", ");
   else if (FUNC_1(VAR_17))
    (void) FUNC_10(VAR_9, "\n");
  }
 }

 if (VAR_16)
  (void) FUNC_10(VAR_9, "\"");

 if (!VAR_16 || VAR_8->pa_depth != 0) {
  if (FUNC_1(VAR_17))
   FUNC_8(VAR_8);
  else
   (void) FUNC_10(VAR_9, " ");
  (void) FUNC_10(VAR_9, "]");
 }
}
