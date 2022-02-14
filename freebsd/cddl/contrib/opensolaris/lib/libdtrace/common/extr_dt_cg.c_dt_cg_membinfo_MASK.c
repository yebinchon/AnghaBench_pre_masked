
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int n ;
struct TYPE_3__ {scalar_t__ dtt_type; int * dtt_ctfp; } ;
typedef TYPE_1__ dtrace_typeinfo_t ;
typedef int ctf_membinfo_t ;
typedef scalar_t__ ctf_id_t ;
typedef int ctf_file_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,scalar_t__,char const*,int *) ;
 scalar_t__ FUNC_1 (int *,scalar_t__) ;
 int * FUNC_2 (int *,scalar_t__,char*,int) ;
 scalar_t__ FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (char*,TYPE_1__*) ;

__attribute__((used)) static ctf_file_t *
FUNC_5(ctf_file_t *VAR_3, ctf_id_t VAR_4, const char *VAR_5, ctf_membinfo_t *VAR_6)
{
 while (FUNC_1(VAR_3, VAR_4) == VAR_1) {
  char VAR_7[VAR_2];
  dtrace_typeinfo_t VAR_8;

  if (FUNC_2(VAR_3, VAR_4, VAR_7, sizeof (VAR_7)) == ((void*)0) ||
      FUNC_4(VAR_7, &VAR_8) == -1 || (
      VAR_8.dtt_ctfp == VAR_3 && VAR_8.dtt_type == VAR_4))
   break;

  VAR_3 = VAR_8.dtt_ctfp;
  VAR_4 = FUNC_3(VAR_3, VAR_8.dtt_type);
 }

 if (FUNC_0(VAR_3, VAR_4, VAR_5, VAR_6) == VAR_0)
  return (((void*)0));

 return (VAR_3);
}
