
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct jmicron_raid_conf {int signature; } ;
struct g_provider {int name; scalar_t__ sectorsize; scalar_t__ mediasize; } ;
struct g_consumer {struct g_provider* provider; } ;


 int FUNC_0 (int,char*,int ,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct jmicron_raid_conf*,int ) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (struct g_consumer*,scalar_t__,scalar_t__,int*) ;
 struct jmicron_raid_conf* FUNC_4 (int,int ,int ) ;
 int FUNC_5 (struct jmicron_raid_conf*,char*,int ) ;
 int FUNC_6 (int,scalar_t__) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ,int ,int ) ;

__attribute__((used)) static struct jmicron_raid_conf *
FUNC_9(struct g_consumer *VAR_3)
{
 struct g_provider *VAR_4;
 struct jmicron_raid_conf *VAR_5;
 char *VAR_6;
 int VAR_7, VAR_8;
 uint16_t VAR_9, *VAR_10;

 VAR_4 = VAR_3->provider;


 VAR_6 = FUNC_3(VAR_3,
     VAR_4->mediasize - VAR_4->sectorsize, VAR_4->sectorsize, &VAR_7);
 if (VAR_6 == ((void*)0)) {
  FUNC_0(1, "Cannot read metadata from %s (error=%d).",
      VAR_4->name, VAR_7);
  return (((void*)0));
 }
 VAR_5 = (struct jmicron_raid_conf *)VAR_6;


 if (FUNC_8(VAR_5->signature, VAR_0, FUNC_7(VAR_0))) {
  FUNC_0(1, "JMicron signature check failed on %s", VAR_4->name);
  FUNC_2(VAR_6);
  return (((void*)0));
 }
 VAR_5 = FUNC_4(sizeof(*VAR_5), VAR_1, VAR_2);
 FUNC_5(VAR_5, VAR_6, FUNC_6(sizeof(*VAR_5), VAR_4->sectorsize));
 FUNC_2(VAR_6);


 for (VAR_9 = 0, VAR_10 = (uint16_t *)VAR_5, VAR_8 = 0; VAR_8 < 64; VAR_8++)
  VAR_9 += *VAR_10++;
 if (VAR_9 != 0) {
  FUNC_0(1, "JMicron checksum check failed on %s", VAR_4->name);
  FUNC_1(VAR_5, VAR_1);
  return (((void*)0));
 }

 return (VAR_5);
}
