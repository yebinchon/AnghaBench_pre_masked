
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


 int VAR_0 ;
 int * FUNC_0 (int *,int ,char*,int) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (char*,char*) ;

__attribute__((used)) static int
FUNC_3(dt_pfargv_t *VAR_1, dt_pfargd_t *VAR_2, dt_node_t *VAR_3)
{
 ctf_file_t *VAR_4 = VAR_3->dn_ctfp;
 ctf_id_t VAR_5 = FUNC_1(VAR_4, VAR_3->dn_type);
 char VAR_6[VAR_0];

 return (FUNC_0(VAR_4, VAR_5, VAR_6, sizeof (VAR_6)) != ((void*)0) && (
     FUNC_2(VAR_6, "short") == 0 || FUNC_2(VAR_6, "signed short") == 0 ||
     FUNC_2(VAR_6, "unsigned short") == 0));
}
