
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct nfsv3_pathconf {int pc_casepreserving; int pc_caseinsensitive; int pc_chownrestricted; int pc_notrunc; int pc_namemax; int pc_linkmax; } ;
struct TYPE_6__ {scalar_t__ ndo_vflag; } ;
typedef TYPE_1__ netdissect_options ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct nfsv3_pathconf const) ;
 int * FUNC_3 (TYPE_1__*,int const*,scalar_t__) ;
 int * FUNC_4 (TYPE_1__*,int const*,int*) ;

__attribute__((used)) static int
FUNC_5(netdissect_options *VAR_0,
              const uint32_t *VAR_1)
{
 int VAR_2;
 const struct nfsv3_pathconf *VAR_3;

 if (!(VAR_1 = FUNC_4(VAR_0, VAR_1, &VAR_2)))
  return (0);
 if (VAR_0->ndo_vflag)
  FUNC_1((VAR_0, " POST:"));
 if (!(VAR_1 = FUNC_3(VAR_0, VAR_1, VAR_0->ndo_vflag)))
  return (0);
 if (VAR_2)
  return (1);

 VAR_3 = (const struct nfsv3_pathconf *)VAR_1;
 FUNC_2(*VAR_3);

 FUNC_1((VAR_0, " linkmax %u namemax %u %s %s %s %s",
        FUNC_0(&VAR_3->pc_linkmax),
        FUNC_0(&VAR_3->pc_namemax),
        FUNC_0(&VAR_3->pc_notrunc) ? "notrunc" : "",
        FUNC_0(&VAR_3->pc_chownrestricted) ? "chownres" : "",
        FUNC_0(&VAR_3->pc_caseinsensitive) ? "igncase" : "",
        FUNC_0(&VAR_3->pc_casepreserving) ? "keepcase" : ""));
 return (1);
trunc:
 return (0);
}
