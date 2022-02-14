
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_rqst {int dummy; } ;
struct cmsghdr {int cmsg_level; } ;




 int FUNC_0 (struct svc_rqst*,struct cmsghdr*) ;
 int FUNC_1 (struct svc_rqst*,struct cmsghdr*) ;

__attribute__((used)) static int FUNC_2(struct svc_rqst *VAR_0,
        struct cmsghdr *VAR_1)
{
 switch (VAR_1->cmsg_level) {
 case 129:
  return FUNC_0(VAR_0, VAR_1);
 case 128:
  return FUNC_1(VAR_0, VAR_1);
 }

 return 0;
}
