
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fv_softc {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct fv_softc* FUNC_0 (int ) ;
 int FUNC_1 (struct fv_softc*,int) ;
 int FUNC_2 (struct fv_softc*,int) ;
 int FUNC_3 (struct fv_softc*,int,int) ;
 int VAR_2 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_3, int VAR_4, int VAR_5)
{
 struct fv_softc * VAR_6 = FUNC_0(VAR_3);
 int VAR_7;

 FUNC_4(&VAR_2);
 FUNC_3(VAR_6, VAR_0, 32);
 FUNC_3(VAR_6, VAR_1, 4);
 FUNC_3(VAR_6, VAR_4, 5);
 FUNC_3(VAR_6, VAR_5, 5);
 FUNC_2(VAR_6, VAR_1);
 VAR_7 = FUNC_1(VAR_6, 16);
 FUNC_2(VAR_6, VAR_1);
 FUNC_5(&VAR_2);

 return (VAR_7);
}
