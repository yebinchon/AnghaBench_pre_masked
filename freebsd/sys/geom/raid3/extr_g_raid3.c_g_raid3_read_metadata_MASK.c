
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct g_raid3_metadata {scalar_t__ md_version; scalar_t__ md_sectorsize; int md_magic; } ;
struct g_provider {int name; scalar_t__ sectorsize; scalar_t__ mediasize; } ;
struct g_consumer {struct g_provider* provider; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,...) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct g_consumer*,int,int ,int ) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (struct g_consumer*,scalar_t__,scalar_t__,int*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int *,struct g_raid3_metadata*) ;
 scalar_t__ FUNC_8 (int ,int ) ;

int
FUNC_9(struct g_consumer *VAR_4, struct g_raid3_metadata *VAR_5)
{
 struct g_provider *VAR_6;
 u_char *VAR_7;
 int VAR_8;

 FUNC_4();

 VAR_8 = FUNC_1(VAR_4, 1, 0, 0);
 if (VAR_8 != 0)
  return (VAR_8);
 VAR_6 = VAR_4->provider;
 FUNC_6();

 VAR_7 = FUNC_3(VAR_4, VAR_6->mediasize - VAR_6->sectorsize, VAR_6->sectorsize,
     &VAR_8);
 FUNC_5();
 FUNC_1(VAR_4, -1, 0, 0);
 if (VAR_7 == ((void*)0)) {
  FUNC_0(1, "Cannot read metadata from %s (error=%d).",
      VAR_4->provider->name, VAR_8);
  return (VAR_8);
 }


 VAR_8 = FUNC_7(VAR_7, VAR_5);
 FUNC_2(VAR_7);
 if (FUNC_8(VAR_5->md_magic, VAR_1) != 0)
  return (VAR_0);
 if (VAR_5->md_version > VAR_2) {
  FUNC_0(0,
      "Kernel module is too old to handle metadata from %s.",
      VAR_4->provider->name);
  return (VAR_0);
 }
 if (VAR_8 != 0) {
  FUNC_0(1, "MD5 metadata hash mismatch for provider %s.",
      VAR_4->provider->name);
  return (VAR_8);
 }
 if (VAR_5->md_sectorsize > VAR_3) {
  FUNC_0(0, "The blocksize is too big.");
  return (VAR_0);
 }

 return (0);
}
