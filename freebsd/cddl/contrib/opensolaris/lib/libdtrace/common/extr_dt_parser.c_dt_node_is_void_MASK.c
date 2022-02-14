
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int dn_type; int * dn_ctfp; } ;
typedef TYPE_1__ dt_node_t ;
typedef int ctf_id_t ;
typedef int ctf_file_t ;
typedef int ctf_encoding_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *,int ,int *) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (TYPE_1__ const*) ;
 scalar_t__ FUNC_5 (TYPE_1__ const*) ;
 scalar_t__ FUNC_6 (TYPE_1__ const*) ;
 scalar_t__ FUNC_7 (TYPE_1__ const*) ;

int
FUNC_8(const dt_node_t *VAR_1)
{
 ctf_file_t *VAR_2 = VAR_1->dn_ctfp;
 ctf_encoding_t VAR_3;
 ctf_id_t VAR_4;

 if (FUNC_4(VAR_1))
  return (0);

 if (FUNC_5(VAR_1))
  return (0);

 if (FUNC_6(VAR_1) || FUNC_7(VAR_1))
  return (0);

 VAR_4 = FUNC_3(VAR_2, VAR_1->dn_type);

 return (FUNC_2(VAR_2, VAR_4) == VAR_0 &&
     FUNC_1(VAR_2, VAR_4, &VAR_3) == 0 && FUNC_0(VAR_3));
}
