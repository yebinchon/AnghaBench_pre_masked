
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt_msghdr {int rtm_msglen; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (size_t) ;
 int FUNC_4 (int*) ;
 int FUNC_5 (struct rt_msghdr*,int ) ;
 int FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int*,int ,char*,size_t*,int *,int ) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static void
FUNC_9(void)
{
 size_t VAR_7;
 int VAR_8[6];
 char *VAR_9, *VAR_10, *VAR_11, VAR_12 = 0;
 struct rt_msghdr *VAR_13;

retry2:
 VAR_8[0] = VAR_1;
 VAR_8[1] = VAR_5;
 VAR_8[2] = 0;
 VAR_8[3] = VAR_0;
 VAR_8[4] = VAR_4;
 VAR_8[5] = 0;
 if (FUNC_7(VAR_8, FUNC_4(VAR_8), ((void*)0), &VAR_7, ((void*)0), 0) < 0)
  FUNC_0(VAR_3, "route-sysctl-estimate");
 if ((VAR_9 = FUNC_3(VAR_7)) == ((void*)0))
  FUNC_1(VAR_3, "malloc failed");
 if (FUNC_7(VAR_8, FUNC_4(VAR_8), VAR_9, &VAR_7, ((void*)0), 0) < 0) {
  if (VAR_6 == VAR_2 && VAR_12++ < 10) {
   FUNC_8("Routing table grew, retrying");
   FUNC_6(1);
   FUNC_2(VAR_9);
   goto retry2;
  }
  FUNC_0(VAR_3, "actual retrieval of interface table");
 }
 VAR_10 = VAR_9 + VAR_7;
 for (VAR_11 = VAR_9; VAR_11 < VAR_10; VAR_11 += VAR_13->rtm_msglen) {
  VAR_13 = (struct rt_msghdr *)(void *)VAR_11;
  FUNC_5(VAR_13, VAR_13->rtm_msglen);
 }
 FUNC_2(VAR_9);
}
