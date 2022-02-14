
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint_t ;
struct TYPE_5__ {int dn_flags; int * dn_ctfp; int dn_type; } ;
typedef TYPE_1__ dt_node_t ;
typedef int ctf_id_t ;
typedef int ctf_file_t ;
struct TYPE_6__ {scalar_t__ cte_format; } ;
typedef TYPE_2__ ctf_encoding_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *,int ,TYPE_2__*) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;

int
FUNC_4(const dt_node_t *VAR_5)
{
 ctf_file_t *VAR_6 = VAR_5->dn_ctfp;
 ctf_encoding_t VAR_7;
 ctf_id_t VAR_8;
 uint_t VAR_9;

 FUNC_0(VAR_5->dn_flags & VAR_4);

 VAR_8 = FUNC_3(VAR_6, VAR_5->dn_type);
 VAR_9 = FUNC_2(VAR_6, VAR_8);

 return (VAR_9 == VAR_3 &&
     FUNC_1(VAR_5->dn_ctfp, VAR_8, &VAR_7) == 0 && (
     VAR_7.cte_format == VAR_2 || VAR_7.cte_format == VAR_0 ||
     VAR_7.cte_format == VAR_1));
}
