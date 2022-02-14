
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint_t ;
struct TYPE_5__ {int dn_flags; int dn_type; int * dn_ctfp; } ;
typedef TYPE_1__ dt_node_t ;
typedef int ctf_id_t ;
typedef int ctf_file_t ;
typedef int ctf_encoding_t ;
struct TYPE_6__ {int ctr_contents; } ;
typedef TYPE_2__ ctf_arinfo_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int *,int ,TYPE_2__*) ;
 scalar_t__ FUNC_3 (int *,int ,int *) ;
 scalar_t__ FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ) ;

int
FUNC_7(const dt_node_t *VAR_4)
{
 ctf_file_t *VAR_5 = VAR_4->dn_ctfp;
 ctf_encoding_t VAR_6;
 ctf_arinfo_t VAR_7;
 ctf_id_t VAR_8;
 uint_t VAR_9;

 FUNC_1(VAR_4->dn_flags & VAR_3);

 VAR_8 = FUNC_6(VAR_5, VAR_4->dn_type);
 VAR_9 = FUNC_4(VAR_5, VAR_8);

 if (VAR_9 == VAR_2 &&
     (VAR_8 = FUNC_5(VAR_5, VAR_8)) != VAR_0 &&
     (VAR_8 = FUNC_6(VAR_5, VAR_8)) != VAR_0 &&
     FUNC_3(VAR_5, VAR_8, &VAR_6) == 0 && FUNC_0(VAR_6))
  return (1);

 if (VAR_9 == VAR_1 && FUNC_2(VAR_5, VAR_8, &VAR_7) == 0 &&
     (VAR_8 = FUNC_6(VAR_5, VAR_7.ctr_contents)) != VAR_0 &&
     FUNC_3(VAR_5, VAR_8, &VAR_6) == 0 && FUNC_0(VAR_6))
  return (1);

 return (0);
}
