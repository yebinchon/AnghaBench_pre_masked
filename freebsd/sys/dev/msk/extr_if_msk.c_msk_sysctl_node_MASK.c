
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysctl_oid_list {int dummy; } ;
struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct msk_if_softc {int msk_if_dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct msk_if_softc*,struct sysctl_ctx_list*,char*,struct sysctl_oid_list*,int ,char*) ;
 int FUNC_1 (struct msk_if_softc*,struct sysctl_ctx_list*,char*,struct sysctl_oid_list*,int ,char*) ;
 int VAR_1 ;
 struct sysctl_oid* FUNC_2 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int ,int *,char*) ;
 struct sysctl_oid_list* FUNC_3 (struct sysctl_oid*) ;
 struct sysctl_ctx_list* FUNC_4 (int ) ;
 struct sysctl_oid* FUNC_5 (int ) ;
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
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;

__attribute__((used)) static void
FUNC_6(struct msk_if_softc *VAR_37)
{
 struct sysctl_ctx_list *VAR_38;
 struct sysctl_oid_list *VAR_39, *VAR_40;
 struct sysctl_oid *VAR_41;

 VAR_38 = FUNC_4(VAR_37->msk_if_dev);
 VAR_39 = FUNC_3(FUNC_5(VAR_37->msk_if_dev));

 VAR_41 = FUNC_2(VAR_38, VAR_39, VAR_1, "stats", VAR_0,
     ((void*)0), "MSK Statistics");
 VAR_40 = FUNC_3(VAR_41);
 VAR_41 = FUNC_2(VAR_38, VAR_40, VAR_1, "rx", VAR_0,
     ((void*)0), "MSK RX Statistics");
 VAR_39 = FUNC_3(VAR_41);
 FUNC_0(VAR_37, VAR_38, "ucast_frames",
     VAR_39, VAR_18, "Good unicast frames");
 FUNC_0(VAR_37, VAR_38, "bcast_frames",
     VAR_39, VAR_3, "Good broadcast frames");
 FUNC_0(VAR_37, VAR_38, "pause_frames",
     VAR_39, VAR_8, "Pause frames");
 FUNC_0(VAR_37, VAR_38, "mcast_frames",
     VAR_39, VAR_7, "Multicast frames");
 FUNC_0(VAR_37, VAR_38, "crc_errs",
     VAR_39, VAR_4, "CRC errors");
 FUNC_1(VAR_37, VAR_38, "good_octets",
     VAR_39, VAR_6, "Good octets");
 FUNC_1(VAR_37, VAR_38, "bad_octets",
     VAR_39, VAR_2, "Bad octets");
 FUNC_0(VAR_37, VAR_38, "frames_64",
     VAR_39, VAR_14, "64 bytes frames");
 FUNC_0(VAR_37, VAR_38, "frames_65_127",
     VAR_39, VAR_15, "65 to 127 bytes frames");
 FUNC_0(VAR_37, VAR_38, "frames_128_255",
     VAR_39, VAR_10, "128 to 255 bytes frames");
 FUNC_0(VAR_37, VAR_38, "frames_256_511",
     VAR_39, VAR_12, "256 to 511 bytes frames");
 FUNC_0(VAR_37, VAR_38, "frames_512_1023",
     VAR_39, VAR_13, "512 to 1023 bytes frames");
 FUNC_0(VAR_37, VAR_38, "frames_1024_1518",
     VAR_39, VAR_9, "1024 to 1518 bytes frames");
 FUNC_0(VAR_37, VAR_38, "frames_1519_max",
     VAR_39, VAR_11, "1519 to max frames");
 FUNC_0(VAR_37, VAR_38, "frames_too_long",
     VAR_39, VAR_17, "frames too long");
 FUNC_0(VAR_37, VAR_38, "jabbers",
     VAR_39, VAR_16, "Jabber errors");
 FUNC_0(VAR_37, VAR_38, "overflows",
     VAR_39, VAR_5, "FIFO overflows");

 VAR_41 = FUNC_2(VAR_38, VAR_40, VAR_1, "tx", VAR_0,
     ((void*)0), "MSK TX Statistics");
 VAR_39 = FUNC_3(VAR_41);
 FUNC_0(VAR_37, VAR_38, "ucast_frames",
     VAR_39, VAR_35, "Unicast frames");
 FUNC_0(VAR_37, VAR_38, "bcast_frames",
     VAR_39, VAR_19, "Broadcast frames");
 FUNC_0(VAR_37, VAR_38, "pause_frames",
     VAR_39, VAR_26, "Pause frames");
 FUNC_0(VAR_37, VAR_38, "mcast_frames",
     VAR_39, VAR_23, "Multicast frames");
 FUNC_1(VAR_37, VAR_38, "octets",
     VAR_39, VAR_25, "Octets");
 FUNC_0(VAR_37, VAR_38, "frames_64",
     VAR_39, VAR_32, "64 bytes frames");
 FUNC_0(VAR_37, VAR_38, "frames_65_127",
     VAR_39, VAR_33, "65 to 127 bytes frames");
 FUNC_0(VAR_37, VAR_38, "frames_128_255",
     VAR_39, VAR_28, "128 to 255 bytes frames");
 FUNC_0(VAR_37, VAR_38, "frames_256_511",
     VAR_39, VAR_30, "256 to 511 bytes frames");
 FUNC_0(VAR_37, VAR_38, "frames_512_1023",
     VAR_39, VAR_31, "512 to 1023 bytes frames");
 FUNC_0(VAR_37, VAR_38, "frames_1024_1518",
     VAR_39, VAR_27, "1024 to 1518 bytes frames");
 FUNC_0(VAR_37, VAR_38, "frames_1519_max",
     VAR_39, VAR_29, "1519 to max frames");
 FUNC_0(VAR_37, VAR_38, "colls",
     VAR_39, VAR_20, "Collisions");
 FUNC_0(VAR_37, VAR_38, "late_colls",
     VAR_39, VAR_22, "Late collisions");
 FUNC_0(VAR_37, VAR_38, "excess_colls",
     VAR_39, VAR_21, "Excessive collisions");
 FUNC_0(VAR_37, VAR_38, "multi_colls",
     VAR_39, VAR_24, "Multiple collisions");
 FUNC_0(VAR_37, VAR_38, "single_colls",
     VAR_39, VAR_34, "Single collisions");
 FUNC_0(VAR_37, VAR_38, "underflows",
     VAR_39, VAR_36, "FIFO underflows");
}
