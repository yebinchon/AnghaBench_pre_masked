
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pollfd {int fd; int events; scalar_t__ revents; } ;
struct nlmsghdr {int dummy; } ;
struct nlmsg_list {int size; int seq; struct nlmsg_list* nlm_next; struct nlmsghdr* nlh; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int FUNC_1 (struct nlmsghdr*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int,int,int,struct nlmsghdr**,int*) ;
 int FUNC_4 (int,int,int,int*) ;
 int FUNC_5 (struct pollfd*,int,int) ;
 scalar_t__ FUNC_6 (int *) ;

__attribute__((used)) static int
FUNC_7(int VAR_5, int VAR_6,
    int VAR_7,
    struct nlmsg_list **VAR_8,
    struct nlmsg_list **VAR_9)
{
  struct nlmsghdr *VAR_10 = ((void*)0);
  int VAR_11;
  int VAR_12 = 0;
  int VAR_13 = 3;

 try_again:
  VAR_11 = FUNC_4(VAR_5, VAR_7, VAR_1|VAR_0, &VAR_6);
  if (VAR_11 < 0)
    return VAR_11;
  if (VAR_6 == 0)
    VAR_6 = (int)FUNC_6(((void*)0));
  while(!VAR_12){
    struct pollfd VAR_14;

    VAR_14.fd = VAR_5;
    VAR_14.events = VAR_2 | VAR_3;
    VAR_14.revents = 0;
    VAR_11 = FUNC_5(&VAR_14, 1, 1000);
    if (VAR_11 < 0)
 return VAR_11;
    else if (VAR_11 == 0) {
 VAR_6++;
 if (VAR_13-- > 0)
     goto try_again;
 return -1;
    }

    VAR_11 = FUNC_3(VAR_5, VAR_7, VAR_6, &VAR_10, &VAR_12);
    if (VAR_11 < 0)
      return VAR_11;
    if (VAR_10){
      struct nlmsg_list *VAR_15 = (struct nlmsg_list *)FUNC_2(sizeof(struct nlmsg_list));
      if (VAR_15 == ((void*)0)){
 int VAR_16 = VAR_4;
 FUNC_1(VAR_10);
 FUNC_0(VAR_16);
 VAR_11 = -1;
      } else {
 VAR_15->nlm_next = ((void*)0);
 VAR_15->nlh = (struct nlmsghdr *)VAR_10;
 VAR_15->size = VAR_11;
 VAR_15->seq = VAR_6;
 if (*VAR_8 == ((void*)0)){
   *VAR_8 = VAR_15;
   *VAR_9 = VAR_15;
 } else {
   (*VAR_9)->nlm_next = VAR_15;
   *VAR_9 = VAR_15;
 }
      }
    }
  }
  return VAR_11 >= 0 ? VAR_6 : VAR_11;
}
