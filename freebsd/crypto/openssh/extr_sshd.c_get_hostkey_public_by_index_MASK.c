
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct sshkey {int dummy; } ;
struct ssh {int dummy; } ;
struct TYPE_4__ {scalar_t__ num_host_key_files; } ;
struct TYPE_3__ {struct sshkey** host_pubkeys; } ;


 TYPE_2__ VAR_0 ;
 TYPE_1__ VAR_1 ;

struct sshkey *
FUNC_0(int VAR_2, struct ssh *VAR_3)
{
 if (VAR_2 < 0 || (u_int)VAR_2 >= VAR_0.num_host_key_files)
  return (((void*)0));
 return (VAR_1.host_pubkeys[VAR_2]);
}
