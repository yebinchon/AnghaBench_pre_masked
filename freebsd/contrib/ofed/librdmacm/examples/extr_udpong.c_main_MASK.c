
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (void*) ;
 void* VAR_2 ;
 int FUNC_1 () ;
 int VAR_3 ;
 void* VAR_4 ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (int,char**,char*) ;
 void* VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (void*) ;
 void* VAR_9 ;
 int FUNC_6 () ;
 void* VAR_10 ;
 int VAR_11 ;

int FUNC_7(int VAR_12, char **VAR_13)
{
 int VAR_14, VAR_15;

 while ((VAR_14 = FUNC_3(VAR_12, VAR_13, "s:b:B:C:S:p:T:")) != -1) {
  switch (VAR_14) {
  case 's':
   VAR_4 = VAR_6;
   break;
  case 'b':
   VAR_9 = VAR_6;
   break;
  case 'B':
   VAR_2 = FUNC_0(VAR_6);
   break;
  case 'C':
   VAR_3 = 1;
   VAR_10 = FUNC_0(VAR_6);
   break;
  case 'S':
   VAR_3 = 1;
   VAR_11 = FUNC_0(VAR_6);
   if (VAR_11 < VAR_0) {
    FUNC_4("size must be at least %d bytes\n",
           VAR_0);
    FUNC_2(1);
   }
   break;
  case 'p':
   VAR_8 = VAR_6;
   break;
  case 'T':
   if (!FUNC_5(VAR_6))
    break;

   VAR_1;
  default:
   FUNC_4("usage: %s\n", VAR_13[0]);
   FUNC_4("\t[-s server_address]\n");
   FUNC_4("\t[-b bind_address]\n");
   FUNC_4("\t[-B buffer_size]\n");
   FUNC_4("\t[-C transfer_count]\n");
   FUNC_4("\t[-S transfer_size]\n");
   FUNC_4("\t[-p port_number]\n");
   FUNC_4("\t[-T test_option]\n");
   FUNC_4("\t    s|sockets - use standard tcp/ip sockets\n");
   FUNC_4("\t    a|async - asynchronous operation (use poll)\n");
   FUNC_4("\t    b|blocking - use blocking calls\n");
   FUNC_4("\t    n|nonblocking - use nonblocking calls\n");
   FUNC_4("\t    e|echo - server echoes all messages\n");
   FUNC_2(1);
  }
 }

 if (VAR_5)
  VAR_7 = -1;

 VAR_15 = VAR_4 ? FUNC_1() : FUNC_6();
 return VAR_15;
}
