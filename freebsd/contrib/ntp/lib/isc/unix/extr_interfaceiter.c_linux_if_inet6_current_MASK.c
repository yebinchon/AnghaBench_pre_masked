
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct in6_addr {unsigned char* s6_addr; } ;
typedef int isc_uint32_t ;
typedef scalar_t__ isc_result_t ;
struct TYPE_4__ {unsigned int ifindex; int name; int netmask; int address; int flags; int af; } ;
struct TYPE_5__ {scalar_t__ valid; TYPE_1__ current; int entry; int * proc; } ;
typedef TYPE_2__ isc_interfaceiter_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,int ,int ,int ,char*,...) ;
 int FUNC_1 (int *,struct in6_addr*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int ,char*,char*,unsigned int*,int*,int*,int*,char*) ;
 char const* FUNC_5 (char const*,char) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int ,char*,int) ;

__attribute__((used)) static isc_result_t
FUNC_8(isc_interfaceiter_t *VAR_11) {
 char VAR_12[33];
 char VAR_13[VAR_2+1];
 struct in6_addr VAR_14;
 unsigned int VAR_15;
 int VAR_16, VAR_17, VAR_18;
 int VAR_19;
 unsigned int VAR_20;

 if (VAR_11->valid != VAR_9)
  return (VAR_11->valid);
 if (VAR_11->proc == ((void*)0)) {
  FUNC_0(VAR_10, VAR_4,
         VAR_5, VAR_6,
         "/proc/net/if_inet6:iter->proc == NULL");
  return (VAR_7);
 }

 VAR_19 = FUNC_4(VAR_11->entry, "%32[a-f0-9] %x %x %x %x %16s\n",
       VAR_12, &VAR_15, &VAR_16, &VAR_17, &VAR_18, VAR_13);
 if (VAR_19 != 6) {
  FUNC_0(VAR_10, VAR_4,
         VAR_5, VAR_6,
         "/proc/net/if_inet6:sscanf() -> %d (expected 6)",
         VAR_19);
  return (VAR_7);
 }
 if (FUNC_6(VAR_12) != 32) {
  FUNC_0(VAR_10, VAR_4,
         VAR_5, VAR_6,
         "/proc/net/if_inet6:strlen(%s) != 32", VAR_12);
  return (VAR_7);
 }
 for (VAR_20 = 0; VAR_20 < 16; VAR_20++) {
  unsigned char VAR_21;
  static const char VAR_22[] = "0123456789abcdef";
  VAR_21 = ((FUNC_5(VAR_22, VAR_12[VAR_20 * 2]) - VAR_22) << 4) |
         (FUNC_5(VAR_22, VAR_12[VAR_20 * 2 + 1]) - VAR_22);
  VAR_14[VAR_20] = VAR_21;
 }
 VAR_11->current.af = VAR_0;
 VAR_11->current.flags = VAR_3;
 FUNC_1(&VAR_11->current.address, &VAR_14);
 VAR_11->current.ifindex = VAR_15;
 if (FUNC_2(&VAR_11->current.address)) {
  FUNC_3(&VAR_11->current.address,
        (isc_uint32_t)VAR_15);
 }
 for (VAR_20 = 0; VAR_20 < 16; VAR_20++) {
  if (VAR_16 > 8) {
   VAR_14[VAR_20] = 0xff;
   VAR_16 -= 8;
  } else {
   VAR_14[VAR_20] = (0xff << (8 - VAR_16)) & 0xff;
   VAR_16 = 0;
  }
 }
 FUNC_1(&VAR_11->current.netmask, &VAR_14);
 FUNC_7(VAR_11->current.name, VAR_13, sizeof(VAR_11->current.name));
 return (VAR_9);
}
