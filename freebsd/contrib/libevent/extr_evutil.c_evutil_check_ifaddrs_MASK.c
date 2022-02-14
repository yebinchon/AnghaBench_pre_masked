
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct sockaddr {int dummy; } ;
struct ifaddrs {struct sockaddr* ifa_addr; struct ifaddrs* ifa_next; } ;
typedef scalar_t__ ULONG ;
struct TYPE_9__ {TYPE_2__* FirstUnicastAddress; struct TYPE_9__* Next; } ;
struct TYPE_7__ {struct sockaddr* lpSockaddr; } ;
struct TYPE_8__ {TYPE_1__ Address; struct TYPE_8__* Next; } ;
typedef TYPE_2__ IP_ADAPTER_UNICAST_ADDRESS ;
typedef TYPE_3__ IP_ADAPTER_ADDRESSES ;
typedef scalar_t__ HMODULE ;
typedef scalar_t__ (* GetAdaptersAddresses_fn_t ) (int ,int ,int *,TYPE_3__*,scalar_t__*) ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,char*) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct sockaddr*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct ifaddrs*) ;
 scalar_t__ FUNC_7 (struct ifaddrs**) ;
 int FUNC_8 (TYPE_3__*) ;
 TYPE_3__* FUNC_9 (scalar_t__) ;

__attribute__((used)) static int
FUNC_10(void)
{
 return -1;

}
