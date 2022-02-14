
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct mwl_hal_priv {int mh_dev; scalar_t__ mh_cmdbuf; } ;
struct TYPE_2__ {int Result; int SeqNum; int Cmd; int MacId; int Length; } ;
typedef TYPE_1__ FWCmdHdr ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,int,int,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,...) ;

__attribute__((used)) static void
FUNC_4(struct mwl_hal_priv *VAR_1, int VAR_2)
{
 const FWCmdHdr *VAR_3 = (const FWCmdHdr *)VAR_1->mh_cmdbuf;
 const uint8_t *VAR_4;
 int VAR_5, VAR_6;

 VAR_5 = FUNC_1(VAR_3->Length);




 FUNC_0(VAR_1->mh_dev, "Cmd %s Length %d SeqNum %d",
     FUNC_2(FUNC_1(VAR_3->Cmd) &~ 0x8000), VAR_5, FUNC_1(VAR_3->SeqNum));

 if (VAR_2) {
  const char *VAR_7[] =
      { "OK", "ERROR", "NOT_SUPPORT", "PENDING", "BUSY",
        "PARTIAL_DATA" };
  int VAR_8 = FUNC_1(VAR_3->Result);

  if (VAR_8 <= VAR_0)
   FUNC_3(" Result %s", VAR_7[VAR_8]);
  else
   FUNC_3(" Result %d", VAR_8);
 }
 VAR_4 = (const uint8_t *)VAR_3;
 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
  if ((VAR_6 % 16) == 0)
   FUNC_3("\n%02x", VAR_4[VAR_6]);
  else
   FUNC_3(" %02x", VAR_4[VAR_6]);
 }
 FUNC_3("\n");
}
