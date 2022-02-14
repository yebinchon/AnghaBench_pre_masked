
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint_t ;
struct TYPE_3__ {int dn_flags; int dn_type; int * dn_ctfp; } ;
typedef TYPE_1__ dt_node_t ;
typedef int ctf_id_t ;
typedef int ctf_file_t ;
typedef int ctf_encoding_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int *,int ,int *) ;
 scalar_t__ FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;

int
FUNC_5(const dt_node_t *VAR_3)
{
 ctf_file_t *VAR_4 = VAR_3->dn_ctfp;
 ctf_encoding_t VAR_5;
 ctf_id_t VAR_6;
 uint_t VAR_7;

 FUNC_1(VAR_3->dn_flags & VAR_2);

 VAR_6 = FUNC_4(VAR_4, VAR_3->dn_type);
 VAR_7 = FUNC_3(VAR_4, VAR_6);

 if (VAR_7 == VAR_1 &&
     FUNC_2(VAR_4, VAR_6, &VAR_5) == 0 && FUNC_0(VAR_5))
  return (0);

 return (VAR_7 == VAR_1 || VAR_7 == VAR_0);
}
