
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_cred {scalar_t__ cr_uid; } ;



__attribute__((used)) static int
FUNC_0(struct svc_cred *VAR_0, struct svc_cred *VAR_1)
{
 return VAR_0->cr_uid == VAR_1->cr_uid;
}
