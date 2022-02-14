
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t ulong_t ;
struct TYPE_8__ {scalar_t__ pa_addr; int * pa_ctfp; int * pa_file; } ;
typedef TYPE_1__ dt_printarg_t ;
typedef int ctf_id_t ;
typedef int ctf_file_t ;
struct TYPE_9__ {int cte_format; size_t cte_bits; } ;
typedef TYPE_2__ ctf_encoding_t ;
typedef scalar_t__ caddr_t ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__) ;
 size_t VAR_2 ;
 scalar_t__ FUNC_1 (int *,int ,TYPE_2__*) ;
 int FUNC_2 (int *,scalar_t__,size_t) ;
 int FUNC_3 (int *,char*,...) ;
 scalar_t__ FUNC_4 (char) ;
 int FUNC_5 (TYPE_1__*,size_t,TYPE_2__*) ;

__attribute__((used)) static void
FUNC_6(ctf_id_t VAR_3, ulong_t VAR_4, dt_printarg_t *VAR_5)
{
 FILE *VAR_6 = VAR_5->pa_file;
 ctf_file_t *VAR_7 = VAR_5->pa_ctfp;
 ctf_encoding_t VAR_8;
 size_t VAR_9;
 caddr_t VAR_10 = VAR_5->pa_addr + VAR_4 / VAR_2;

 if (FUNC_1(VAR_7, VAR_3, &VAR_8) == VAR_0) {
  (void) FUNC_3(VAR_6, "<unknown encoding>");
  return;
 }





 if (VAR_8.cte_format & VAR_1) {
  (void) FUNC_3(VAR_6, "...");
  return;
 }





 VAR_9 = VAR_8.cte_bits / VAR_2;
 if (VAR_9 > 8 || (VAR_8.cte_bits % VAR_2) != 0 || (VAR_9 & (VAR_9 - 1)) != 0) {
  FUNC_5(VAR_5, VAR_4, &VAR_8);
  return;
 }




 if (FUNC_0(VAR_8)) {
  char VAR_11 = *(char *)VAR_10;
  if (FUNC_4(VAR_11))
   (void) FUNC_3(VAR_6, "'%c'", VAR_11);
  else if (VAR_11 == 0)
   (void) FUNC_3(VAR_6, "'\\0'");
  else
   (void) FUNC_3(VAR_6, "'\\%03o'", VAR_11);
  return;
 }

 FUNC_2(VAR_6, VAR_10, VAR_9);
}
