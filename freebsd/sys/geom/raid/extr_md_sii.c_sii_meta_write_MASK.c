
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct sii_raid_conf {scalar_t__ checksum; } ;
struct g_provider {int sectorsize; int name; scalar_t__ mediasize; } ;
struct g_consumer {struct g_provider* provider; } ;


 int FUNC_0 (int,char*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (struct g_consumer*,scalar_t__,char*,int) ;
 char* FUNC_3 (int,int ,int) ;
 int FUNC_4 (char*,struct sii_raid_conf*,int) ;

__attribute__((used)) static int
FUNC_5(struct g_consumer *VAR_3, struct sii_raid_conf *VAR_4)
{
 struct g_provider *VAR_5;
 char *VAR_6;
 int VAR_7, VAR_8;
 uint16_t VAR_9, *VAR_10;

 VAR_5 = VAR_3->provider;


 VAR_4->checksum = 0;
 for (VAR_9 = 0, VAR_10 = (uint16_t *)VAR_4, VAR_8 = 0; VAR_8 < 159; VAR_8++)
  VAR_9 += *VAR_10++;
 VAR_4->checksum -= VAR_9;


 VAR_6 = FUNC_3(VAR_5->sectorsize, VAR_0, VAR_1 | VAR_2);
 FUNC_4(VAR_6, VAR_4, sizeof(*VAR_4));


 for (VAR_8 = 0; VAR_8 < 4; VAR_8++) {
  VAR_7 = FUNC_2(VAR_3,
      VAR_5->mediasize - (VAR_5->sectorsize * (1 + 0x200 * VAR_8)),
      VAR_6, VAR_5->sectorsize);
  if (VAR_7 != 0) {
   FUNC_0(1, "Cannot write metadata to %s (error=%d).",
       VAR_5->name, VAR_7);
   break;
  }
 }

 FUNC_1(VAR_6, VAR_0);
 return (VAR_7);
}
