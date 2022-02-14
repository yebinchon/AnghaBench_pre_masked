
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int n ;
typedef int dt_pfargv_t ;
typedef int dt_pfargd_t ;
struct TYPE_3__ {int dn_type; int * dn_ctfp; } ;
typedef TYPE_1__ dt_node_t ;
typedef int ctf_id_t ;
typedef int ctf_file_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 int * FUNC_1 (int *,int ,char*,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (char*,char*) ;

__attribute__((used)) static int
FUNC_5(dt_pfargv_t *VAR_2, dt_pfargd_t *VAR_3, dt_node_t *VAR_4)
{
 ctf_file_t *VAR_5 = VAR_4->dn_ctfp;
 ctf_id_t VAR_6 = VAR_4->dn_type;
 char VAR_7[VAR_1];

 if (FUNC_1(VAR_5, FUNC_3(VAR_5, VAR_6), VAR_7,
     sizeof (VAR_7)) != ((void*)0) && (FUNC_4(VAR_7, "long long") == 0 ||
     FUNC_4(VAR_7, "signed long long") == 0 ||
     FUNC_4(VAR_7, "unsigned long long") == 0))
  return (1);







 while (FUNC_0(VAR_5, VAR_6) == VAR_0) {
  if (FUNC_1(VAR_5, VAR_6, VAR_7, sizeof (VAR_7)) != ((void*)0) &&
      (FUNC_4(VAR_7, "int64_t") == 0 || FUNC_4(VAR_7, "uint64_t") == 0))
   return (1);

  VAR_6 = FUNC_2(VAR_5, VAR_6);
 }

 return (0);
}
