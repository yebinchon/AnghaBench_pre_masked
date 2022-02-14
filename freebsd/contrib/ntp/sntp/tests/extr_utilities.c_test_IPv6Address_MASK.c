
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int member_0; int member_1; int member_2; int member_3; int member_4; int member_5; int member_6; int member_7; int member_8; int member_9; int member_10; int member_11; int member_12; int member_13; int member_14; int member_15; } ;
struct TYPE_9__ {TYPE_3__ member_0; } ;
struct in6_addr {TYPE_2__ member_0; } ;
struct addrinfo {int dummy; } ;
struct TYPE_8__ {struct in6_addr sin6_addr; int sin6_family; } ;
struct TYPE_11__ {TYPE_1__ sa6; } ;
typedef TYPE_4__ sockaddr_u ;
typedef int input ;


 int VAR_0 ;
 struct addrinfo FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (char const*,int ) ;
 int FUNC_2 (struct addrinfo*) ;
 int FUNC_3 (TYPE_4__*,int ,int) ;
 int FUNC_4 (TYPE_4__*) ;

void
FUNC_5(void) {
 const struct in6_addr VAR_1 = { { {
      0x20, 0x01, 0x0d, 0xb8,
      0x85, 0xa3, 0x08, 0xd3,
      0x13, 0x19, 0x8a, 0x2e,
      0x03, 0x70, 0x73, 0x34
     } } };
 const char * VAR_2 = "2001:db8:85a3:8d3:1319:8a2e:370:7334";
 sockaddr_u VAR_3;
 struct addrinfo VAR_4;

 FUNC_3(&VAR_3, 0, sizeof(VAR_3));
 VAR_3.sa6.sin6_family = VAR_0;
 VAR_3.sa6.sin6_addr = VAR_1;
 FUNC_1(VAR_2, FUNC_4(&VAR_3));

 VAR_4 = FUNC_0(&VAR_3);
 FUNC_1(VAR_2, FUNC_2(&VAR_4));
}
