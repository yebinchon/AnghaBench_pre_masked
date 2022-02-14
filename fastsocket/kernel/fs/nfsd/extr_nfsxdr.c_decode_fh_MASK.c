
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fh_size; int fh_base; } ;
struct svc_fh {TYPE_1__ fh_handle; } ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (struct svc_fh*,int) ;
 int FUNC_1 (int *,int *,int) ;

__attribute__((used)) static __be32 *
FUNC_2(__be32 *VAR_1, struct svc_fh *VAR_2)
{
 FUNC_0(VAR_2, VAR_0);
 FUNC_1(&VAR_2->fh_handle.fh_base, VAR_1, VAR_0);
 VAR_2->fh_handle.fh_size = VAR_0;



 return VAR_1 + (VAR_0 >> 2);
}
