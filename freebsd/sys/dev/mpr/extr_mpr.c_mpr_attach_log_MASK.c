
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct mpr_softc {int mpr_log_eh; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;
 int VAR_2 ;
 int FUNC_1 (struct mpr_softc*,int *,int ,int *,int *) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static int
FUNC_3(struct mpr_softc *VAR_3)
{
 uint8_t VAR_4[16];

 FUNC_0(VAR_4, 16);
 FUNC_2(VAR_4, VAR_0);
 FUNC_2(VAR_4, VAR_1);

 FUNC_1(VAR_3, VAR_4, VAR_2, ((void*)0),
     &VAR_3->mpr_log_eh);

 return (0);
}
