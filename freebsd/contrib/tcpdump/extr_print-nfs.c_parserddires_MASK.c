
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_5__ {scalar_t__ ndo_qflag; } ;
typedef TYPE_1__ netdissect_options ;


 int FUNC_0 (scalar_t__ const*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (scalar_t__ const) ;
 scalar_t__* FUNC_3 (TYPE_1__*,scalar_t__ const*,int*) ;

__attribute__((used)) static int
FUNC_4(netdissect_options *VAR_0,
             const uint32_t *VAR_1)
{
 int VAR_2;

 VAR_1 = FUNC_3(VAR_0, VAR_1, &VAR_2);
 if (VAR_1 == ((void*)0))
  return (0);
 if (VAR_2)
  return (1);
 if (VAR_0->ndo_qflag)
  return (1);

 FUNC_2(VAR_1[2]);
 FUNC_1((VAR_0, " offset 0x%x size %d ",
        FUNC_0(&VAR_1[0]), FUNC_0(&VAR_1[1])));
 if (VAR_1[2] != 0)
  FUNC_1((VAR_0, " eof"));

 return (1);
trunc:
 return (0);
}
