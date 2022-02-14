
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_int ;
struct sshkey {int type; TYPE_1__* cert; } ;
struct hostkeys {size_t num_entries; struct hostkey_entry* entries; } ;
struct hostkey_entry {scalar_t__ marker; struct sshkey* key; } ;
struct TYPE_2__ {int signature_key; } ;
typedef scalar_t__ HostkeyMarker ;
typedef int HostStatus ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (struct hostkeys*,struct sshkey*) ;
 scalar_t__ FUNC_1 (struct sshkey*,struct sshkey*) ;
 scalar_t__ FUNC_2 (int ,struct sshkey*) ;
 int FUNC_3 (struct sshkey*) ;

__attribute__((used)) static HostStatus
FUNC_4(struct hostkeys *VAR_7,
    struct sshkey *VAR_8, int VAR_9, const struct hostkey_entry **VAR_10)
{
 u_int VAR_11;
 HostStatus VAR_12 = VAR_2;
 int VAR_13 = FUNC_3(VAR_8);
 HostkeyMarker VAR_14 = VAR_13 ? VAR_5 : VAR_6;

 if (VAR_10 != ((void*)0))
  *VAR_10 = ((void*)0);

 for (VAR_11 = 0; VAR_11 < VAR_7->num_entries; VAR_11++) {
  if (VAR_7->entries[VAR_11].marker != VAR_14)
   continue;
  if (VAR_8 == ((void*)0)) {
   if (VAR_7->entries[VAR_11].key->type != VAR_9)
    continue;
   VAR_12 = VAR_1;
   if (VAR_10 != ((void*)0))
    *VAR_10 = VAR_7->entries + VAR_11;
   VAR_8 = VAR_7->entries[VAR_11].key;
   break;
  }
  if (VAR_13) {
   if (FUNC_2(VAR_8->cert->signature_key,
       VAR_7->entries[VAR_11].key)) {

    VAR_12 = VAR_3;
    if (VAR_10 != ((void*)0))
     *VAR_10 = VAR_7->entries + VAR_11;
    break;
   }
  } else {
   if (FUNC_1(VAR_8, VAR_7->entries[VAR_11].key)) {
    VAR_12 = VAR_3;
    if (VAR_10 != ((void*)0))
     *VAR_10 = VAR_7->entries + VAR_11;
    break;
   }

   VAR_12 = VAR_0;
   if (VAR_10 != ((void*)0))
    *VAR_10 = VAR_7->entries + VAR_11;
  }
 }
 if (FUNC_0(VAR_7, VAR_8) != 0) {
  VAR_12 = VAR_4;
  if (VAR_10 != ((void*)0))
   *VAR_10 = ((void*)0);
 }
 return VAR_12;
}
