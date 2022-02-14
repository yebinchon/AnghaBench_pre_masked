
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* ifru_data; } ;
struct ifreq {TYPE_1__ ifr_ifru; int ifr_name; } ;
typedef scalar_t__ mac_t ;
typedef int ifr ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int,int ,struct ifreq*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__*) ;
 int FUNC_4 (scalar_t__,char**) ;
 int FUNC_5 (struct ifreq*,int ,int) ;
 int VAR_1 ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (int ,int ,int) ;
 scalar_t__ FUNC_8 (char*) ;

__attribute__((used)) static void
FUNC_9(int VAR_2)
{
 struct ifreq VAR_3;
 mac_t VAR_4;
 char *VAR_5;

 FUNC_5(&VAR_3, 0, sizeof(VAR_3));
 FUNC_7(VAR_3.ifr_name, VAR_1, sizeof(VAR_3.ifr_name));

 if (FUNC_3(&VAR_4) == -1)
  return;
 VAR_3.ifr_ifru.ifru_data = (void *)VAR_4;
 if (FUNC_1(VAR_2, VAR_0, &VAR_3) == -1)
  goto mac_free;


 if (FUNC_4(VAR_4, &VAR_5) == -1)
  goto mac_free;

 if (FUNC_8(VAR_5) != 0)
  FUNC_6("\tmaclabel %s\n", VAR_5);
 FUNC_0(VAR_5);

mac_free:
 FUNC_2(VAR_4);
}
