
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u_int ;
struct sshkey {int dummy; } ;
struct ssh {int dummy; } ;
struct TYPE_4__ {size_t num_host_key_files; } ;
struct TYPE_3__ {struct sshkey** host_pubkeys; struct sshkey** host_keys; struct sshkey** host_certificates; } ;


 TYPE_2__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 scalar_t__ FUNC_0 (struct sshkey*,struct sshkey*) ;
 scalar_t__ FUNC_1 (struct sshkey*) ;

int
FUNC_2(struct sshkey *VAR_2, int VAR_3, struct ssh *VAR_4)
{
 u_int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_0.num_host_key_files; VAR_5++) {
  if (FUNC_1(VAR_2)) {
   if (VAR_2 == VAR_1.host_certificates[VAR_5] ||
       (VAR_3 && VAR_1.host_certificates[VAR_5] &&
       FUNC_0(VAR_2,
       VAR_1.host_certificates[VAR_5])))
    return (VAR_5);
  } else {
   if (VAR_2 == VAR_1.host_keys[VAR_5] ||
       (VAR_3 && VAR_1.host_keys[VAR_5] &&
       FUNC_0(VAR_2, VAR_1.host_keys[VAR_5])))
    return (VAR_5);
   if (VAR_2 == VAR_1.host_pubkeys[VAR_5] ||
       (VAR_3 && VAR_1.host_pubkeys[VAR_5] &&
       FUNC_0(VAR_2, VAR_1.host_pubkeys[VAR_5])))
    return (VAR_5);
  }
 }
 return (-1);
}
