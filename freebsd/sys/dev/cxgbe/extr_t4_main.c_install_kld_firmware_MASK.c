
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct fw_hdr {int fw_ver; } ;
struct fw_h {int fw_ver; } ;
struct firmware {struct fw_h const* data; int datasize; } ;
struct adapter {int flags; int dev; int mbox; } ;
typedef int bundled_fw ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int const) ;
 int FUNC_1 (int const) ;
 int FUNC_2 (int const) ;
 int FUNC_3 (int const) ;
 int FUNC_4 (int) ;
 void* FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,int,...) ;
 int FUNC_7 (struct fw_h*,struct fw_h*) ;
 int FUNC_8 (struct adapter*,struct firmware const**,struct firmware const**) ;
 int FUNC_9 (struct fw_h*,struct fw_h const*,int) ;
 int VAR_4 ;
 int FUNC_10 (struct adapter*,int ,struct fw_h const*,int ,int ) ;
 int FUNC_11 (struct adapter*,struct firmware const*,struct firmware const*) ;

__attribute__((used)) static int
FUNC_12(struct adapter *VAR_5, struct fw_h *VAR_6,
    const struct fw_h *VAR_7, const char *VAR_8, int *VAR_9)
{
 const struct firmware *VAR_10, *VAR_11;
 const uint32_t VAR_12 = FUNC_5(VAR_6->fw_ver);
 uint32_t VAR_13, VAR_14;
 int VAR_15, VAR_16;
 struct fw_h VAR_17;
 bool VAR_18;

 VAR_10 = VAR_11 = ((void*)0);
 VAR_18 = 0;
 VAR_16 = VAR_4 < 0 ? -VAR_4 : VAR_4;

 FUNC_9(&VAR_17, VAR_7, sizeof(VAR_17));
 if (VAR_4 < 0) {
  VAR_15 = FUNC_8(VAR_5, &VAR_10, &VAR_11);
  if (VAR_15 != 0 || VAR_11 == ((void*)0)) {
   FUNC_6(VAR_5->dev,
       "failed to load firmware module: %d. cfg %p, fw %p;"
       " will use compiled-in firmware version for"
       "hw.cxgbe.fw_install checks.\n",
       VAR_15, VAR_10, VAR_11);
  } else {
   FUNC_9(&VAR_17, VAR_11->data, sizeof(VAR_17));
  }
  VAR_18 = 1;
 }
 VAR_13 = FUNC_5(VAR_17.fw_ver);

 if (VAR_8 != ((void*)0))
  goto install;

 if ((VAR_5->flags & VAR_3) == 0) {

  if (VAR_12 == 0xffffffff) {
   VAR_8 = "missing";
   goto install;
  }

  VAR_15 = 0;
  goto done;
 }

 if (!FUNC_7(VAR_6, &VAR_17)) {
  VAR_8 = "incompatible or unusable";
  goto install;
 }

 if (VAR_13 > VAR_12) {
  VAR_8 = "older than the version bundled with this driver";
  goto install;
 }

 if (VAR_16 == 2 && VAR_13 != VAR_12) {
  VAR_8 = "different than the version bundled with this driver";
  goto install;
 }


 VAR_15 = 0;
 goto done;

install:
 VAR_15 = 0;
 if ((*VAR_9)++)
  goto done;

 if (VAR_16 == 0) {
  FUNC_6(VAR_5->dev, "firmware on card (%u.%u.%u.%u) is %s, "
      "but the driver is prohibited from installing a firmware "
      "on the card.\n",
      FUNC_1(VAR_12), FUNC_3(VAR_12),
      FUNC_2(VAR_12), FUNC_0(VAR_12), VAR_8);

  goto done;
 }





 if (!VAR_18) {
  VAR_15 = FUNC_8(VAR_5, &VAR_10, &VAR_11);
  if (VAR_15 != 0 || VAR_11 == ((void*)0)) {
   FUNC_6(VAR_5->dev,
       "failed to load firmware module: %d. cfg %p, fw %p\n",
       VAR_15, VAR_10, VAR_11);

  }
 }
 if (VAR_11 == ((void*)0)) {
  FUNC_6(VAR_5->dev, "firmware on card (%u.%u.%u.%u) is %s, "
      "but the driver cannot take corrective action because it "
      "is unable to load the firmware module.\n",
      FUNC_1(VAR_12), FUNC_3(VAR_12),
      FUNC_2(VAR_12), FUNC_0(VAR_12), VAR_8);
  VAR_15 = VAR_5->flags & VAR_3 ? 0 : VAR_1;
  goto done;
 }
 VAR_14 = FUNC_5(((const struct fw_hdr *)VAR_11->data)->fw_ver);
 if (VAR_14 != VAR_13) {
  FUNC_4(VAR_4 > 0);
  FUNC_6(VAR_5->dev,
      "firmware in KLD (%u.%u.%u.%u) is not what the driver was "
      "expecting (%u.%u.%u.%u) and will not be used.\n",
      FUNC_1(VAR_14), FUNC_3(VAR_14),
      FUNC_2(VAR_14), FUNC_0(VAR_14),
      FUNC_1(VAR_13), FUNC_3(VAR_13),
      FUNC_2(VAR_13), FUNC_0(VAR_13));
  VAR_15 = VAR_5->flags & VAR_3 ? 0 : VAR_0;
  goto done;
 }

 FUNC_6(VAR_5->dev, "firmware on card (%u.%u.%u.%u) is %s, "
     "installing firmware %u.%u.%u.%u on card.\n",
     FUNC_1(VAR_12), FUNC_3(VAR_12),
     FUNC_2(VAR_12), FUNC_0(VAR_12), VAR_8,
     FUNC_1(VAR_13), FUNC_3(VAR_13),
     FUNC_2(VAR_13), FUNC_0(VAR_13));

 VAR_15 = -FUNC_10(VAR_5, VAR_5->mbox, VAR_11->data, VAR_11->datasize, 0);
 if (VAR_15 != 0) {
  FUNC_6(VAR_5->dev, "failed to install firmware: %d\n", VAR_15);
 } else {

  VAR_15 = VAR_2;
  FUNC_9(VAR_6, VAR_11->data, sizeof(*VAR_6));
 }
done:
 FUNC_11(VAR_5, VAR_10, VAR_11);

 return (VAR_15);
}
