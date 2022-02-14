
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_fh {int fh_maxsize; } ;


 int FUNC_0 (struct svc_fh*,int ,int) ;

__attribute__((used)) static __inline__ struct svc_fh *
FUNC_1(struct svc_fh *VAR_0, int VAR_1)
{
 FUNC_0(VAR_0, 0, sizeof(*VAR_0));
 VAR_0->fh_maxsize = VAR_1;
 return VAR_0;
}
