
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct ifreq {int ifr_mtu; int ifr_reqcap; } ;
struct bxe_softc {int mtu; int ifp; int ifmedia; int state; } ;
typedef int if_t ;
typedef scalar_t__ caddr_t ;


 int FUNC_0 (struct bxe_softc*,int,char*,...) ;
 int FUNC_1 (struct bxe_softc*,char*,...) ;
 int FUNC_2 (struct bxe_softc*) ;
 int FUNC_3 (struct bxe_softc*) ;
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
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;







 int FUNC_4 (unsigned int volatile*,unsigned long) ;
 int FUNC_5 (struct bxe_softc*) ;
 int FUNC_6 (struct bxe_softc*) ;
 int FUNC_7 (struct bxe_softc*) ;
 int FUNC_8 (struct bxe_softc*) ;
 int FUNC_9 (int ,int,scalar_t__) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 struct bxe_softc* FUNC_14 (int ) ;
 int FUNC_15 (int ,int,int ) ;
 int FUNC_16 (int ,int) ;
 int FUNC_17 (int ,int) ;
 int FUNC_18 (int ,struct ifreq*,int *,int) ;

__attribute__((used)) static int
FUNC_19(if_t VAR_27,
          u_long VAR_28,
          caddr_t VAR_29)
{
    struct bxe_softc *VAR_30 = FUNC_14(VAR_27);
    struct ifreq *VAR_31 = (struct ifreq *)VAR_29;
    int VAR_32 = 0;
    int VAR_33 = 0;
    int VAR_34 = 0;

    int VAR_35 = (VAR_11 - VAR_10);
    int VAR_36 = (VAR_26 - VAR_12 - VAR_25);

    switch (VAR_28)
    {
    case 128:
        FUNC_0(VAR_30, VAR_7, "Received SIOCSIFMTU ioctl (mtu=%d)\n",
              VAR_31->ifr_mtu);

        if (VAR_30->mtu == VAR_31->ifr_mtu) {

            break;
        }

        if ((VAR_31->ifr_mtu < VAR_35) || (VAR_31->ifr_mtu > VAR_36)) {
            FUNC_1(VAR_30, "Unsupported MTU size %d (range is %d-%d)\n",
                  VAR_31->ifr_mtu, VAR_35, VAR_36);
            VAR_34 = VAR_9;
            break;
        }

        FUNC_4((volatile unsigned int *)&VAR_30->mtu,
                             (unsigned long)VAR_31->ifr_mtu);





 FUNC_16(VAR_27, VAR_31->ifr_mtu);
        VAR_33 = 1;
        break;

    case 130:

        FUNC_0(VAR_30, VAR_7, "Received SIOCSIFFLAGS ioctl\n");

 FUNC_2(VAR_30);

        if (FUNC_13(VAR_27) & VAR_24) {
            if (FUNC_12(VAR_27) & VAR_23) {

                FUNC_7(VAR_30);
            } else if(VAR_30->state != VAR_0) {
  FUNC_5(VAR_30);
            }
        } else {
            if (FUNC_12(VAR_27) & VAR_23) {
  FUNC_6(VAR_30);
  FUNC_8(VAR_30);
            }
        }
 FUNC_3(VAR_30);

        break;

    case 134:
    case 133:

        FUNC_0(VAR_30, VAR_7, "Received SIOCADDMULTI/SIOCDELMULTI ioctl\n");


        if (FUNC_12(VAR_27) & VAR_23) {

     FUNC_2(VAR_30);
            FUNC_7(VAR_30);
     FUNC_3(VAR_30);
        }

        break;

    case 131:

        VAR_32 = (VAR_31->ifr_reqcap ^ FUNC_11(VAR_27));

        FUNC_0(VAR_30, VAR_7, "Received SIOCSIFCAP ioctl (mask=0x%08x)\n",
              VAR_32);


        if (VAR_32 & VAR_13) {
     FUNC_17(VAR_27, VAR_13);
            FUNC_0(VAR_30, VAR_7, "Turning LRO %s\n",
                  (FUNC_11(VAR_27) & VAR_13) ? "ON" : "OFF");
            VAR_33 = 1;
        }


        if (VAR_32 & VAR_17) {
     FUNC_17(VAR_27, VAR_17);
            FUNC_0(VAR_30, VAR_7, "Turning TXCSUM %s\n",
                  (FUNC_11(VAR_27) & VAR_17) ? "ON" : "OFF");
            if (FUNC_11(VAR_27) & VAR_17) {
                FUNC_15(VAR_27, (VAR_1 |
                                    VAR_2 |
                                    VAR_5 |
                                    VAR_4 |
                                    VAR_3 |
                                    VAR_6), 0);
            } else {
  FUNC_10(VAR_27);
            }
        }


        if (VAR_32 & VAR_14) {
     FUNC_17(VAR_27, VAR_14);
            FUNC_0(VAR_30, VAR_7, "Turning RXCSUM %s\n",
                  (FUNC_11(VAR_27) & VAR_14) ? "ON" : "OFF");
            if (FUNC_11(VAR_27) & VAR_14) {
                FUNC_15(VAR_27, (VAR_1 |
                                    VAR_2 |
                                    VAR_5 |
                                    VAR_4 |
                                    VAR_3 |
                                    VAR_6), 0);
            } else {
  FUNC_10(VAR_27);
            }
        }


        if (VAR_32 & VAR_15) {
            FUNC_17(VAR_27, VAR_15);
            FUNC_0(VAR_30, VAR_7, "Turning TSO4 %s\n",
                  (FUNC_11(VAR_27) & VAR_15) ? "ON" : "OFF");
        }


        if (VAR_32 & VAR_16) {
     FUNC_17(VAR_27, VAR_16);
            FUNC_0(VAR_30, VAR_7, "Turning TSO6 %s\n",
                  (FUNC_11(VAR_27) & VAR_16) ? "ON" : "OFF");
        }


        if (VAR_32 & VAR_21) {

     FUNC_17(VAR_27, VAR_21);
            FUNC_0(VAR_30, VAR_7, "Turning VLAN_HWTSO %s\n",
                  (FUNC_11(VAR_27) & VAR_21) ? "ON" : "OFF");
        }


        if (VAR_32 & VAR_18) {

            FUNC_1(VAR_30, "Changing VLAN_HWCSUM is not supported!\n");
            VAR_34 = VAR_9;
        }


        if (VAR_32 & VAR_22) {

            FUNC_1(VAR_30, "Changing VLAN_MTU is not supported!\n");
            VAR_34 = VAR_9;
        }


        if (VAR_32 & VAR_20) {

            FUNC_1(VAR_30, "Changing VLAN_HWTAGGING is not supported!\n");
            VAR_34 = VAR_9;
        }


        if (VAR_32 & VAR_19) {

            FUNC_1(VAR_30, "Changing VLAN_HWFILTER is not supported!\n");
            VAR_34 = VAR_9;
        }





        break;

    case 129:
    case 132:

        FUNC_0(VAR_30, VAR_7,
              "Received SIOCSIFMEDIA/SIOCGIFMEDIA ioctl (cmd=%lu)\n",
              (VAR_28 & 0xff));
        VAR_34 = FUNC_18(VAR_27, VAR_31, &VAR_30->ifmedia, VAR_28);
        break;

    default:
        FUNC_0(VAR_30, VAR_7, "Received Unknown Ioctl (cmd=%lu)\n",
              (VAR_28 & 0xff));
        VAR_34 = FUNC_9(VAR_27, VAR_28, VAR_29);
        break;
    }

    if (VAR_33 && (FUNC_12(VAR_30->ifp) & VAR_23)) {
        FUNC_0(VAR_30, VAR_8 | VAR_7,
              "Re-initializing hardware from IOCTL change\n");
 FUNC_6(VAR_30);
 FUNC_2(VAR_30);
 FUNC_8(VAR_30);
 FUNC_5(VAR_30);
 FUNC_3(VAR_30);
    }

    return (VAR_34);
}
