
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtblk_softc {int vtblk_flags; int vtblk_dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (struct vtblk_softc*) ;

__attribute__((used)) static void
FUNC_2(struct vtblk_softc *VAR_8)
{
 device_t VAR_9;

 VAR_9 = VAR_8->vtblk_dev;

 FUNC_1(VAR_8);

 if (FUNC_0(VAR_9, VAR_3))
  VAR_8->vtblk_flags |= VAR_5;
 if (FUNC_0(VAR_9, VAR_2))
  VAR_8->vtblk_flags |= VAR_6;
 if (FUNC_0(VAR_9, VAR_0))
  VAR_8->vtblk_flags |= VAR_4;
 if (FUNC_0(VAR_9, VAR_1))
  VAR_8->vtblk_flags |= VAR_7;
}
