
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sshkey {int dummy; } ;
struct TYPE_2__ {int fingerprint_hash; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 TYPE_1__ VAR_1 ;
 char* FUNC_1 (struct sshkey const*,int ,int ) ;
 int FUNC_2 (struct sshkey const*) ;
 int FUNC_3 (char**,char*,int ,char*) ;

__attribute__((used)) static char *
FUNC_4(const struct sshkey *VAR_2)
{
 char *VAR_3, *VAR_4 = FUNC_1(VAR_2,
     VAR_1.fingerprint_hash, VAR_0);

 FUNC_3(&VAR_3, "%s %s", FUNC_2(VAR_2), VAR_4);
 FUNC_0(VAR_4);
 return VAR_3;
}
