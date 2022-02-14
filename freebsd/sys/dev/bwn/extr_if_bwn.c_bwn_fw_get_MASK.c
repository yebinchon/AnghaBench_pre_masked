
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct firmware {int datasize; scalar_t__ data; } ;
struct bwn_softc {int sc_dev; } ;
struct TYPE_2__ {scalar_t__ type; } ;
struct bwn_mac {TYPE_1__ mac_phy; struct bwn_softc* mac_sc; } ;
struct bwn_fwhdr {int type; int ver; int size; } ;
struct bwn_fwfile {char const* filename; int type; struct firmware const* fw; } ;
typedef int namebuf ;
typedef enum bwn_fwtype { ____Placeholder_bwn_fwtype } bwn_fwtype ;



 int VAR_0 ;


 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct bwn_fwfile*) ;
 int FUNC_2 (int ,char*,char*) ;
 struct firmware* FUNC_3 (char*) ;
 int FUNC_4 (struct firmware const*,int ) ;
 int FUNC_5 (char*,int,char*,char*,char*,char const*) ;
 scalar_t__ FUNC_6 (char const*,char const*) ;

__attribute__((used)) static int
FUNC_7(struct bwn_mac *VAR_5, enum bwn_fwtype VAR_6,
    const char *VAR_7, struct bwn_fwfile *VAR_8)
{
 const struct bwn_fwhdr *VAR_9;
 struct bwn_softc *VAR_10 = VAR_5->mac_sc;
 const struct firmware *VAR_11;
 char VAR_12[64];

 if (VAR_7 == ((void*)0)) {
  FUNC_1(VAR_8);
  return (0);
 }
 if (VAR_8->filename != ((void*)0)) {
  if (VAR_8->type == VAR_6 && (FUNC_6(VAR_8->filename, VAR_7) == 0))
   return (0);
  FUNC_1(VAR_8);
 }

 FUNC_5(VAR_12, sizeof(VAR_12), "bwn%s_v4_%s%s",
     (VAR_6 == VAR_0) ? "-open" : "",
     (VAR_5->mac_phy.type == VAR_1) ? "lp_" : "", VAR_7);

 VAR_11 = FUNC_3(VAR_12);
 if (VAR_11 == ((void*)0)) {
  FUNC_2(VAR_10->sc_dev, "the fw file(%s) not found\n",
      VAR_12);
  return (VAR_2);
 }
 if (VAR_11->datasize < sizeof(struct bwn_fwhdr))
  goto fail;
 VAR_9 = (const struct bwn_fwhdr *)(VAR_11->data);
 switch (VAR_9->type) {
 case 128:
 case 129:
  if (FUNC_0(VAR_9->size) !=
      (VAR_11->datasize - sizeof(struct bwn_fwhdr)))
   goto fail;

 case 130:
  if (VAR_9->ver != 1)
   goto fail;
  break;
 default:
  goto fail;
 }
 VAR_8->filename = VAR_7;
 VAR_8->fw = VAR_11;
 VAR_8->type = VAR_6;
 return (0);
fail:
 FUNC_2(VAR_10->sc_dev, "the fw file(%s) format error\n", VAR_12);
 if (VAR_11 != ((void*)0))
  FUNC_4(VAR_11, VAR_4);
 return (VAR_3);
}
