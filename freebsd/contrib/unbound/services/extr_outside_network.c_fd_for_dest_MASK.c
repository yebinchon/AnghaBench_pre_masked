
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
typedef int to ;
struct sockaddr_storage {int dummy; } ;
struct sockaddr_in6 {void* sin6_port; } ;
struct sockaddr_in {void* sin_port; } ;
struct sockaddr {int dummy; } ;
struct port_if {scalar_t__ avail_total; int inuse; int* avail_ports; TYPE_1__** out; int addrlen; struct sockaddr_storage addr; } ;
struct outside_network {scalar_t__ num_ip6; scalar_t__ num_ip4; int rnd; struct port_if* ip4_ifs; struct port_if* ip6_ifs; } ;
typedef int socklen_t ;
typedef void* in_port_t ;
struct TYPE_2__ {int number; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct sockaddr_storage*,int ) ;
 int FUNC_1 (struct sockaddr_storage*,int ,char*,int) ;
 int FUNC_2 (int ,int ,struct sockaddr*,int ,int,int*,int*,int ,int ,int ,int *,int ,int,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (int ,char*,char*) ;

__attribute__((used)) static int
FUNC_7(struct outside_network* VAR_4, struct sockaddr_storage* VAR_5,
 socklen_t VAR_6)
{
 struct sockaddr_storage* VAR_7;
 socklen_t VAR_8;
 int VAR_9, VAR_10, VAR_11;
 struct port_if* VAR_12;


 for(VAR_10 = 0; VAR_10<1000; VAR_10++) {
  int VAR_13 = 0;
  int VAR_14 = 0;
  int VAR_15 = 0;
  int VAR_16 = 0;
  int VAR_17 = -1;


  if(FUNC_0(VAR_5, VAR_6)) {
   if(VAR_4->num_ip6 == 0) {
    char VAR_18[64];
    FUNC_1(VAR_5, VAR_6, VAR_18, sizeof(VAR_18));
    FUNC_6(VAR_3, "need ipv6 to send, but no ipv6 outgoing interfaces, for %s", VAR_18);
    return -1;
   }
   VAR_9 = FUNC_5(VAR_4->rnd, VAR_4->num_ip6);
   VAR_12 = &VAR_4->ip6_ifs[VAR_9];
  } else {
   if(VAR_4->num_ip4 == 0) {
    char VAR_19[64];
    FUNC_1(VAR_5, VAR_6, VAR_19, sizeof(VAR_19));
    FUNC_6(VAR_3, "need ipv4 to send, but no ipv4 outgoing interfaces, for %s", VAR_19);
    return -1;
   }
   VAR_9 = FUNC_5(VAR_4->rnd, VAR_4->num_ip4);
   VAR_12 = &VAR_4->ip4_ifs[VAR_9];
  }
  VAR_7 = &VAR_12->addr;
  VAR_8 = VAR_12->addrlen;
  VAR_11 = FUNC_5(VAR_4->rnd, VAR_12->avail_total);
  if(VAR_11 < VAR_12->inuse) {

   VAR_13 = VAR_12->out[VAR_11]->number;
  } else {

   VAR_13 = VAR_12->avail_ports[VAR_11 - VAR_12->inuse];
  }

  if(FUNC_0(VAR_5, VAR_6)) {
   struct sockaddr_in6 VAR_20 = *(struct sockaddr_in6*)VAR_7;
   VAR_20.sin6_port = (in_port_t)FUNC_3((uint16_t)VAR_13);
   VAR_17 = FUNC_2(VAR_1, VAR_2,
    (struct sockaddr*)&VAR_20, VAR_8, 1, &VAR_16, &VAR_15,
    0, 0, 0, ((void*)0), 0, VAR_14, 0);
  } else {
   struct sockaddr_in* VAR_21 = (struct sockaddr_in*)VAR_7;
   VAR_21->sin_port = (in_port_t)FUNC_3((uint16_t)VAR_13);
   VAR_17 = FUNC_2(VAR_0, VAR_2,
    (struct sockaddr*)VAR_7, VAR_8, 1, &VAR_16, &VAR_15,
    0, 0, 0, ((void*)0), 0, VAR_14, 0);
  }
  if(VAR_17 != -1) {
   return VAR_17;
  }
  if(!VAR_16) {
   return -1;
  }
 }

 FUNC_4("cannot send probe, ports are in use");
 return -1;
}
