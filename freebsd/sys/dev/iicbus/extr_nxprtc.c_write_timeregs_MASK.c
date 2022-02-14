
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct time_regs {int dummy; } ;
struct nxprtc_softc {int secaddr; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,struct time_regs*,int,int ) ;

__attribute__((used)) static int
FUNC_1(struct nxprtc_softc *VAR_1, struct time_regs *VAR_2)
{

 return (FUNC_0(VAR_1->dev, VAR_1->secaddr, VAR_2,
     sizeof(*VAR_2), VAR_0));
}
