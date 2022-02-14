
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u_int ;
struct sshkey {TYPE_1__* cert; } ;
struct hostkeys {size_t num_entries; TYPE_2__* entries; } ;
struct TYPE_4__ {scalar_t__ marker; int key; } ;
struct TYPE_3__ {struct sshkey* signature_key; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct sshkey*,int ) ;
 int FUNC_1 (struct sshkey*) ;

__attribute__((used)) static int
FUNC_2(struct hostkeys *VAR_1, struct sshkey *VAR_2)
{
 int VAR_3 = FUNC_1(VAR_2);
 u_int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1->num_entries; VAR_4++) {
  if (VAR_1->entries[VAR_4].marker != VAR_0)
   continue;
  if (FUNC_0(VAR_2, VAR_1->entries[VAR_4].key))
   return -1;
  if (VAR_3 &&
      FUNC_0(VAR_2->cert->signature_key,
      VAR_1->entries[VAR_4].key))
   return -1;
 }
 return 0;
}
