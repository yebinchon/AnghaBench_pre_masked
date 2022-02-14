
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct as3722_softc {scalar_t__ i2c_pullup; scalar_t__ int_pullup; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct as3722_softc*,int ,int,int) ;
 int FUNC_1 (struct as3722_softc*,int ,int ) ;

__attribute__((used)) static int
FUNC_2(struct as3722_softc *VAR_8)
{
 uint32_t VAR_9;
 int VAR_10;

 VAR_9 = 0;
 if (VAR_8->int_pullup)
  VAR_9 |= VAR_5;
 if (VAR_8->i2c_pullup)
  VAR_9 |= VAR_0;

 VAR_10 = FUNC_0(VAR_8, VAR_6,
     VAR_5 | VAR_0, VAR_9);
 if (VAR_10 != 0)
  return (VAR_7);


 VAR_10 = FUNC_1(VAR_8, VAR_1, 0);
 if (VAR_10 != 0)
  return (VAR_7);
 VAR_10 = FUNC_1(VAR_8, VAR_2, 0);
 if (VAR_10 != 0)
  return (VAR_7);
 VAR_10 = FUNC_1(VAR_8, VAR_3, 0);
 if (VAR_10 != 0)
  return (VAR_7);
 VAR_10 = FUNC_1(VAR_8, VAR_4, 0);
 if (VAR_10 != 0)
  return (VAR_7);
 return (0);
}
