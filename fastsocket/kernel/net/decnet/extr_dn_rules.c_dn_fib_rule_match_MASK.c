
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct flowi {int fld_dst; int fld_src; } ;
struct fib_rule {int dummy; } ;
struct dn_fib_rule {int src; int srcmask; int dst; int dstmask; } ;
typedef int __le16 ;



__attribute__((used)) static int FUNC_0(struct fib_rule *VAR_0, struct flowi *VAR_1, int VAR_2)
{
 struct dn_fib_rule *VAR_3 = (struct dn_fib_rule *)VAR_0;
 __le16 VAR_4 = VAR_1->fld_dst;
 __le16 VAR_5 = VAR_1->fld_src;

 if (((VAR_5 ^ VAR_3->src) & VAR_3->srcmask) ||
     ((VAR_4 ^ VAR_3->dst) & VAR_3->dstmask))
  return 0;

 return 1;
}
