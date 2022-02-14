
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct etherswitch_phyreg {int phy; int reg; int val; } ;
struct cfg {int fd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int ,int ,struct etherswitch_phyreg*) ;

__attribute__((used)) static int
FUNC_2(struct cfg *VAR_2, int VAR_3, int VAR_4)
{
 struct etherswitch_phyreg VAR_5;

 VAR_5.phy = VAR_3;
 VAR_5.reg = VAR_4;
 if (FUNC_1(VAR_2->fd, VAR_1, &VAR_5) != 0)
  FUNC_0(VAR_0, "ioctl(IOETHERSWITCHGETPHYREG)");
 return (VAR_5.val);
}
