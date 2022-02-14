
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct sroute {int dummy; } ;
typedef struct sroute u_char ;
struct sockaddr {int dummy; } ;
struct rt_msghdr {scalar_t__ rtm_type; int rtm_flags; int rtm_addrs; int rtm_msglen; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sroute* FUNC_0 (int ,int *) ;
 struct sroute* FUNC_1 (int ,int *,struct sroute*) ;
 int FUNC_2 (int ,int *,struct sroute*) ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_3 (struct sroute*) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (int ,struct sroute*,struct sockaddr**) ;
 struct sroute* FUNC_6 (int ,int ,int ,size_t*) ;
 int FUNC_7 (struct rt_msghdr*,struct sockaddr*,struct sockaddr*,struct sockaddr*) ;
 int FUNC_8 (char*,...) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_9 (struct sroute*) ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;

int
FUNC_10(void)
{
 u_char *VAR_13, *VAR_14;
 size_t VAR_15;
 struct sroute *VAR_16, *VAR_17;
 struct rt_msghdr *VAR_18;
 struct sockaddr *VAR_19[VAR_5];

 if (VAR_9 != 0 && VAR_9 + VAR_2 > VAR_12)
  return (0);




 VAR_16 = FUNC_0(VAR_11, &VAR_11);
 while (VAR_16 != ((void*)0)) {
  VAR_17 = FUNC_1(VAR_11, &VAR_11, VAR_16);
  FUNC_2(VAR_11, &VAR_11, VAR_16);
  FUNC_3(VAR_16);
  VAR_16 = VAR_17;
 }
 VAR_10 = 0;

 if ((VAR_13 = FUNC_6(VAR_0, VAR_1, 0, &VAR_15)) == ((void*)0))
  return (-1);

 VAR_14 = VAR_13;
 for (VAR_14 = VAR_13; VAR_14 < VAR_13 + VAR_15; VAR_14 += VAR_18->rtm_msglen) {
  VAR_18 = (struct rt_msghdr *)(void *)VAR_14;
  if (VAR_18->rtm_type != VAR_8 ||
      !(VAR_18->rtm_flags & VAR_7))
   continue;
  FUNC_5(VAR_18->rtm_addrs, (u_char *)(VAR_18 + 1), VAR_19);


  FUNC_7(VAR_18, VAR_19[VAR_4], VAR_19[VAR_3],
      VAR_19[VAR_6]);
 }
 FUNC_3(VAR_13);
 VAR_9 = FUNC_4();

 return (0);
}
