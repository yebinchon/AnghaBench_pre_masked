
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;


 void* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,...) ;
 int VAR_2 ;
 int FUNC_1 (char*,...) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (void*,int ,int ) ;
 int FUNC_3 (scalar_t__,void*,int) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 void* FUNC_6 (void*) ;
 int FUNC_7 (void*) ;
 scalar_t__ FUNC_8 (int,void*,int*,int) ;
 scalar_t__ FUNC_9 (int,int,void*,int,int,int ) ;
 scalar_t__ FUNC_10 () ;
 int FUNC_11 (void*) ;
 int FUNC_12 (int ,char*,void*,scalar_t__) ;

__attribute__((used)) static int
FUNC_13(int VAR_10, void *VAR_11, void *VAR_12, int VAR_13, int VAR_14,
    int VAR_15, int VAR_16, int *VAR_17)
{
 uint32_t VAR_18;
 int VAR_19;
 int VAR_20, VAR_21;

 if (VAR_6 > 1) {
  FUNC_1(">>> sending: len %d pktsz %zu", VAR_14, FUNC_10() + VAR_14);
  FUNC_12(VAR_9, "send buf\n", VAR_11, FUNC_10() + VAR_14);
 }

 if (VAR_7) {
  FUNC_3(VAR_7, FUNC_6(VAR_11),
         VAR_8 < VAR_14 ? VAR_8 : VAR_14);
  VAR_7 = 0;
 }

 if (VAR_16 <= 0) {
  VAR_5 = VAR_0;
  *VAR_17 = VAR_0;
  FUNC_0("max_retries %d <= 0", VAR_16);
  return -1;
 }

 VAR_18 =
     (uint32_t) FUNC_2(FUNC_6(VAR_11), 0, VAR_4);

 for (VAR_19 = 0; VAR_19 < VAR_16; VAR_19++) {
  if (VAR_19)
   FUNC_0("retry %d (timeout %d ms)", VAR_19, VAR_15);

  VAR_20 = VAR_14;
  if (FUNC_9(VAR_10, VAR_13, VAR_11, VAR_20, VAR_15, 0) < 0) {
   FUNC_1("send failed; %s", FUNC_4(VAR_5));
   return -1;
  }



  do {
   VAR_20 = VAR_14;
   if (FUNC_8(VAR_10, VAR_12, &VAR_20, VAR_15) < 0) {
    FUNC_1("recv failed: %s", FUNC_4(VAR_5));
    return -1;
   }

   if (VAR_6 > 2)
    FUNC_5(FUNC_7(VAR_12));
   if (VAR_6 > 1) {
    FUNC_1("rcv buf:");
    FUNC_12(VAR_9, "rcv buf\n", FUNC_6(VAR_12),
          VAR_3);
   }
  } while ((uint32_t)
    FUNC_2(FUNC_6(VAR_12), 0,
      VAR_4) != VAR_18);

  VAR_21 = FUNC_11(VAR_12);
  if (!VAR_21)
   return VAR_20;
  if (VAR_21 == VAR_1)
   return VAR_20;
 }

 VAR_5 = VAR_21;
 *VAR_17 = VAR_2;
 FUNC_0("timeout after %d retries, %d ms", VAR_19, VAR_15 * VAR_19);
 return -1;
}
