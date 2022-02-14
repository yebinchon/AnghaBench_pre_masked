
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint_t ;
struct TYPE_4__ {int dn_flags; int dn_type; int * dn_ctfp; } ;
typedef TYPE_1__ dt_node_t ;
typedef int ctf_file_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (TYPE_1__ const*) ;

int
FUNC_4(const dt_node_t *VAR_3)
{
 ctf_file_t *VAR_4 = VAR_3->dn_ctfp;
 uint_t VAR_5;

 FUNC_0(VAR_3->dn_flags & VAR_2);

 if (FUNC_3(VAR_3))
  return (0);

 VAR_5 = FUNC_1(VAR_4, FUNC_2(VAR_4, VAR_3->dn_type));
 return (VAR_5 == VAR_1 || VAR_5 == VAR_0);
}
