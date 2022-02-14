
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct xl_softc {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct xl_softc*,int ,int,int) ;
 int FUNC_1 (struct xl_softc*,int ) ;
 int VAR_2 ;
 struct xl_softc* FUNC_2 (int ) ;

__attribute__((used)) static uint32_t
FUNC_3(device_t VAR_3)
{
 struct xl_softc *VAR_4;
 uint32_t VAR_5;

 VAR_4 = FUNC_2(VAR_3);


 VAR_5 = FUNC_1(VAR_4, VAR_2);
 FUNC_0(VAR_4, VAR_2, 2,
     VAR_0 | VAR_1);

 return (VAR_5);
}
