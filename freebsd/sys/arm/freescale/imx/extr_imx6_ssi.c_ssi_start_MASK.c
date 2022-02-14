
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sc_pcminfo {struct sc_info* sc; } ;
struct sc_info {int sdma_channel; int dev; int conf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sc_info*,int ,int) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(struct sc_pcminfo *VAR_2)
{
 struct sc_info *VAR_3;
 int VAR_4;

 VAR_3 = VAR_2->sc;

 if (FUNC_2(VAR_3->sdma_channel, VAR_3->conf) != 0) {
  FUNC_1(VAR_3->dev, "Can't configure sDMA\n");
  return (-1);
 }


 VAR_4 = (VAR_0);
 FUNC_0(VAR_3, VAR_1, VAR_4);

 FUNC_3(VAR_3->sdma_channel);

 return (0);
}
