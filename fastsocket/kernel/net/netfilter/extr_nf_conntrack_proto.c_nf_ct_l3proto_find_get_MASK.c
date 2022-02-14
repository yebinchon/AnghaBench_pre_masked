
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int16_t ;
struct nf_conntrack_l3proto {int me; } ;


 struct nf_conntrack_l3proto* FUNC_0 (int ) ;
 struct nf_conntrack_l3proto VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;

struct nf_conntrack_l3proto *
FUNC_4(u_int16_t VAR_1)
{
 struct nf_conntrack_l3proto *VAR_2;

 FUNC_1();
 VAR_2 = FUNC_0(VAR_1);
 if (!FUNC_3(VAR_2->me))
  VAR_2 = &VAR_0;
 FUNC_2();

 return VAR_2;
}
