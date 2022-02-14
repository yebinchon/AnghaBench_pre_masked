
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlmsghdr {scalar_t__ nlmsg_pid; int nlmsg_seq; scalar_t__ nlmsg_type; scalar_t__ nlmsg_len; } ;
struct nlmsgerr {int error; } ;
typedef scalar_t__ pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct nlmsghdr*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct nlmsghdr*,int) ;
 scalar_t__ FUNC_3 (struct nlmsghdr*,int) ;
 int FUNC_4 (int) ;
 int VAR_4 ;
 int FUNC_5 (void*) ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (int,int,int,void*,size_t,int*) ;
 void* FUNC_8 (void*,size_t) ;

__attribute__((used)) static int
FUNC_9(int VAR_5, int VAR_6, int VAR_7,
   struct nlmsghdr **VAR_8,
   int *VAR_9)
{
  struct nlmsghdr *VAR_10;
  size_t VAR_11 = 65536, VAR_12 = 0;
  void *VAR_13 = ((void*)0);
  int VAR_14 = 0, VAR_15;
  int VAR_16;
  pid_t VAR_17 = FUNC_6();
  for (;;){
    void *VAR_18 = FUNC_8(VAR_13, VAR_11);
    if (VAR_18 == ((void*)0) || VAR_11 < VAR_12) {
      VAR_14 = -1;
      break;
    }
    VAR_13 = VAR_18;
    VAR_14 = VAR_15 = FUNC_7(VAR_5, VAR_6, VAR_7, VAR_13, VAR_11, &VAR_16);
    if (VAR_15 < 0 || (VAR_16 & VAR_1)){
      VAR_12 = VAR_11;
      VAR_11 *= 2;
      continue;
    }
    if (VAR_15 == 0) break;
    VAR_10 = (struct nlmsghdr *)VAR_13;
    for (VAR_10 = (struct nlmsghdr *)VAR_13;
  FUNC_3(VAR_10, VAR_15);
  VAR_10 = (struct nlmsghdr *)FUNC_2(VAR_10, VAR_15)){
      if (VAR_10->nlmsg_pid != VAR_17 ||
   VAR_10->nlmsg_seq != VAR_7)
 continue;
      if (VAR_10->nlmsg_type == VAR_2){
 (*VAR_9)++;
 break;
      }
      if (VAR_10->nlmsg_type == VAR_3){
 struct nlmsgerr *VAR_19 = (struct nlmsgerr *)FUNC_0(VAR_10);
 VAR_14 = -1;
 if (VAR_10->nlmsg_len < FUNC_1(sizeof(struct nlmsgerr)))
   FUNC_4(VAR_0);
 else
   FUNC_4(-VAR_19->error);
 break;
      }
    }
    break;
  }
  if (VAR_14 < 0)
    if (VAR_13){
      int VAR_20 = VAR_4;
      FUNC_5(VAR_13);
      FUNC_4(VAR_20);
    }
  *VAR_8 = (struct nlmsghdr *)VAR_13;
  return VAR_14;
}
