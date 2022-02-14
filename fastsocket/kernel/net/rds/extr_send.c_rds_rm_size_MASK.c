
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;
struct msghdr {int dummy; } ;
struct cmsghdr {scalar_t__ cmsg_level; int cmsg_type; } ;


 int FUNC_0 (struct cmsghdr*) ;
 struct cmsghdr* FUNC_1 (struct msghdr*) ;
 struct cmsghdr* FUNC_2 (struct msghdr*,struct cmsghdr*) ;
 int FUNC_3 (struct msghdr*,struct cmsghdr*) ;
 int VAR_0 ;
 int VAR_1 ;







 scalar_t__ VAR_2 ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct msghdr *VAR_3, int VAR_4)
{
 struct cmsghdr *VAR_5;
 int VAR_6 = 0;
 int VAR_7 = 0;
 int VAR_8;

 for (VAR_5 = FUNC_1(VAR_3); VAR_5; VAR_5 = FUNC_2(VAR_3, VAR_5)) {
  if (!FUNC_3(VAR_3, VAR_5))
   return -VAR_0;

  if (VAR_5->cmsg_level != VAR_2)
   continue;

  switch (VAR_5->cmsg_type) {
  case 130:
   VAR_7 |= 1;
   VAR_8 = FUNC_5(FUNC_0(VAR_5));
   if (VAR_8 < 0)
    return VAR_8;
   VAR_6 += VAR_8;

   break;

  case 129:
  case 128:
   VAR_7 |= 2;

   break;

  case 134:
  case 133:
  case 132:
  case 131:
   VAR_7 |= 1;
   VAR_6 += sizeof(struct scatterlist);
   break;

  default:
   return -VAR_0;
  }

 }

 VAR_6 += FUNC_4(VAR_4, VAR_1) * sizeof(struct scatterlist);


 if (VAR_7 == 3)
  return -VAR_0;

 return VAR_6;
}
