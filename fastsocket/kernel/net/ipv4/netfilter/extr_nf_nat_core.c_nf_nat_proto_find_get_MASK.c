
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
struct nf_nat_protocol {int me; } ;


 struct nf_nat_protocol* FUNC_0 (int ) ;
 struct nf_nat_protocol VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;

const struct nf_nat_protocol *
FUNC_4(u_int8_t VAR_1)
{
 const struct nf_nat_protocol *VAR_2;

 FUNC_1();
 VAR_2 = FUNC_0(VAR_1);
 if (!FUNC_3(VAR_2->me))
  VAR_2 = &VAR_0;
 FUNC_2();

 return VAR_2;
}
