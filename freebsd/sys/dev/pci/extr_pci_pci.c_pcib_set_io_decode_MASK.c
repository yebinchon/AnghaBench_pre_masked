
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct pcib_softc {int iobase; int iolimit; int dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int,int) ;

__attribute__((used)) static void
FUNC_1(struct pcib_softc *VAR_4)
{
 device_t VAR_5;
 uint32_t VAR_6;

 VAR_5 = VAR_4->dev;

 VAR_6 = VAR_4->iobase >> 16;
 if (VAR_6 > 0)
  FUNC_0(VAR_5, VAR_0, VAR_6, 2);
 FUNC_0(VAR_5, VAR_1, VAR_4->iobase >> 8, 1);

 VAR_6 = VAR_4->iolimit >> 16;
 if (VAR_6 > 0)
  FUNC_0(VAR_5, VAR_2, VAR_6, 2);
 FUNC_0(VAR_5, VAR_3, VAR_4->iolimit >> 8, 1);
}
