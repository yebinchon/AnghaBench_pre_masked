
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct pf_addr {int dummy; } ;
typedef int sa_family_t ;
typedef int netdissect_options ;
typedef int buf ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int ,struct pf_addr*,char*,int) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void
FUNC_3(netdissect_options *VAR_0, struct pf_addr *VAR_1, uint16_t VAR_2,
    sa_family_t VAR_3, const char *VAR_4)
{
 char VAR_5[48];

 if (FUNC_1(VAR_3, VAR_1, VAR_5, sizeof(VAR_5)) == ((void*)0))
  FUNC_0((VAR_0, "?"));
 else
  FUNC_0((VAR_0, "%s", VAR_5));

 if (VAR_2)
  FUNC_0((VAR_0, ".%hu", FUNC_2(VAR_2)));
}
