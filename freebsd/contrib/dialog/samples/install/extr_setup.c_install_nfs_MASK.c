
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*,int ) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_2(void)
{
    if (FUNC_1("ifconfig eth0 134.96.81.36 netmask 255.255.255.224 "
    "broadcast 134.96.81.63 %s", VAR_0))
 return;
    if (FUNC_1("route add -net 134.96.81.32 %s", VAR_0))
 return;
    if (FUNC_1("mount -t nfs 134.96.81.38:"
    "/local/ftp/pub/linux/ELF.binary/tar /source %s", VAR_0))
 return;
    FUNC_0("/base");
    if (FUNC_1("umount /source %s", VAR_0))
 return;
    if (FUNC_1("ifconfig eth0 down %s", VAR_0))
 return;
}
