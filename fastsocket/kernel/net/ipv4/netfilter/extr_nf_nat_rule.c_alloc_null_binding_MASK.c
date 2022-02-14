
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int member_0; } ;
struct TYPE_9__ {int member_0; } ;
struct nf_nat_range {TYPE_2__ member_4; TYPE_1__ member_3; int member_2; int member_1; int member_0; } ;
struct nf_conn {TYPE_8__* tuplehash; } ;
typedef int __be32 ;
struct TYPE_13__ {int ip; } ;
struct TYPE_14__ {TYPE_5__ u3; } ;
struct TYPE_11__ {int ip; } ;
struct TYPE_12__ {TYPE_3__ u3; } ;
struct TYPE_15__ {TYPE_6__ src; TYPE_4__ dst; } ;
struct TYPE_16__ {TYPE_7__ tuple; } ;


 scalar_t__ FUNC_0 (unsigned int) ;
 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_1 (struct nf_conn*,struct nf_nat_range*,scalar_t__) ;
 int FUNC_2 (char*,struct nf_conn*,int *) ;

unsigned int
FUNC_3(struct nf_conn *VAR_3, unsigned int VAR_4)
{




 __be32 VAR_5
  = (FUNC_0(VAR_4) == VAR_1
     ? VAR_3->tuplehash[VAR_0].tuple.dst.u3.ip
     : VAR_3->tuplehash[VAR_0].tuple.src.u3.ip);
 struct nf_nat_range VAR_6
  = { VAR_2, VAR_5, VAR_5, 0 , 0 };

 FUNC_2("Allocating NULL binding for %p (%pI4)\n", VAR_3, &VAR_5);
 return FUNC_1(VAR_3, &VAR_6, FUNC_0(VAR_4));
}
