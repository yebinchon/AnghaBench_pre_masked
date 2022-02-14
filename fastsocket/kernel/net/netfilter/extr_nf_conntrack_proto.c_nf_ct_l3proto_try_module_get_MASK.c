
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nf_conntrack_l3proto {int dummy; } ;


 int VAR_0 ;
 struct nf_conntrack_l3proto VAR_1 ;
 struct nf_conntrack_l3proto* FUNC_0 (unsigned short) ;
 int FUNC_1 (char*,unsigned short) ;

int
FUNC_2(unsigned short VAR_2)
{
 int VAR_3;
 struct nf_conntrack_l3proto *VAR_4;

retry: VAR_4 = FUNC_0(VAR_2);
 if (VAR_4 == &VAR_1) {
  VAR_3 = FUNC_1("nf_conntrack-%d", VAR_2);
  if (!VAR_3)
   goto retry;

  return -VAR_0;
 }

 return 0;
}
