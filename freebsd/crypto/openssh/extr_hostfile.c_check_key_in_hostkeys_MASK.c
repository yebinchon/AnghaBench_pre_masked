
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sshkey {int dummy; } ;
struct hostkeys {int dummy; } ;
struct hostkey_entry {int dummy; } ;
typedef int HostStatus ;


 int FUNC_0 (struct hostkeys*,struct sshkey*,int ,struct hostkey_entry const**) ;
 int FUNC_1 (char*) ;

HostStatus
FUNC_2(struct hostkeys *VAR_0, struct sshkey *VAR_1,
    const struct hostkey_entry **VAR_2)
{
 if (VAR_1 == ((void*)0))
  FUNC_1("no key to look up");
 return FUNC_0(VAR_0, VAR_1, 0, VAR_2);
}
