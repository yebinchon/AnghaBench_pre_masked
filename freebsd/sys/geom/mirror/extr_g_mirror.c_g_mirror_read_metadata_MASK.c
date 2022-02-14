
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct g_provider {int name; scalar_t__ sectorsize; scalar_t__ mediasize; } ;
struct g_mirror_metadata {scalar_t__ md_version; int md_magic; } ;
struct g_consumer {struct g_provider* provider; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,int ,...) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct g_consumer*,int,int ,int ) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (struct g_consumer*,scalar_t__,scalar_t__,int*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int *,struct g_mirror_metadata*) ;
 scalar_t__ FUNC_8 (int ,int ) ;

int
FUNC_9(struct g_consumer *VAR_3, struct g_mirror_metadata *VAR_4)
{
 struct g_provider *VAR_5;
 u_char *VAR_6;
 int VAR_7;

 FUNC_4();

 VAR_7 = FUNC_1(VAR_3, 1, 0, 0);
 if (VAR_7 != 0)
  return (VAR_7);
 VAR_5 = VAR_3->provider;
 FUNC_6();

 VAR_6 = FUNC_3(VAR_3, VAR_5->mediasize - VAR_5->sectorsize, VAR_5->sectorsize,
     &VAR_7);
 FUNC_5();
 FUNC_1(VAR_3, -1, 0, 0);
 if (VAR_6 == ((void*)0)) {
  FUNC_0(1, "Cannot read metadata from %s (error=%d).",
      VAR_3->provider->name, VAR_7);
  return (VAR_7);
 }


 VAR_7 = FUNC_7(VAR_6, VAR_4);
 FUNC_2(VAR_6);
 if (FUNC_8(VAR_4->md_magic, VAR_1) != 0)
  return (VAR_0);
 if (VAR_4->md_version > VAR_2) {
  FUNC_0(0,
      "Kernel module is too old to handle metadata from %s.",
      VAR_3->provider->name);
  return (VAR_0);
 }
 if (VAR_7 != 0) {
  FUNC_0(1, "MD5 metadata hash mismatch for provider %s.",
      VAR_3->provider->name);
  return (VAR_7);
 }

 return (0);
}
