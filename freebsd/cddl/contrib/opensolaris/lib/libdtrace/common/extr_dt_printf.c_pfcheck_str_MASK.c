
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint_t ;
typedef int dt_pfargv_t ;
typedef int dt_pfargd_t ;
struct TYPE_6__ {int dn_type; int * dn_ctfp; } ;
typedef TYPE_1__ dt_node_t ;
typedef int ctf_id_t ;
typedef int ctf_file_t ;
typedef int ctf_encoding_t ;
struct TYPE_7__ {int ctr_contents; } ;
typedef TYPE_2__ ctf_arinfo_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *,int ,TYPE_2__*) ;
 scalar_t__ FUNC_2 (int *,int ,int *) ;
 scalar_t__ FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_6(dt_pfargv_t *VAR_2, dt_pfargd_t *VAR_3, dt_node_t *VAR_4)
{
 ctf_file_t *VAR_5;
 ctf_encoding_t VAR_6;
 ctf_arinfo_t VAR_7;
 ctf_id_t VAR_8;
 uint_t VAR_9;

 if (FUNC_5(VAR_4))
  return (1);

 VAR_5 = VAR_4->dn_ctfp;
 VAR_8 = FUNC_4(VAR_5, VAR_4->dn_type);
 VAR_9 = FUNC_3(VAR_5, VAR_8);

 return (VAR_9 == VAR_1 && FUNC_1(VAR_5, VAR_8, &VAR_7) == 0 &&
     (VAR_8 = FUNC_4(VAR_5, VAR_7.ctr_contents)) != VAR_0 &&
     FUNC_2(VAR_5, VAR_8, &VAR_6) == 0 && FUNC_0(VAR_6));
}
