
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ssize_t ;
typedef int isc_uint32_t ;
struct TYPE_6__ {int handle; } ;
struct TYPE_5__ {TYPE_2__ file; } ;
struct TYPE_7__ {scalar_t__ bad; TYPE_1__ sources; int * ent; } ;
typedef TYPE_3__ isc_entropysource_t ;
typedef int isc_entropy_t ;
typedef int buf ;
typedef int HCRYPTPROV ;


 int FUNC_0 (int ,int,unsigned char*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (int *,unsigned char*,int,int) ;

__attribute__((used)) static unsigned int
FUNC_4(isc_entropysource_t *VAR_1, isc_uint32_t VAR_2) {
 isc_entropy_t *VAR_3 = VAR_1->ent;
 unsigned char VAR_4[128];
 HCRYPTPROV VAR_5 = VAR_1->sources.file.handle;
 ssize_t VAR_6;
 unsigned int VAR_7;

 if (VAR_1->bad)
  return (0);

 VAR_2 = VAR_2 / 8 + (((VAR_2 & 0x07) > 0) ? 1 : 0);

 VAR_7 = 0;
 while (VAR_2 > 0) {
  VAR_6 = FUNC_2(VAR_2, sizeof(VAR_4));
  if (!FUNC_0(VAR_5, VAR_6, VAR_4)) {
   FUNC_1(VAR_5, 0);
   VAR_1->bad = VAR_0;
   goto out;
  }

  FUNC_3(VAR_3, VAR_4, VAR_6, VAR_6 * 8);
  VAR_7 += VAR_6 * 8;
  VAR_2 -= VAR_6;
 }

 out:
 return (VAR_7);
}
