
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nf_nat_protocol {size_t protonum; } ;


 int VAR_0 ;
 int VAR_1 ;
 int ** VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,struct nf_nat_protocol const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(const struct nf_nat_protocol *VAR_4)
{
 int VAR_5 = 0;

 FUNC_1(&VAR_1);
 if (VAR_2[VAR_4->protonum] != &VAR_3) {
  VAR_5 = -VAR_0;
  goto out;
 }
 FUNC_0(VAR_2[VAR_4->protonum], VAR_4);
 out:
 FUNC_2(&VAR_1);
 return VAR_5;
}
