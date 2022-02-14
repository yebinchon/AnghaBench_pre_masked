
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
typedef int ib_portid_t ;
struct TYPE_2__ {int counterselect; int symbolerrors; int linkrecovers; int linkdowned; int rcverrors; int rcvremotephyerrors; int rcvswrelayerrors; int xmtdiscards; int xmtconstrainterrors; int rcvconstrainterrors; int linkintegrityerrors; int excbufoverrunerrors; int qp1dropped; int vl15dropped; int xmtdata; int rcvdata; int xmtpkts; int rcvpkts; int xmtwait; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (char*,int,int ,int) ;
 int FUNC_1 (int ,int ,int*) ;
 int FUNC_2 (int ) ;
 int VAR_21 ;
 TYPE_1__ VAR_22 ;
 char* FUNC_3 (int *) ;
 int FUNC_4 (char*,char*,int,int,char*) ;

__attribute__((used)) static void FUNC_5(ib_portid_t * VAR_23,
       uint16_t VAR_24)
{
 char VAR_25[1024];
 uint32_t VAR_26 = VAR_0;


 FUNC_1(VAR_21, VAR_12, &VAR_26);
 FUNC_1(VAR_21, VAR_1, &VAR_22.counterselect);
 FUNC_1(VAR_21, VAR_8, &VAR_22.symbolerrors);
 FUNC_1(VAR_21, VAR_11, &VAR_22.linkrecovers);
 FUNC_1(VAR_21, VAR_10, &VAR_22.linkdowned);
 FUNC_1(VAR_21, VAR_6, &VAR_22.rcverrors);
 FUNC_1(VAR_21, VAR_4,
    &VAR_22.rcvremotephyerrors);
 FUNC_1(VAR_21, VAR_7,
    &VAR_22.rcvswrelayerrors);
 FUNC_1(VAR_21, VAR_18, &VAR_22.xmtdiscards);
 FUNC_1(VAR_21, VAR_9,
    &VAR_22.xmtconstrainterrors);
 FUNC_1(VAR_21, VAR_5,
    &VAR_22.rcvconstrainterrors);
 FUNC_1(VAR_21, VAR_3,
    &VAR_22.linkintegrityerrors);
 FUNC_1(VAR_21, VAR_2,
    &VAR_22.excbufoverrunerrors);



 FUNC_1(VAR_21, VAR_16, &VAR_22.vl15dropped);
 FUNC_1(VAR_21, VAR_17, &VAR_22.xmtdata);
 FUNC_1(VAR_21, VAR_14, &VAR_22.rcvdata);
 FUNC_1(VAR_21, VAR_19, &VAR_22.xmtpkts);
 FUNC_1(VAR_21, VAR_15, &VAR_22.rcvpkts);
 FUNC_1(VAR_21, VAR_20, &VAR_22.xmtwait);

 FUNC_0(VAR_25, sizeof VAR_25, VAR_21, sizeof VAR_21);

 FUNC_4("# Port counters: %s port %d (CapMask: 0x%02X)\n%s",
        FUNC_3(VAR_23), VAR_0, FUNC_2(VAR_24), VAR_25);
}
