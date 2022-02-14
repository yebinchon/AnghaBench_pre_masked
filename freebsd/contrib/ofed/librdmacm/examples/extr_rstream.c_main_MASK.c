
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int ai_flags; int ai_socktype; } ;
struct TYPE_3__ {int ai_flags; int ai_family; int ai_port_space; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_2__ VAR_8 ;
 void* FUNC_0 (void*) ;
 void* VAR_9 ;
 int VAR_10 ;
 void* VAR_11 ;
 int FUNC_1 (int) ;
 int VAR_12 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int,char**,char*) ;
 void* VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;
 void* VAR_16 ;
 int VAR_17 ;
 void* VAR_18 ;
 int FUNC_4 (char*,...) ;
 TYPE_1__ VAR_19 ;
 int FUNC_5 () ;
 int FUNC_6 (void*) ;
 int VAR_20 ;
 void* VAR_21 ;
 int VAR_22 ;
 int FUNC_7 (char*,void*,int) ;
 void* VAR_23 ;
 void* VAR_24 ;
 int VAR_25 ;

int FUNC_8(int VAR_26, char **VAR_27)
{
 int VAR_28, VAR_29;

 VAR_8.ai_socktype = VAR_6;
 VAR_19.ai_port_space = VAR_5;
 while ((VAR_28 = FUNC_3(VAR_26, VAR_27, "s:b:f:B:i:I:C:S:p:k:T:")) != -1) {
  switch (VAR_28) {
  case 's':
   VAR_11 = VAR_16;
   break;
  case 'b':
   VAR_21 = VAR_16;
   break;
  case 'f':
   if (!FUNC_7("ip", VAR_16, 2)) {
    VAR_8.ai_flags = VAR_1;
   } else if (!FUNC_7("gid", VAR_16, 3)) {
    VAR_19.ai_flags = VAR_4 | VAR_3;
    VAR_19.ai_family = VAR_0;
    VAR_25 = 1;
   } else {
    FUNC_2(VAR_22, "Warning: unknown address format\n");
   }
   break;
  case 'B':
   VAR_9 = FUNC_0(VAR_16);
   break;
  case 'i':
   VAR_13 = FUNC_0(VAR_16);
   break;
  case 'I':
   VAR_10 = 1;
   VAR_14 = FUNC_0(VAR_16);
   break;
  case 'C':
   VAR_10 = 1;
   VAR_23 = FUNC_0(VAR_16);
   break;
  case 'S':
   if (!FUNC_7("all", VAR_16, 3)) {
    VAR_20 = 1;
   } else {
    VAR_10 = 1;
    VAR_24 = FUNC_0(VAR_16);
   }
   break;
  case 'p':
   VAR_18 = VAR_16;
   break;
  case 'k':
   VAR_15 = FUNC_0(VAR_16);
   break;
  case 'T':
   if (!FUNC_6(VAR_16))
    break;

   VAR_7;
  default:
   FUNC_4("usage: %s\n", VAR_27[0]);
   FUNC_4("\t[-s server_address]\n");
   FUNC_4("\t[-b bind_address]\n");
   FUNC_4("\t[-f address_format]\n");
   FUNC_4("\t    name, ip, ipv6, or gid\n");
   FUNC_4("\t[-B buffer_size]\n");
   FUNC_4("\t[-i inline_size]\n");
   FUNC_4("\t[-I iterations]\n");
   FUNC_4("\t[-C transfer_count]\n");
   FUNC_4("\t[-S transfer_size or all]\n");
   FUNC_4("\t[-p port_number]\n");
   FUNC_4("\t[-k keepalive_time]\n");
   FUNC_4("\t[-T test_option]\n");
   FUNC_4("\t    s|sockets - use standard tcp/ip sockets\n");
   FUNC_4("\t    a|async - asynchronous operation (use poll)\n");
   FUNC_4("\t    b|blocking - use blocking calls\n");
   FUNC_4("\t    f|fork - fork server processing\n");
   FUNC_4("\t    n|nonblocking - use nonblocking calls\n");
   FUNC_4("\t    r|resolve - use rdma cm to resolve address\n");
   FUNC_4("\t    v|verify - verify data\n");
   FUNC_1(1);
  }
 }

 if (!(VAR_12 & VAR_2))
  VAR_17 = -1;

 VAR_29 = FUNC_5();
 return VAR_29;
}
