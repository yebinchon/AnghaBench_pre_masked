
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct sii_raid_conf {int vendor_id; int version_major; int type; int version_minor; } ;
struct g_provider {int name; scalar_t__ sectorsize; scalar_t__ mediasize; } ;
struct g_consumer {struct g_provider* provider; } ;


 int FUNC_0 (int,char*,int ,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct sii_raid_conf*,int ) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (struct g_consumer*,scalar_t__,scalar_t__,int*) ;
 struct sii_raid_conf* FUNC_4 (int,int ,int ) ;
 int FUNC_5 (struct sii_raid_conf*,char*,int ) ;
 int FUNC_6 (int,scalar_t__) ;

__attribute__((used)) static struct sii_raid_conf *
FUNC_7(struct g_consumer *VAR_9)
{
 struct g_provider *VAR_10;
 struct sii_raid_conf *VAR_11;
 char *VAR_12;
 int VAR_13, VAR_14;
 uint16_t VAR_15, *VAR_16;

 VAR_10 = VAR_9->provider;


 VAR_12 = FUNC_3(VAR_9,
     VAR_10->mediasize - VAR_10->sectorsize, VAR_10->sectorsize, &VAR_13);
 if (VAR_12 == ((void*)0)) {
  FUNC_0(1, "Cannot read metadata from %s (error=%d).",
      VAR_10->name, VAR_13);
  return (((void*)0));
 }
 VAR_11 = (struct sii_raid_conf *)VAR_12;


 if (VAR_11->vendor_id != 0x1095) {
  FUNC_0(1, "SiI vendor ID check failed on %s (0x%04x)",
      VAR_10->name, VAR_11->vendor_id);
  FUNC_2(VAR_12);
  return (((void*)0));
 }


 if (VAR_11->version_major != 2) {
  FUNC_0(1, "SiI version check failed on %s (%d.%d)",
      VAR_10->name, VAR_11->version_major, VAR_11->version_minor);
  FUNC_2(VAR_12);
  return (((void*)0));
 }
 VAR_11 = FUNC_4(sizeof(*VAR_11), VAR_0, VAR_1);
 FUNC_5(VAR_11, VAR_12, FUNC_6(sizeof(*VAR_11), VAR_10->sectorsize));
 FUNC_2(VAR_12);


 for (VAR_15 = 0, VAR_16 = (uint16_t *)VAR_11, VAR_14 = 0; VAR_14 <= 159; VAR_14++)
  VAR_15 += *VAR_16++;
 if (VAR_15 != 0) {
  FUNC_0(1, "SiI checksum check failed on %s", VAR_10->name);
  FUNC_1(VAR_11, VAR_0);
  return (((void*)0));
 }


 if (VAR_11->type != VAR_4 && VAR_11->type != VAR_6 &&
     VAR_11->type != VAR_5 && VAR_11->type != VAR_8 &&
     VAR_11->type != VAR_7 && VAR_11->type != VAR_2 &&
     VAR_11->type != VAR_3) {
  FUNC_0(1, "SiI unknown RAID level on %s (0x%02x)",
      VAR_10->name, VAR_11->type);
  FUNC_1(VAR_11, VAR_0);
  return (((void*)0));
 }

 return (VAR_11);
}
