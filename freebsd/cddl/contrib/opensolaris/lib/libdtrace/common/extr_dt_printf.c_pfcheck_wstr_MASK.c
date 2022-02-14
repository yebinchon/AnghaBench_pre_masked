
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint_t ;
typedef int dt_pfargv_t ;
typedef int dt_pfargd_t ;
struct TYPE_7__ {int dn_type; int * dn_ctfp; } ;
typedef TYPE_1__ dt_node_t ;
typedef int ctf_id_t ;
typedef int ctf_file_t ;
struct TYPE_8__ {int cte_bits; } ;
typedef TYPE_2__ ctf_encoding_t ;
struct TYPE_9__ {int ctr_contents; } ;
typedef TYPE_3__ ctf_arinfo_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int *,int ,TYPE_3__*) ;
 scalar_t__ FUNC_1 (int *,int ,TYPE_2__*) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static int
FUNC_4(dt_pfargv_t *VAR_3, dt_pfargd_t *VAR_4, dt_node_t *VAR_5)
{
 ctf_file_t *VAR_6 = VAR_5->dn_ctfp;
 ctf_id_t VAR_7 = FUNC_3(VAR_6, VAR_5->dn_type);
 uint_t VAR_8 = FUNC_2(VAR_6, VAR_7);

 ctf_encoding_t VAR_9;
 ctf_arinfo_t VAR_10;

 return (VAR_8 == VAR_1 && FUNC_0(VAR_6, VAR_7, &VAR_10) == 0 &&
     (VAR_7 = FUNC_3(VAR_6, VAR_10.ctr_contents)) != VAR_0 &&
     FUNC_2(VAR_6, VAR_7) == VAR_2 &&
     FUNC_1(VAR_6, VAR_7, &VAR_9) == 0 && VAR_9.cte_bits == 32);
}
