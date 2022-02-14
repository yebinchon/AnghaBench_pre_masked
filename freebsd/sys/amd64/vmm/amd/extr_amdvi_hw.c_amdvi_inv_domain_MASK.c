
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct amdvi_softc {int dev; } ;
struct amdvi_cmd {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct amdvi_softc*,int ,int ,int,int,int) ;
 struct amdvi_cmd* FUNC_2 (struct amdvi_softc*) ;
 int FUNC_3 (int ,char*,int ) ;

__attribute__((used)) static void
FUNC_4(struct amdvi_softc *VAR_1, uint16_t VAR_2)
{
 struct amdvi_cmd *VAR_3;

 VAR_3 = FUNC_2(VAR_1);
 FUNC_0(VAR_3 != ((void*)0), ("Cmd is NULL"));





 FUNC_1(VAR_1, VAR_2, VAR_0,
    0, 1, 1);





}
