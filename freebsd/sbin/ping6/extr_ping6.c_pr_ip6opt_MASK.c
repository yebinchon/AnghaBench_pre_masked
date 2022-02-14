
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int value4 ;
typedef int value2 ;
typedef int u_int8_t ;
typedef int u_int32_t ;
typedef int u_int16_t ;
struct ip6_hbh {int ip6h_len; int ip6h_nxt; } ;
typedef size_t socklen_t ;


 size_t FUNC_0 (int ) ;


 size_t FUNC_1 (void*,size_t,int*,int) ;
 int FUNC_2 (void*,size_t,int,int*,size_t*,void**) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*,int,...) ;
 int FUNC_6 (char*,unsigned int,unsigned int) ;

__attribute__((used)) static void
FUNC_7(void *VAR_0, size_t VAR_1)
{
 struct ip6_hbh *VAR_2;
 int VAR_3;
 u_int8_t VAR_4;
 socklen_t VAR_5, VAR_6;
 void *VAR_7;
 size_t VAR_8;
 u_int16_t VAR_9;
 u_int32_t VAR_10;

 VAR_2 = (struct ip6_hbh *)VAR_0;
 VAR_5 = (VAR_2->ip6h_len + 1) * 8;
 FUNC_5("nxt %u, len %u (%lu bytes)\n", VAR_2->ip6h_nxt,
     (unsigned int)VAR_2->ip6h_len, (unsigned long)VAR_5);





 if (VAR_1 < (VAR_5 + FUNC_0(0))) {
  VAR_5 = VAR_1 - FUNC_0(0);
  FUNC_6("options truncated, showing only %u (total=%u)",
      (unsigned int)(VAR_5 / 8 - 1),
      (unsigned int)(VAR_2->ip6h_len));
 }

 VAR_3 = 0;
 while (1) {
  VAR_3 = FUNC_2(VAR_0, VAR_5, VAR_3,
      &VAR_4, &VAR_6, &VAR_7);
  if (VAR_3 == -1)
   break;
  switch (VAR_4) {




  case 129:
   VAR_8 = 0;
   VAR_8 = FUNC_1(VAR_7, VAR_8,
       &VAR_10, sizeof(VAR_10));
   FUNC_5("    Jumbo Payload Opt: Length %u\n",
       (u_int32_t)FUNC_3(VAR_10));
   break;
  case 128:
   VAR_8 = 0;
   VAR_8 = FUNC_1(VAR_7, VAR_8,
         &VAR_9, sizeof(VAR_9));
   FUNC_5("    Router Alert Opt: Type %u\n",
       FUNC_4(VAR_9));
   break;
  default:
   FUNC_5("    Received Opt %u len %lu\n",
       VAR_4, (unsigned long)VAR_6);
   break;
  }
 }
 return;
}
