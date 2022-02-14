
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ulong_t ;
typedef int uint64_t ;
struct TYPE_5__ {char* dts_object; char* dts_name; } ;
typedef TYPE_1__ dtrace_syminfo_t ;
struct TYPE_6__ {int pa_dtp; scalar_t__ pa_addr; int * pa_ctfp; int * pa_file; } ;
typedef TYPE_2__ dt_printarg_t ;
typedef scalar_t__ ctf_id_t ;
typedef int ctf_file_t ;
typedef scalar_t__ caddr_t ;
typedef int GElf_Sym ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,scalar_t__) ;
 scalar_t__ FUNC_1 (int *,scalar_t__) ;
 size_t FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (int *,scalar_t__,size_t) ;
 scalar_t__ FUNC_4 (int ,int ,int *,TYPE_1__*) ;
 int FUNC_5 (int *,char*,char*,char*) ;

__attribute__((used)) static void
FUNC_6(ctf_id_t VAR_3, ulong_t VAR_4, dt_printarg_t *VAR_5)
{
 FILE *VAR_6 = VAR_5->pa_file;
 ctf_file_t *VAR_7 = VAR_5->pa_ctfp;
 caddr_t VAR_8 = VAR_5->pa_addr + VAR_4 / VAR_2;
 size_t VAR_9 = FUNC_2(VAR_7, VAR_3);
 ctf_id_t VAR_10 = FUNC_1(VAR_7, VAR_3);
 uint64_t VAR_11;
 dtrace_syminfo_t VAR_12;
 GElf_Sym VAR_13;

 if (VAR_10 == VAR_0 || FUNC_0(VAR_7, VAR_10) != VAR_1) {
  FUNC_3(VAR_6, VAR_8, VAR_9);
 } else {

  VAR_11 = *((uint64_t *)VAR_8);
  if (FUNC_4(VAR_5->pa_dtp, VAR_11, &VAR_13, &VAR_12) != 0) {
   FUNC_3(VAR_6, VAR_8, VAR_9);
  } else {
   (void) FUNC_5(VAR_6, "%s`%s", VAR_12.dts_object,
       VAR_12.dts_name);
  }
 }
}
