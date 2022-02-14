
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct nvidia_raid_conf {int config_size; int state; int type; int nvidia_id; } ;
struct g_provider {int sectorsize; int name; scalar_t__ mediasize; } ;
struct g_consumer {struct g_provider* provider; } ;


 int FUNC_0 (int,char*,int,...) ;
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
 int FUNC_1 (struct nvidia_raid_conf*,int ) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (struct g_consumer*,scalar_t__,int,int*) ;
 struct nvidia_raid_conf* FUNC_4 (int,int ,int ) ;
 int FUNC_5 (struct nvidia_raid_conf*,char*,int ) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ,int ,int ) ;

__attribute__((used)) static struct nvidia_raid_conf *
FUNC_9(struct g_consumer *VAR_14)
{
 struct g_provider *VAR_15;
 struct nvidia_raid_conf *VAR_16;
 char *VAR_17;
 int VAR_18, VAR_19;
 uint32_t VAR_20, *VAR_21;

 VAR_15 = VAR_14->provider;


 VAR_17 = FUNC_3(VAR_14,
     VAR_15->mediasize - 2 * VAR_15->sectorsize, VAR_15->sectorsize, &VAR_18);
 if (VAR_17 == ((void*)0)) {
  FUNC_0(1, "Cannot read metadata from %s (error=%d).",
      VAR_15->name, VAR_18);
  return (((void*)0));
 }
 VAR_16 = (struct nvidia_raid_conf *)VAR_17;


 if (FUNC_8(VAR_16->nvidia_id, VAR_2, FUNC_7(VAR_2))) {
  FUNC_0(1, "NVIDIA signature check failed on %s", VAR_15->name);
  FUNC_2(VAR_17);
  return (((void*)0));
 }
 if (VAR_16->config_size > 128 ||
     VAR_16->config_size < 30) {
  FUNC_0(1, "NVIDIA metadata size looks wrong: %d",
      VAR_16->config_size);
  FUNC_2(VAR_17);
  return (((void*)0));
 }
 VAR_16 = FUNC_4(sizeof(*VAR_16), VAR_0, VAR_1);
 FUNC_5(VAR_16, VAR_17, FUNC_6(sizeof(*VAR_16), VAR_15->sectorsize));
 FUNC_2(VAR_17);


 for (VAR_20 = 0, VAR_21 = (uint32_t *)VAR_16,
     VAR_19 = 0; VAR_19 < VAR_16->config_size; VAR_19++)
  VAR_20 += *VAR_21++;
 if (VAR_20 != 0) {
  FUNC_0(1, "NVIDIA checksum check failed on %s", VAR_15->name);
  FUNC_1(VAR_16, VAR_0);
  return (((void*)0));
 }


 if (VAR_16->state != VAR_3 && VAR_16->state != VAR_4 &&
     VAR_16->state != VAR_5 && VAR_16->state != VAR_6) {
  FUNC_0(1, "NVIDIA unknown state on %s (0x%02x)",
      VAR_15->name, VAR_16->state);
  FUNC_1(VAR_16, VAR_0);
  return (((void*)0));
 }


 if (VAR_16->type != VAR_8 && VAR_16->type != VAR_10 &&
     VAR_16->type != VAR_11 && VAR_16->type != VAR_12 &&
     VAR_16->type != VAR_13 &&
     VAR_16->type != VAR_9 && VAR_16->type != VAR_7) {
  FUNC_0(1, "NVIDIA unknown RAID level on %s (0x%02x)",
      VAR_15->name, VAR_16->type);
  FUNC_1(VAR_16, VAR_0);
  return (((void*)0));
 }

 return (VAR_16);
}
