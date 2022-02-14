
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct idrent {int noff; TYPE_1__* isoent; } ;
struct TYPE_2__ {int ext_off; scalar_t__ ext_len; scalar_t__ id_len; scalar_t__ identifier; } ;


 int FUNC_0 (unsigned char*,unsigned char*,scalar_t__) ;

__attribute__((used)) static void
FUNC_1(struct idrent *VAR_0, int VAR_1, int VAR_2)
{
 unsigned char *VAR_3;
 int VAR_4;

 VAR_4 = VAR_0->isoent->ext_off;
 if (VAR_0->noff + VAR_1 != VAR_4) {
  VAR_3 = (unsigned char *)VAR_0->isoent->identifier;

  FUNC_0(VAR_3 + VAR_0->noff + VAR_1, VAR_3 + VAR_4,
      VAR_0->isoent->ext_len + VAR_2);
  VAR_0->isoent->ext_off = VAR_4 = VAR_0->noff + VAR_1;
  VAR_0->isoent->id_len = VAR_4 + VAR_0->isoent->ext_len;
 }
}
