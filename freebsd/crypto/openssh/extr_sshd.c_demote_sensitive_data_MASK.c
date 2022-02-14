
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u_int ;
struct sshkey {int dummy; } ;
struct TYPE_4__ {size_t num_host_key_files; } ;
struct TYPE_3__ {struct sshkey** host_keys; } ;


 int FUNC_0 (char*,int ,int ) ;
 TYPE_2__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct sshkey*) ;
 int FUNC_3 (struct sshkey*,struct sshkey**) ;
 int FUNC_4 (struct sshkey*) ;

void
FUNC_5(void)
{
 struct sshkey *VAR_2;
 u_int VAR_3;
 int VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_0.num_host_key_files; VAR_3++) {
  if (VAR_1.host_keys[VAR_3]) {
   if ((VAR_4 = FUNC_3(
       VAR_1.host_keys[VAR_3], &VAR_2)) != 0)
    FUNC_0("could not demote host %s key: %s",
        FUNC_4(VAR_1.host_keys[VAR_3]),
        FUNC_1(VAR_4));
   FUNC_2(VAR_1.host_keys[VAR_3]);
   VAR_1.host_keys[VAR_3] = VAR_2;
  }

 }
}
