
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct etherswitch_reg {int reg; int val; } ;
struct cfg {int fd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int ,int ,struct etherswitch_reg*) ;

__attribute__((used)) static int
FUNC_2(struct cfg *VAR_2, int VAR_3)
{
 struct etherswitch_reg VAR_4;

 VAR_4.reg = VAR_3;
 if (FUNC_1(VAR_2->fd, VAR_1, &VAR_4) != 0)
  FUNC_0(VAR_0, "ioctl(IOETHERSWITCHGETREG)");
 return (VAR_4.val);
}
