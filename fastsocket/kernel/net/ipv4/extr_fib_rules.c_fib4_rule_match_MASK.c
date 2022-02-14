
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct flowi {int fl4_dst; int fl4_src; scalar_t__ fl4_tos; } ;
struct fib_rule {int dummy; } ;
struct fib4_rule {int src; int srcmask; int dst; int dstmask; scalar_t__ tos; } ;
typedef int __be32 ;



__attribute__((used)) static int FUNC_0(struct fib_rule *VAR_0, struct flowi *VAR_1, int VAR_2)
{
 struct fib4_rule *VAR_3 = (struct fib4_rule *) VAR_0;
 __be32 VAR_4 = VAR_1->fl4_dst;
 __be32 VAR_5 = VAR_1->fl4_src;

 if (((VAR_5 ^ VAR_3->src) & VAR_3->srcmask) ||
     ((VAR_4 ^ VAR_3->dst) & VAR_3->dstmask))
  return 0;

 if (VAR_3->tos && (VAR_3->tos != VAR_1->fl4_tos))
  return 0;

 return 1;
}
