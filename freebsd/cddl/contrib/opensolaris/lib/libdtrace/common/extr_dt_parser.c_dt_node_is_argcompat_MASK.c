
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int dn_flags; int dn_type; int * dn_ctfp; } ;
typedef TYPE_1__ dt_node_t ;
typedef int ctf_file_t ;





 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ,int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (TYPE_1__ const*) ;
 int FUNC_5 (TYPE_1__ const*,TYPE_1__ const*,int *,int *) ;
 scalar_t__ FUNC_6 (TYPE_1__ const*) ;
 scalar_t__ FUNC_7 (TYPE_1__ const*) ;
 scalar_t__ FUNC_8 (TYPE_1__ const*) ;
 scalar_t__ FUNC_9 (TYPE_1__ const*) ;

int
FUNC_10(const dt_node_t *VAR_1, const dt_node_t *VAR_2)
{
 ctf_file_t *VAR_3 = VAR_1->dn_ctfp;
 ctf_file_t *VAR_4 = VAR_2->dn_ctfp;

 FUNC_0(VAR_1->dn_flags & VAR_0);
 FUNC_0(VAR_2->dn_flags & VAR_0);

 if (FUNC_4(VAR_1) && FUNC_4(VAR_2))
  return (1);

 if (FUNC_7(VAR_1) && FUNC_7(VAR_2))
  return (1);

 if (FUNC_6(VAR_1) && FUNC_6(VAR_2))
  return (1);

 if (FUNC_8(VAR_1) && FUNC_8(VAR_2))
  return (1);

 if (FUNC_9(VAR_1) && FUNC_9(VAR_2))
  return (1);

 switch (FUNC_2(VAR_3, FUNC_3(VAR_3, VAR_1->dn_type))) {
 case 130:
 case 129:
 case 128:
  return (FUNC_1(VAR_3, VAR_1->dn_type, VAR_4, VAR_2->dn_type));
 default:
  return (FUNC_5(VAR_1, VAR_2, ((void*)0), ((void*)0)));
 }
}
