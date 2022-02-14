
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ulong_t ;
struct TYPE_5__ {scalar_t__ pa_addr; int * pa_ctfp; int * pa_file; } ;
typedef TYPE_1__ dt_printarg_t ;
typedef int ctf_id_t ;
typedef int ctf_file_t ;
struct TYPE_6__ {scalar_t__ cte_format; int cte_bits; } ;
typedef TYPE_2__ ctf_encoding_t ;
typedef scalar_t__ caddr_t ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *,int ,TYPE_2__*) ;
 int FUNC_1 (int *,char*,...) ;

__attribute__((used)) static void
FUNC_2(ctf_id_t VAR_4, ulong_t VAR_5, dt_printarg_t *VAR_6)
{
 FILE *VAR_7 = VAR_6->pa_file;
 ctf_file_t *VAR_8 = VAR_6->pa_ctfp;
 ctf_encoding_t VAR_9;
 caddr_t VAR_10 = VAR_6->pa_addr + VAR_5 / VAR_3;

 if (FUNC_0(VAR_8, VAR_4, &VAR_9) == 0) {
  if (VAR_9.cte_format == VAR_2 &&
      VAR_9.cte_bits == sizeof (float) * VAR_3) {

   (void) FUNC_1(VAR_7, "%+.7e", *((float *)VAR_10));
  } else if (VAR_9.cte_format == VAR_0 &&
      VAR_9.cte_bits == sizeof (double) * VAR_3) {

   (void) FUNC_1(VAR_7, "%+.7e", *((double *)VAR_10));
  } else if (VAR_9.cte_format == VAR_1 &&
      VAR_9.cte_bits == sizeof (long double) * VAR_3) {

   (void) FUNC_1(VAR_7, "%+.16LE", *((long double *)VAR_10));
  } else {
   (void) FUNC_1(VAR_7, "<unknown encoding>");
  }
 }
}
