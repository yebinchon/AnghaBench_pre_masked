
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct pcib_softc {int flags; int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ,scalar_t__,int) ;
 int FUNC_1 (int ,scalar_t__,scalar_t__,int) ;

__attribute__((used)) static void
FUNC_2(struct pcib_softc *VAR_3, uint32_t VAR_4)
{
 uint32_t VAR_5;

 VAR_5 = FUNC_0(VAR_3->dev, VAR_4 + VAR_2, 4);
 VAR_5 |= VAR_1;
 FUNC_1(VAR_3->dev, VAR_4 + VAR_2, VAR_5, 4);

 VAR_3->flags |= VAR_0;
}
