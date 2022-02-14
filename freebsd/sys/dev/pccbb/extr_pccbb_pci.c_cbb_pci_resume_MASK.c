
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct cbb_softc {int intrhand; int (* chipinit ) (struct cbb_softc*) ;} ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct cbb_softc*,int ) ;
 int FUNC_2 (struct cbb_softc*,int ,int ) ;
 int FUNC_3 (struct cbb_softc*,int ,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct cbb_softc*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_3)
{
 int VAR_4 = 0;
 struct cbb_softc *VAR_5 = (struct cbb_softc *)FUNC_4(VAR_3);
 uint32_t VAR_6;
 VAR_5->chipinit(VAR_5);


 VAR_6 = FUNC_1(VAR_5, VAR_0);
 FUNC_2(VAR_5, VAR_0, VAR_6);


 FUNC_3(VAR_5, VAR_1, VAR_2);


 FUNC_6(&VAR_5->intrhand);

 VAR_4 = FUNC_0(VAR_3);

 return (VAR_4);
}
