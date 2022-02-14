
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rds_sock {int dummy; } ;
struct rds_message {int dummy; } ;
struct msghdr {int dummy; } ;
struct cmsghdr {scalar_t__ cmsg_level; int cmsg_type; } ;


 struct cmsghdr* FUNC_0 (struct msghdr*) ;
 struct cmsghdr* FUNC_1 (struct msghdr*,struct cmsghdr*) ;
 int FUNC_2 (struct msghdr*,struct cmsghdr*) ;
 int VAR_0 ;







 scalar_t__ VAR_1 ;
 int FUNC_3 (struct rds_sock*,struct rds_message*,struct cmsghdr*) ;
 int FUNC_4 (struct rds_sock*,struct rds_message*,struct cmsghdr*) ;
 int FUNC_5 (struct rds_sock*,struct rds_message*,struct cmsghdr*) ;
 int FUNC_6 (struct rds_sock*,struct rds_message*,struct cmsghdr*) ;

__attribute__((used)) static int FUNC_7(struct rds_sock *VAR_2, struct rds_message *VAR_3,
    struct msghdr *VAR_4, int *VAR_5)
{
 struct cmsghdr *VAR_6;
 int VAR_7 = 0;

 for (VAR_6 = FUNC_0(VAR_4); VAR_6; VAR_6 = FUNC_1(VAR_4, VAR_6)) {
  if (!FUNC_2(VAR_4, VAR_6))
   return -VAR_0;

  if (VAR_6->cmsg_level != VAR_1)
   continue;




  switch (VAR_6->cmsg_type) {
  case 130:
   VAR_7 = FUNC_4(VAR_2, VAR_3, VAR_6);
   break;

  case 129:
   VAR_7 = FUNC_5(VAR_2, VAR_3, VAR_6);
   break;

  case 128:
   VAR_7 = FUNC_6(VAR_2, VAR_3, VAR_6);
   if (!VAR_7)
    *VAR_5 = 1;
   break;
  case 134:
  case 133:
  case 132:
  case 131:
   VAR_7 = FUNC_3(VAR_2, VAR_3, VAR_6);
   break;

  default:
   return -VAR_0;
  }

  if (VAR_7)
   break;
 }

 return VAR_7;
}
