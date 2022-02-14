
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int8_t ;
typedef size_t u_int16_t ;
struct nf_conntrack_l4proto {int dummy; } ;


 size_t VAR_0 ;
 struct nf_conntrack_l4proto VAR_1 ;
 int ** VAR_2 ;
 struct nf_conntrack_l4proto* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;

struct nf_conntrack_l4proto *
FUNC_2(u_int16_t VAR_3, u_int8_t VAR_4)
{
 if (FUNC_1(VAR_3 >= VAR_0 || VAR_2[VAR_3] == ((void*)0)))
  return &VAR_1;

 return FUNC_0(VAR_2[VAR_3][VAR_4]);
}
