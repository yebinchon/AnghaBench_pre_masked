
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_dl {scalar_t__ sdl_alen; scalar_t__ sdl_type; scalar_t__ sdl_nlen; } ;
struct ifaddrs {scalar_t__ ifa_addr; } ;
struct ether_addr {int dummy; } ;
typedef int ifconfig_handle_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (struct sockaddr_dl*) ;
 int VAR_4 ;
 int FUNC_1 (struct ether_addr*,char*) ;
 char* FUNC_2 (struct sockaddr_dl*) ;
 int FUNC_3 (char*,char*) ;

__attribute__((used)) static void
FUNC_4(ifconfig_handle_t *VAR_5, struct ifaddrs *VAR_6)
{
 char VAR_7[VAR_4];
 struct sockaddr_dl *VAR_8;
 int VAR_9;

 VAR_8 = (struct sockaddr_dl *)VAR_6->ifa_addr;
 if ((VAR_8 != ((void*)0)) && (VAR_8->sdl_alen > 0)) {
  if (((VAR_8->sdl_type == VAR_2) ||
      (VAR_8->sdl_type == VAR_3) ||
      (VAR_8->sdl_type == VAR_1)) &&
      (VAR_8->sdl_alen == VAR_0)) {
   FUNC_1((struct ether_addr *)FUNC_0(VAR_8),
       VAR_7);
   FUNC_3("\tether %s\n", VAR_7);
  } else {
   VAR_9 = VAR_8->sdl_nlen > 0 ? VAR_8->sdl_nlen + 1 : 0;

   FUNC_3("\tlladdr %s\n", FUNC_2(VAR_8) + VAR_9);
  }
 }
}
