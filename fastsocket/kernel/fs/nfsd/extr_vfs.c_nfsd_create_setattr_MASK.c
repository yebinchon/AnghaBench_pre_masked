
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct svc_rqst {int dummy; } ;
struct svc_fh {int dummy; } ;
struct iattr {int ia_valid; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (struct svc_rqst*,struct svc_fh*,struct iattr*,int ,int ) ;

__attribute__((used)) static __be32
FUNC_2(struct svc_rqst *VAR_3, struct svc_fh *VAR_4,
   struct iattr *VAR_5)
{



 VAR_5->ia_valid &= ~VAR_1;





 if (FUNC_0() != 0)
  VAR_5->ia_valid &= ~(VAR_2|VAR_0);
 if (VAR_5->ia_valid)
  return FUNC_1(VAR_3, VAR_4, VAR_5, 0, (time_t)0);
 return 0;
}
