
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;
struct rxrpc_sock {int dummy; } ;
struct msghdr {scalar_t__ msg_controllen; int msg_flags; } ;
struct cmsghdr {int cmsg_len; scalar_t__ cmsg_level; int cmsg_type; } ;
typedef enum rxrpc_command { ____Placeholder_rxrpc_command } rxrpc_command ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct cmsghdr*) ;
 struct cmsghdr* FUNC_2 (struct msghdr*) ;
 struct cmsghdr* FUNC_3 (struct msghdr*,struct cmsghdr*) ;
 int FUNC_4 (struct msghdr*,struct cmsghdr*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

 scalar_t__ VAR_6 ;
 int FUNC_5 (char*,unsigned long,...) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static int FUNC_7(struct rxrpc_sock *VAR_7, struct msghdr *VAR_8,
         unsigned long *VAR_9,
         enum rxrpc_command *VAR_10,
         u32 *VAR_11,
         bool VAR_12)
{
 struct cmsghdr *VAR_13;
 int VAR_14;

 *VAR_10 = VAR_5;

 if (VAR_8->msg_controllen == 0)
  return -VAR_0;

 for (VAR_13 = FUNC_2(VAR_8); VAR_13; VAR_13 = FUNC_3(VAR_8, VAR_13)) {
  if (!FUNC_4(VAR_8, VAR_13))
   return -VAR_0;

  VAR_14 = VAR_13->cmsg_len - FUNC_0(sizeof(struct cmsghdr));
  FUNC_5("CMSG %d, %d, %d",
         VAR_13->cmsg_level, VAR_13->cmsg_type, VAR_14);

  if (VAR_13->cmsg_level != VAR_6)
   continue;

  switch (VAR_13->cmsg_type) {
  case 128:
   if (VAR_8->msg_flags & VAR_2) {
    if (VAR_14 != sizeof(u32))
     return -VAR_0;
    *VAR_9 = *(u32 *) FUNC_1(VAR_13);
   } else {
    if (VAR_14 != sizeof(unsigned long))
     return -VAR_0;
    *VAR_9 = *(unsigned long *)
     FUNC_1(VAR_13);
   }
   FUNC_5("User Call ID %lx", *VAR_9);
   break;

  case 130:
   if (*VAR_10 != VAR_5)
    return -VAR_0;
   *VAR_10 = VAR_4;
   if (VAR_14 != sizeof(*VAR_11))
    return -VAR_0;
   *VAR_11 = *(unsigned int *) FUNC_1(VAR_13);
   FUNC_5("Abort %x", *VAR_11);
   if (*VAR_11 == 0)
    return -VAR_0;
   break;

  case 129:
   if (*VAR_10 != VAR_5)
    return -VAR_0;
   *VAR_10 = VAR_3;
   if (VAR_14 != 0)
    return -VAR_0;
   if (!VAR_12)
    return -VAR_1;
   break;

  default:
   return -VAR_0;
  }
 }

 FUNC_6(" = 0");
 return 0;
}
