
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
struct ifaddrs {char const* ifa_name; int ifa_flags; struct sockaddr* ifa_dstaddr; struct sockaddr* ifa_broadaddr; struct sockaddr* ifa_netmask; struct sockaddr* ifa_addr; struct ifaddrs* ifa_next; } ;
typedef int pcap_if_list_t ;
typedef int get_if_flags_func ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_0 (struct sockaddr*) ;
 scalar_t__ FUNC_1 (int *,char const*,int,int ,struct sockaddr*,size_t,struct sockaddr*,size_t,struct sockaddr*,size_t,struct sockaddr*,size_t,char*) ;
 int VAR_3 ;
 int FUNC_2 (struct ifaddrs*) ;
 scalar_t__ FUNC_3 (struct ifaddrs**) ;
 scalar_t__ FUNC_4 (unsigned char) ;
 int FUNC_5 (char*,int ,int ,char*) ;
 char* FUNC_6 (char const*,char) ;
 int FUNC_7 (char const*) ;

int
FUNC_8(pcap_if_list_t *VAR_4, char *VAR_5,
    int (*VAR_6)(const char *), get_if_flags_func VAR_7)
{
 struct ifaddrs *VAR_8, *VAR_9;
 struct sockaddr *VAR_10, *VAR_11, *VAR_12, *VAR_13;
 size_t VAR_14, VAR_15, VAR_16;
 int VAR_17 = 0;
 char *VAR_18, *VAR_19;
 if (FUNC_3(&VAR_8) != 0) {
  FUNC_5(VAR_5, VAR_2,
      VAR_3, "getifaddrs");
  return (-1);
 }
 for (VAR_9 = VAR_8; VAR_9 != ((void*)0); VAR_9 = VAR_9->ifa_next) {
  VAR_18 = FUNC_6(VAR_9->ifa_name, ':');
  if (VAR_18 != ((void*)0)) {



   VAR_19 = VAR_18 + 1;
   while (FUNC_4((unsigned char)*VAR_19))
    VAR_19++;
   if (*VAR_19 == '\0') {





          *VAR_18 = '\0';
   }
  }




  if (!(*VAR_6)(VAR_9->ifa_name)) {



   continue;
  }
  if (VAR_9->ifa_addr != ((void*)0)) {
   VAR_10 = VAR_9->ifa_addr;
   VAR_14 = FUNC_0(VAR_10);
   VAR_11 = VAR_9->ifa_netmask;
  } else {
   VAR_10 = ((void*)0);
   VAR_14 = 0;
   VAR_11 = ((void*)0);
  }
  if (VAR_9->ifa_flags & VAR_0 &&
      VAR_9->ifa_broadaddr != ((void*)0)) {
   VAR_12 = VAR_9->ifa_broadaddr;
   VAR_15 = FUNC_0(VAR_12);
  } else {
   VAR_12 = ((void*)0);
   VAR_15 = 0;
  }
  if (VAR_9->ifa_flags & VAR_1 &&
      VAR_9->ifa_dstaddr != ((void*)0)) {
   VAR_13 = VAR_9->ifa_dstaddr;
   VAR_16 = FUNC_0(VAR_9->ifa_dstaddr);
  } else {
   VAR_13 = ((void*)0);
   VAR_16 = 0;
  }




  if (FUNC_1(VAR_4, VAR_9->ifa_name, VAR_9->ifa_flags,
      VAR_7,
      VAR_10, VAR_14, VAR_11, VAR_14,
      VAR_12, VAR_15, VAR_13, VAR_16,
      VAR_5) < 0) {
   VAR_17 = -1;
   break;
  }
 }

 FUNC_2(VAR_8);

 return (VAR_17);
}
