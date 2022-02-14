
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
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int *,int ,int *) ;
 scalar_t__ FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;

int
FUNC_5(const dt_node_t *VAR_4)
{
 ctf_file_t *VAR_5 = VAR_4->dn_ctfp;
 ctf_encoding_t VAR_6;
 ctf_id_t VAR_7;
 uint_t VAR_8;

 FUNC_1(VAR_4->dn_flags & VAR_3);

 VAR_7 = FUNC_4(VAR_5, VAR_4->dn_type);
 VAR_8 = FUNC_3(VAR_5, VAR_7);

 if (VAR_8 == VAR_1 &&
     FUNC_2(VAR_5, VAR_7, &VAR_6) == 0 && FUNC_0(VAR_6))
  return (0);

 return (VAR_8 == VAR_1 || VAR_8 == VAR_0 ||
     VAR_8 == VAR_2);
}
