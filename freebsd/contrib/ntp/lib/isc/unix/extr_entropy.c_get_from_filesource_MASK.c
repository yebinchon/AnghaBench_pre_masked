
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ssize_t ;
typedef int isc_uint32_t ;
struct TYPE_5__ {int handle; } ;
struct TYPE_6__ {TYPE_1__ file; } ;
struct TYPE_7__ {scalar_t__ bad; TYPE_2__ sources; int * ent; } ;
typedef TYPE_3__ isc_entropysource_t ;
typedef int isc_entropy_t ;
typedef int buf ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,int) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,unsigned char*,int,int) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int,unsigned char*,int) ;

__attribute__((used)) static unsigned int
FUNC_4(isc_entropysource_t *VAR_4, isc_uint32_t VAR_5) {
 isc_entropy_t *VAR_6 = VAR_4->ent;
 unsigned char VAR_7[128];
 int VAR_8 = VAR_4->sources.file.handle;
 ssize_t VAR_9, VAR_10;
 unsigned int VAR_11;

 if (VAR_4->bad)
  return (0);

 VAR_5 = VAR_5 / 8 + (((VAR_5 & 0x07) > 0) ? 1 : 0);

 VAR_11 = 0;
 while (VAR_5 > 0) {
  VAR_10 = FUNC_0(VAR_5, sizeof(VAR_7));
  VAR_9 = FUNC_3(VAR_8, VAR_7, VAR_10);
  if (VAR_9 < 0) {
   if (VAR_3 == VAR_0 || VAR_3 == VAR_1)
    goto out;
   goto err;
  }
  if (VAR_9 == 0)
   goto err;

  FUNC_2(VAR_6, VAR_7, VAR_9, VAR_9 * 8);
  VAR_11 += VAR_9 * 8;
  VAR_5 -= VAR_9;
 }
 goto out;

 err:
 (void)FUNC_1(VAR_8);
 VAR_4->sources.file.handle = -1;
 VAR_4->bad = VAR_2;

 out:
 return (VAR_11);
}
