
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct eap_ssl_data {scalar_t__ state; int tmpbuf; int * tls_in; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 unsigned int FUNC_0 (int const*) ;
 scalar_t__ FUNC_1 (struct eap_ssl_data*,int const*,int) ;
 scalar_t__ FUNC_2 (struct eap_ssl_data*,int,unsigned int,int const*,int) ;
 int FUNC_3 (int ,char*,int const*,size_t) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (int *,int const*,int) ;

__attribute__((used)) static int FUNC_6(struct eap_ssl_data *VAR_8, u8 VAR_9,
         const u8 **VAR_10, size_t *VAR_11)
{
 unsigned int VAR_12 = 0;
 const u8 *VAR_13 = *VAR_10 + *VAR_11;

 FUNC_3(VAR_6, "SSL: Received data", *VAR_10, *VAR_11);

 if (VAR_9 & VAR_0) {
  if (*VAR_11 < 4) {
   FUNC_4(VAR_5, "SSL: Short frame with TLS "
       "length");
   return -1;
  }
  VAR_12 = FUNC_0(*VAR_10);
  FUNC_4(VAR_4, "SSL: TLS Message Length: %d",
      VAR_12);
  *VAR_10 += 4;
  *VAR_11 -= 4;

  if (*VAR_11 > VAR_12) {
   FUNC_4(VAR_5, "SSL: TLS Message Length (%d "
       "bytes) smaller than this fragment (%d "
       "bytes)", (int) VAR_12, (int) *VAR_11);
   return -1;
  }
 }

 FUNC_4(VAR_4, "SSL: Received packet: Flags 0x%x "
     "Message Length %u", VAR_9, VAR_12);

 if (VAR_8->state == VAR_7) {
  if (*VAR_11 != 0) {
   FUNC_4(VAR_4, "SSL: Unexpected payload in "
       "WAIT_FRAG_ACK state");
   return -1;
  }
  FUNC_4(VAR_4, "SSL: Fragment acknowledged");
  return 1;
 }

 if (VAR_8->tls_in &&
     FUNC_1(VAR_8, *VAR_10, VAR_13 - *VAR_10) < 0)
  return -1;

 if (VAR_9 & VAR_1) {
  if (FUNC_2(VAR_8, VAR_9, VAR_12,
          *VAR_10, VAR_13 - *VAR_10) < 0)
   return -1;

  VAR_8->state = VAR_2;
  return 1;
 }

 if (VAR_8->state == VAR_2) {
  FUNC_4(VAR_4, "SSL: All fragments received");
  VAR_8->state = VAR_3;
 }

 if (VAR_8->tls_in == ((void*)0)) {

  FUNC_5(&VAR_8->tmpbuf, *VAR_10, VAR_13 - *VAR_10);
  VAR_8->tls_in = &VAR_8->tmpbuf;
 }

 return 0;
}
