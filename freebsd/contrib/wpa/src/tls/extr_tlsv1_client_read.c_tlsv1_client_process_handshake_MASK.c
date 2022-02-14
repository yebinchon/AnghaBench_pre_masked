
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct tlsv1_client {int state; int verify; } ;



 int VAR_0 ;
 int VAR_1 ;







 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ const VAR_6 ;
 size_t FUNC_0 (scalar_t__ const*) ;
 int FUNC_1 (struct tlsv1_client*,int ,int ) ;
 int FUNC_2 (struct tlsv1_client*,scalar_t__,scalar_t__ const*,size_t*,scalar_t__**,size_t*) ;
 int FUNC_3 (struct tlsv1_client*,scalar_t__,scalar_t__ const*,size_t*) ;
 int FUNC_4 (struct tlsv1_client*,scalar_t__,scalar_t__ const*,size_t*) ;
 int FUNC_5 (struct tlsv1_client*,scalar_t__,scalar_t__ const*,size_t*) ;
 int FUNC_6 (struct tlsv1_client*,scalar_t__,scalar_t__ const*,size_t*) ;
 int FUNC_7 (struct tlsv1_client*,scalar_t__,scalar_t__ const*,size_t*) ;
 int FUNC_8 (struct tlsv1_client*,scalar_t__,scalar_t__ const*,size_t*) ;
 int FUNC_9 (struct tlsv1_client*,scalar_t__,scalar_t__ const*,size_t*) ;
 int FUNC_10 (int *,scalar_t__ const*,size_t) ;
 int FUNC_11 (int ,char*,...) ;

int FUNC_12(struct tlsv1_client *VAR_7, u8 VAR_8,
       const u8 *VAR_9, size_t *VAR_10,
       u8 **VAR_11, size_t *VAR_12)
{
 if (VAR_8 == VAR_4) {
  if (*VAR_10 < 2) {
   FUNC_11(VAR_1, "TLSv1: Alert underflow");
   FUNC_1(VAR_7, VAR_3,
      VAR_2);
   return -1;
  }
  FUNC_11(VAR_1, "TLSv1: Received alert %d:%d",
      VAR_9[0], VAR_9[1]);
  *VAR_10 = 2;
  VAR_7->state = VAR_0;
  return -1;
 }

 if (VAR_8 == VAR_5 && *VAR_10 >= 4 &&
     VAR_9[0] == VAR_6) {
  size_t VAR_13 = FUNC_0(VAR_9 + 1);
  if (VAR_13 > *VAR_10 - 4) {
   FUNC_11(VAR_1, "TLSv1: HelloRequest underflow");
   FUNC_1(VAR_7, VAR_3,
      VAR_2);
   return -1;
  }
  FUNC_11(VAR_1, "TLSv1: Ignored HelloRequest");
  *VAR_10 = 4 + VAR_13;
  return 0;
 }

 switch (VAR_7->state) {
 case 130:
  if (FUNC_7(VAR_7, VAR_8, VAR_9, VAR_10))
   return -1;
  break;
 case 134:
  if (FUNC_3(VAR_7, VAR_8, VAR_9, VAR_10))
   return -1;
  break;
 case 128:
  if (FUNC_9(VAR_7, VAR_8, VAR_9, VAR_10))
   return -1;
  break;
 case 133:
  if (FUNC_4(VAR_7, VAR_8, VAR_9, VAR_10))
   return -1;
  break;
 case 129:
  if (FUNC_8(VAR_7, VAR_8, VAR_9, VAR_10))
   return -1;
  break;
 case 132:
  if (FUNC_5(VAR_7, VAR_8, VAR_9, VAR_10))
   return -1;
  break;
 case 131:
  if (FUNC_6(VAR_7, VAR_8, VAR_9, VAR_10))
   return -1;
  break;
 case 135:
  if (VAR_11 &&
      FUNC_2(VAR_7, VAR_8, VAR_9, VAR_10, VAR_11,
       VAR_12))
   return -1;
  break;
 default:
  FUNC_11(VAR_1, "TLSv1: Unexpected state %d "
      "while processing received message",
      VAR_7->state);
  return -1;
 }

 if (VAR_8 == VAR_5)
  FUNC_10(&VAR_7->verify, VAR_9, *VAR_10);

 return 0;
}
