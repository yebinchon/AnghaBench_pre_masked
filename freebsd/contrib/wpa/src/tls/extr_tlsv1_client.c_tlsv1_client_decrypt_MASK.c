
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct wpabuf {int dummy; } ;
struct tlsv1_client {struct wpabuf* partial_input; int rl; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct tlsv1_client*,int ,scalar_t__) ;
 int FUNC_1 (int *,scalar_t__ const*,int,scalar_t__*,size_t*,scalar_t__*) ;
 int FUNC_2 (int ,char*,...) ;
 struct wpabuf* FUNC_3 (scalar_t__ const*,int) ;
 int FUNC_4 (struct wpabuf*) ;
 scalar_t__* FUNC_5 (struct wpabuf*) ;
 size_t FUNC_6 (struct wpabuf*) ;
 scalar_t__* FUNC_7 (struct wpabuf*,size_t) ;
 int FUNC_8 (struct wpabuf*,scalar_t__ const*,size_t) ;
 scalar_t__ FUNC_9 (struct wpabuf**,int) ;
 size_t FUNC_10 (struct wpabuf*) ;

struct wpabuf * FUNC_11(struct tlsv1_client *VAR_8,
         const u8 *VAR_9, size_t VAR_10,
         int *VAR_11)
{
 const u8 *VAR_12, *VAR_13;
 int VAR_14;
 u8 VAR_15, *VAR_16, VAR_17;
 size_t VAR_18;
 struct wpabuf *VAR_19 = ((void*)0);

 if (VAR_11)
  *VAR_11 = 0;

 if (VAR_8->partial_input) {
  if (FUNC_9(&VAR_8->partial_input, VAR_10) < 0) {
   FUNC_2(VAR_0, "TLSv1: Failed to allocate "
       "memory for pending record");
   VAR_15 = VAR_2;
   goto fail;
  }
  FUNC_8(VAR_8->partial_input, VAR_9, VAR_10);
  VAR_9 = FUNC_5(VAR_8->partial_input);
  VAR_10 = FUNC_6(VAR_8->partial_input);
 }

 VAR_13 = VAR_9;
 VAR_12 = VAR_9 + VAR_10;

 while (VAR_13 < VAR_12) {
  VAR_17 = VAR_13[0];
  if (FUNC_9(&VAR_19, VAR_12 - VAR_13) < 0) {
   VAR_15 = VAR_2;
   goto fail;
  }
  VAR_16 = FUNC_7(VAR_19, 0);
  VAR_18 = FUNC_10(VAR_19);
  VAR_14 = FUNC_1(&VAR_8->rl, VAR_13, VAR_12 - VAR_13,
         VAR_16, &VAR_18, &VAR_15);
  if (VAR_14 < 0) {
   FUNC_2(VAR_0, "TLSv1: Record layer processing "
       "failed");
   goto fail;
  }
  if (VAR_14 == 0) {
   struct wpabuf *VAR_20;
   FUNC_2(VAR_0, "TLSv1: Need more data");
   VAR_20 = FUNC_3(VAR_13, VAR_12 - VAR_13);
   FUNC_4(VAR_8->partial_input);
   VAR_8->partial_input = VAR_20;
   if (VAR_8->partial_input == ((void*)0)) {
    FUNC_2(VAR_0, "TLSv1: Failed to "
        "allocate memory for pending "
        "record");
    VAR_15 = VAR_2;
    goto fail;
   }
   if (VAR_11)
    *VAR_11 = 1;
   return VAR_19;
  }

  if (VAR_17 == VAR_6) {
   if (VAR_18 < 2) {
    FUNC_2(VAR_0, "TLSv1: Alert "
        "underflow");
    VAR_15 = VAR_1;
    goto fail;
   }
   FUNC_2(VAR_0, "TLSv1: Received alert %d:%d",
       VAR_16[0], VAR_16[1]);
   if (VAR_16[0] == VAR_4) {

    VAR_13 += VAR_14;
    continue;
   }

   VAR_15 = VAR_16[1];
   goto fail;
  }

  if (VAR_17 != VAR_7) {
   FUNC_2(VAR_0, "TLSv1: Unexpected content type "
       "0x%x when decrypting application data",
       VAR_13[0]);
   VAR_15 = VAR_5;
   goto fail;
  }

  FUNC_7(VAR_19, VAR_18);

  VAR_13 += VAR_14;
 }

 FUNC_4(VAR_8->partial_input);
 VAR_8->partial_input = ((void*)0);
 return VAR_19;

fail:
 FUNC_4(VAR_19);
 FUNC_4(VAR_8->partial_input);
 VAR_8->partial_input = ((void*)0);
 FUNC_0(VAR_8, VAR_3, VAR_15);
 return ((void*)0);
}
