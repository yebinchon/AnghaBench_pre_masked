
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct kerneldumpheader {char* magic; char* architecture; char* hostname; char* versionstring; char* panicstring; int parity; int compression; void* blocksize; void* dumpkeysize; void* dumptime; void* dumplength; void* dumpextent; void* architectureversion; void* version; } ;
struct dumperinfo {TYPE_1__* kdcomp; int blocksize; int kdcrypto; } ;
struct TYPE_4__ {char* pr_hostname; } ;
struct TYPE_3__ {int kdc_format; } ;


 int VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (struct kerneldumpheader*,int) ;
 void* FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (struct kerneldumpheader*) ;
 int FUNC_4 (int ) ;
 char* VAR_2 ;
 TYPE_2__ VAR_3 ;
 size_t FUNC_5 (char*,char*,int) ;
 int VAR_4 ;
 char* VAR_5 ;

void
FUNC_6(const struct dumperinfo *VAR_6, struct kerneldumpheader *VAR_7,
    char *VAR_8, uint32_t VAR_9, uint64_t VAR_10)
{
 size_t VAR_11;

 FUNC_0(VAR_7, sizeof(*VAR_7));
 FUNC_5(VAR_7->magic, VAR_8, sizeof(VAR_7->magic));
 FUNC_5(VAR_7->architecture, VAR_1, sizeof(VAR_7->architecture));
 VAR_7->version = FUNC_1(VAR_0);
 VAR_7->architectureversion = FUNC_1(VAR_9);
 VAR_7->dumplength = FUNC_2(VAR_10);
 VAR_7->dumpextent = VAR_7->dumplength;
 VAR_7->dumptime = FUNC_2(VAR_4);



 VAR_7->dumpkeysize = 0;

 VAR_7->blocksize = FUNC_1(VAR_6->blocksize);
 FUNC_5(VAR_7->hostname, VAR_3, sizeof(VAR_7->hostname));
 VAR_11 = sizeof(VAR_7->versionstring);
 if (FUNC_5(VAR_7->versionstring, VAR_5, VAR_11) >= VAR_11)
  VAR_7->versionstring[VAR_11 - 2] = '\n';
 if (VAR_2 != ((void*)0))
  FUNC_5(VAR_7->panicstring, VAR_2, sizeof(VAR_7->panicstring));
 if (VAR_6->kdcomp != ((void*)0))
  VAR_7->compression = VAR_6->kdcomp->kdc_format;
 VAR_7->parity = FUNC_3(VAR_7);
}
