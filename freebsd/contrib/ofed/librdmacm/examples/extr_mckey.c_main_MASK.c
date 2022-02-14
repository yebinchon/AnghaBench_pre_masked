
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr {int dummy; } ;
struct TYPE_2__ {int channel; void* connects_left; int dst_in; struct sockaddr* dst_addr; int src_in; struct sockaddr* src_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 () ;
 void* FUNC_1 (void*) ;
 void* VAR_2 ;
 int FUNC_2 () ;
 void* VAR_3 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,char**,char*) ;
 int VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 int FUNC_5 (char*) ;
 int VAR_8 ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 () ;
 int FUNC_8 (int ) ;
 int FUNC_9 () ;
 void* VAR_9 ;
 int FUNC_10 (void*,int *,int ) ;
 TYPE_1__ VAR_10 ;
 int VAR_11 ;

int FUNC_11(int VAR_12, char **VAR_13)
{
 int VAR_14, VAR_15;


 while ((VAR_14 = FUNC_4(VAR_12, VAR_13, "m:M:sb:c:C:S:p:")) != -1) {
  switch (VAR_14) {
  case 'm':
   VAR_3 = VAR_7;
   break;
  case 'M':
   VAR_11 = 1;
   VAR_3 = VAR_7;
   break;
  case 's':
   VAR_4 = 1;
   break;
  case 'b':
   VAR_9 = VAR_7;
   VAR_10.src_addr = (struct sockaddr *) &VAR_10.src_in;
   break;
  case 'c':
   VAR_2 = FUNC_1(VAR_7);
   break;
  case 'C':
   VAR_5 = FUNC_1(VAR_7);
   break;
  case 'S':
   VAR_6 = FUNC_1(VAR_7);
   break;
  case 'p':
   VAR_8 = FUNC_10(VAR_7, ((void*)0), 0);
   break;
  default:
   FUNC_6("usage: %s\n", VAR_13[0]);
   FUNC_6("\t-m multicast_address\n");
   FUNC_6("\t[-M unmapped_multicast_address]\n"
          "\t replaces -m and requires -b\n");
   FUNC_6("\t[-s(ender)]\n");
   FUNC_6("\t[-b bind_address]\n");
   FUNC_6("\t[-c connections]\n");
   FUNC_6("\t[-C message_count]\n");
   FUNC_6("\t[-S message_size]\n");
   FUNC_6("\t[-p port_space - %#x for UDP (default), "
          "%#x for IPOIB]\n", VAR_1, VAR_0);
   FUNC_3(1);
  }
 }

 if (VAR_11 && !VAR_9) {
  FUNC_6("unmapped multicast address requires binding "
   "to source address\n");
  FUNC_3(1);
 }

 VAR_10.dst_addr = (struct sockaddr *) &VAR_10.dst_in;
 VAR_10.connects_left = VAR_2;

 VAR_10.channel = FUNC_7();
 if (!VAR_10.channel) {
  FUNC_5("failed to create event channel");
  FUNC_3(1);
 }

 if (FUNC_0())
  FUNC_3(1);

 VAR_15 = FUNC_9();

 FUNC_6("test complete\n");
 FUNC_2();
 FUNC_8(VAR_10.channel);

 FUNC_6("return status %d\n", VAR_15);
 return VAR_15;
}
