
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtcon_softc {int vtcon_flags; int vtcon_dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (struct vtcon_softc*) ;

__attribute__((used)) static void
FUNC_2(struct vtcon_softc *VAR_4)
{
 device_t VAR_5;

 VAR_5 = VAR_4->vtcon_dev;

 FUNC_1(VAR_4);

 if (FUNC_0(VAR_5, VAR_1))
  VAR_4->vtcon_flags |= VAR_3;
 if (FUNC_0(VAR_5, VAR_0))
  VAR_4->vtcon_flags |= VAR_2;
}
