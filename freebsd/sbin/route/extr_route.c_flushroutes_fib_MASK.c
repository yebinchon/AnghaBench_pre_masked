
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {scalar_t__ sa_family; } ;
struct rt_msghdr {int rtm_msglen; int rtm_flags; int rtm_seq; int rtm_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct sockaddr*) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_1 (int,char*) ;
 scalar_t__ VAR_12 ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (size_t) ;
 char* FUNC_5 (struct sockaddr*) ;
 int FUNC_6 (int*) ;
 int FUNC_7 (struct rt_msghdr*,int) ;
 int FUNC_8 (char*,...) ;
 scalar_t__ VAR_13 ;
 char* FUNC_9 (struct sockaddr*) ;
 int VAR_14 ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;
 scalar_t__ FUNC_12 (int*,int ,char*,size_t*,int *,int ) ;
 scalar_t__ VAR_15 ;
 int FUNC_13 (char*,...) ;
 int FUNC_14 (char*) ;
 int FUNC_15 (int ,char*,int) ;

__attribute__((used)) static int
FUNC_16(int VAR_16)
{
 struct rt_msghdr *VAR_17;
 size_t VAR_18;
 char *VAR_19, *VAR_20, *VAR_21;
 int VAR_22[7], VAR_23, VAR_24, VAR_25 = 0;
 int VAR_26;

 VAR_26 = FUNC_10(VAR_16);
 if (VAR_26) {
  FUNC_13("fib number %d is ignored", VAR_16);
  return (VAR_26);
 }

retry:
 VAR_22[0] = VAR_1;
 VAR_22[1] = VAR_6;
 VAR_22[2] = 0;
 VAR_22[3] = VAR_0;
 VAR_22[4] = VAR_5;
 VAR_22[5] = 0;
 VAR_22[6] = VAR_16;
 if (FUNC_12(VAR_22, FUNC_6(VAR_22), ((void*)0), &VAR_18, ((void*)0), 0) < 0)
  FUNC_1(VAR_4, "route-sysctl-estimate");
 if ((VAR_19 = FUNC_4(VAR_18)) == ((void*)0))
  FUNC_2(VAR_4, "malloc failed");
 if (FUNC_12(VAR_22, FUNC_6(VAR_22), VAR_19, &VAR_18, ((void*)0), 0) < 0) {
  if (VAR_12 == VAR_2 && VAR_25++ < 10) {
   FUNC_14("Routing table grew, retrying");
   FUNC_11(1);
   FUNC_3(VAR_19);
   goto retry;
  }
  FUNC_1(VAR_4, "route-sysctl-get");
 }
 VAR_21 = VAR_19 + VAR_18;
 if (VAR_15)
  (void)FUNC_8("Examining routing table from sysctl\n");
 VAR_24 = 0;
 for (VAR_20 = VAR_19; VAR_20 < VAR_21; VAR_20 += VAR_17->rtm_msglen) {
  VAR_17 = (struct rt_msghdr *)(void *)VAR_20;
  if (VAR_15)
   FUNC_7(VAR_17, VAR_17->rtm_msglen);
  if ((VAR_17->rtm_flags & VAR_7) == 0)
   continue;
  if (VAR_10 != 0) {
   struct sockaddr *VAR_27 = (struct sockaddr *)(VAR_17 + 1);

   if (VAR_27->sa_family != VAR_10)
    continue;
  }
  if (VAR_11)
   continue;
  VAR_17->rtm_type = VAR_9;
  VAR_17->rtm_seq = VAR_24;
  VAR_23 = FUNC_15(VAR_14, VAR_20, VAR_17->rtm_msglen);
  if (VAR_23 < 0 && VAR_12 == VAR_3)
   FUNC_1(1, "write to routing socket");
  if (VAR_23 < (int)VAR_17->rtm_msglen) {
   FUNC_13("write to routing socket");
   (void)FUNC_8("got only %d for rlen\n", VAR_23);
   FUNC_3(VAR_19);
   goto retry;
   break;
  }
  VAR_24++;
  if (VAR_13)
   continue;
  if (VAR_15)
   FUNC_7(VAR_17, VAR_23);
  else {
   struct sockaddr *VAR_28 = (struct sockaddr *)(VAR_17 + 1);

   FUNC_8("%-20.20s ", VAR_17->rtm_flags & VAR_8 ?
       FUNC_9(VAR_28) : FUNC_5(VAR_28));
   VAR_28 = (struct sockaddr *)(FUNC_0(VAR_28) + (char *)VAR_28);
   FUNC_8("%-20.20s ", FUNC_9(VAR_28));
   if (VAR_16 >= 0)
    FUNC_8("-fib %-3d ", VAR_16);
   FUNC_8("done\n");
  }
 }
 FUNC_3(VAR_19);
 return (VAR_26);
}
