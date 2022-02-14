
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct nfsd4_compoundres {int dummy; } ;
struct TYPE_3__ {int si_opaque; int si_generation; } ;
typedef TYPE_1__ stateid_t ;
typedef int stateid_opaque_t ;
typedef int __be32 ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int) ;

__attribute__((used)) static void
FUNC_4(struct nfsd4_compoundres *VAR_0, stateid_t *VAR_1)
{
 __be32 *VAR_2;

 FUNC_1(sizeof(stateid_t));
 FUNC_2(VAR_1->si_generation);
 FUNC_3(&VAR_1->si_opaque, sizeof(stateid_opaque_t));
 FUNC_0();
}
