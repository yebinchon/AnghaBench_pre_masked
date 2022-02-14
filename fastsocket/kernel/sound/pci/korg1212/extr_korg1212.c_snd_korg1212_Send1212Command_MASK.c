
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef int u16 ;
struct snd_korg1212 {size_t cardState; int cmdRetryCount; int mailbox3Ptr; int outDoorbellPtr; int mailbox0Ptr; int mailbox1Ptr; int mailbox2Ptr; } ;
typedef enum korg1212_dbcnst { ____Placeholder_korg1212_dbcnst } korg1212_dbcnst ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (char*,int,scalar_t__,int ) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_9 ;
 int FUNC_2 (int ) ;
 int * VAR_10 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int ) ;

__attribute__((used)) static int FUNC_5(struct snd_korg1212 *VAR_11,
     enum korg1212_dbcnst VAR_12,
     u32 VAR_13, u32 VAR_14,
     u32 VAR_15, u32 VAR_16)
{
        u32 VAR_17;
        u16 VAR_18;
 int VAR_19 = VAR_5;

        if (!VAR_11->outDoorbellPtr) {
  FUNC_1("K1212_DEBUG: CardUninitialized\n");
                return VAR_3;
 }

 FUNC_0("K1212_DEBUG: Card <- 0x%08x 0x%08x [%s]\n",
      VAR_12, VAR_13, VAR_10[VAR_11->cardState]);
        for (VAR_17 = 0; VAR_17 < VAR_9; VAR_17++) {
  FUNC_4(VAR_16, VAR_11->mailbox3Ptr);
                FUNC_4(VAR_15, VAR_11->mailbox2Ptr);
                FUNC_4(VAR_14, VAR_11->mailbox1Ptr);
                FUNC_4(VAR_13, VAR_11->mailbox0Ptr);
                FUNC_4(VAR_12, VAR_11->outDoorbellPtr);




                if ( VAR_12 == VAR_7 ||
                 VAR_12 == VAR_6 ||
                        VAR_12 == VAR_8 ) {
                        VAR_19 = VAR_5;
                        break;
                }






                FUNC_3(VAR_0);
                VAR_18 = FUNC_2(VAR_11->mailbox3Ptr);
                if (VAR_18 & VAR_1) {
                 if ((VAR_18 & VAR_2) == (VAR_12 & VAR_2)) {
    FUNC_1("K1212_DEBUG: Card <- Success\n");
                                VAR_19 = VAR_5;
    break;
                        }
                }
 }
        VAR_11->cmdRetryCount += VAR_17;

 if (VAR_17 >= VAR_9) {
  FUNC_1("K1212_DEBUG: Card <- NoAckFromCard\n");
         VAR_19 = VAR_4;
 }

 return VAR_19;
}
