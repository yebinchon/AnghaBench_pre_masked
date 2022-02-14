
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lacp_peerinfo {int lip_key; int lip_systemid; } ;


 scalar_t__ FUNC_0 (int *,int *,int) ;

__attribute__((used)) static int
FUNC_1(const struct lacp_peerinfo *VAR_0,
    const struct lacp_peerinfo *VAR_1)
{
 if (FUNC_0(&VAR_0->lip_systemid, &VAR_1->lip_systemid,
     sizeof(VAR_0->lip_systemid))) {
  return (0);
 }

 if (FUNC_0(&VAR_0->lip_key, &VAR_1->lip_key, sizeof(VAR_0->lip_key))) {
  return (0);
 }

 return (1);
}
