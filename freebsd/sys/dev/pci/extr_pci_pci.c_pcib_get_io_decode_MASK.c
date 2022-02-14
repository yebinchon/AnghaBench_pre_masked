
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct pcib_softc {void* iolimit; void* iobase; int dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (int,int) ;
 void* FUNC_1 (int,int) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_3(struct pcib_softc *VAR_6)
{
 device_t VAR_7;
 uint32_t VAR_8;

 VAR_7 = VAR_6->dev;

 VAR_8 = FUNC_2(VAR_7, VAR_3, 1);
 if ((VAR_8 & VAR_1) == VAR_0)
  VAR_6->iobase = FUNC_0(
      FUNC_2(VAR_7, VAR_2, 2), VAR_8);
 else
  VAR_6->iobase = FUNC_0(0, VAR_8);

 VAR_8 = FUNC_2(VAR_7, VAR_5, 1);
 if ((VAR_8 & VAR_1) == VAR_0)
  VAR_6->iolimit = FUNC_1(
      FUNC_2(VAR_7, VAR_4, 2), VAR_8);
 else
  VAR_6->iolimit = FUNC_1(0, VAR_8);
}
