
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct tlsv1_server {int test_flags; int test_failure_reported; int read_alerts; int rl; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (int *,scalar_t__ const*,int,scalar_t__*,size_t*,scalar_t__*) ;
 int FUNC_1 (struct tlsv1_server*,int ,scalar_t__) ;
 int FUNC_2 (struct tlsv1_server*,char*,...) ;
 int FUNC_3 (int ,char*) ;

int FUNC_4(struct tlsv1_server *VAR_11,
    const u8 *VAR_12, size_t VAR_13,
    u8 *VAR_14, size_t VAR_15)
{
 const u8 *VAR_16, *VAR_17;
 int VAR_18;
 u8 VAR_19, *VAR_20, *VAR_21, VAR_22;
 size_t VAR_23;

 VAR_17 = VAR_12;
 VAR_16 = VAR_12 + VAR_13;
 VAR_21 = VAR_14;
 VAR_20 = VAR_14 + VAR_15;

 while (VAR_17 < VAR_16) {
  VAR_22 = VAR_17[0];
  VAR_23 = VAR_20 - VAR_21;
  VAR_18 = FUNC_0(&VAR_11->rl, VAR_17, VAR_16 - VAR_17,
         VAR_21, &VAR_23, &VAR_19);
  if (VAR_18 < 0) {
   FUNC_2(VAR_11, "Record layer processing failed");
   FUNC_1(VAR_11, VAR_3, VAR_19);
   return -1;
  }
  if (VAR_18 == 0) {

   FUNC_3(VAR_0, "TLSv1: Partial processing not "
       "yet supported");
   FUNC_1(VAR_11, VAR_3, VAR_19);
   return -1;
  }

  if (VAR_22 == VAR_9) {
   if (VAR_23 < 2) {
    FUNC_2(VAR_11, "Alert underflow");
    FUNC_1(VAR_11, VAR_3,
         VAR_1);
    return -1;
   }
   FUNC_2(VAR_11, "Received alert %d:%d",
      VAR_21[0], VAR_21[1]);
   VAR_11->read_alerts++;
   if (VAR_21[0] == VAR_4) {

    VAR_17 += VAR_18;
    continue;
   }

   FUNC_1(VAR_11, VAR_3,
        VAR_21[1]);
   return -1;
  }

  if (VAR_22 != VAR_10) {
   FUNC_2(VAR_11, "Unexpected content type 0x%x",
      VAR_17[0]);
   FUNC_1(VAR_11, VAR_3,
        VAR_5);
   return -1;
  }
  VAR_21 += VAR_23;
  if (VAR_21 > VAR_20) {
   FUNC_3(VAR_0, "TLSv1: Buffer not large enough "
       "for processing the received record");
   FUNC_1(VAR_11, VAR_3,
        VAR_2);
   return -1;
  }

  VAR_17 += VAR_18;
 }

 return VAR_21 - VAR_14;
}
