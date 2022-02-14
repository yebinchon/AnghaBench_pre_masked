
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ s6_addr; } ;
struct sockaddr_in6 {TYPE_2__ sin6_addr; } ;
struct TYPE_3__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; } ;
struct sockaddr {scalar_t__ sa_family; } ;
typedef scalar_t__ ev_uint32_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (unsigned char const*,char const*,int) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(const struct sockaddr *VAR_4)
{
 const char VAR_5[] = "\x00\x00\x00\x00\x00\x00\x00\x00"
     "\x00\x00\x00\x00\x00\x00\x00\x00";

 if (VAR_4->sa_family == VAR_0) {
  const struct sockaddr_in *VAR_6 = (struct sockaddr_in *)VAR_4;
  ev_uint32_t VAR_7 = FUNC_4(VAR_6->sin_addr.s_addr);
  if (VAR_7 == 0 ||
      FUNC_1(VAR_7) ||
      FUNC_0(VAR_7)) {

  } else {
   FUNC_2(("Detected an IPv4 interface"));
   VAR_2 = 1;
  }
 } else if (VAR_4->sa_family == VAR_1) {
  const struct sockaddr_in6 *VAR_8 = (struct sockaddr_in6 *)VAR_4;
  const unsigned char *VAR_9 =
      (unsigned char*)VAR_8->sin6_addr.s6_addr;
  if (!FUNC_3(VAR_9, VAR_5, 8) ||
      ((VAR_9[0] & 0xfe) == 0xfc) ||
      (VAR_9[0] == 0xfe && (VAR_9[1] & 0xc0) == 0x80) ||
      (VAR_9[0] == 0xfe && (VAR_9[1] & 0xc0) == 0xc0) ||
      (VAR_9[0] == 0xff)) {


  } else {
   FUNC_2(("Detected an IPv6 interface"));
   VAR_3 = 1;
  }
 }
}
