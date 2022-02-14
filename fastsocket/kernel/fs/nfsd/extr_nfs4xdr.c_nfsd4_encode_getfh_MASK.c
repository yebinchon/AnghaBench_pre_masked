
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int fh_size; int fh_base; } ;
struct svc_fh {TYPE_1__ fh_handle; } ;
struct nfsd4_compoundres {int dummy; } ;
typedef int __be32 ;


 int FUNC_0 () ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (int *,unsigned int) ;

__attribute__((used)) static __be32
FUNC_4(struct nfsd4_compoundres *VAR_0, __be32 VAR_1, struct svc_fh **VAR_2)
{
 struct svc_fh *VAR_3 = *VAR_2;
 unsigned int VAR_4;
 __be32 *VAR_5;

 if (!VAR_1) {
  VAR_4 = VAR_3->fh_handle.fh_size;
  FUNC_1(VAR_4 + 4);
  FUNC_2(VAR_4);
  FUNC_3(&VAR_3->fh_handle.fh_base, VAR_4);
  FUNC_0();
 }
 return VAR_1;
}
