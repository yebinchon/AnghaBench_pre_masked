
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msk_softc {size_t msk_hw_id; int msk_hw_rev; } ;
typedef int device_t ;
typedef int desc ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ) ;
 struct msk_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 char** VAR_2 ;
 int FUNC_3 (char*,int,char*,char*,size_t,int) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_3)
{
 struct msk_softc *VAR_4;
 char VAR_5[100];

 VAR_4 = FUNC_1(FUNC_0(VAR_3));






 FUNC_3(VAR_5, sizeof(VAR_5),
     "Marvell Technology Group Ltd. %s Id 0x%02x Rev 0x%02x",
     VAR_2[VAR_4->msk_hw_id - VAR_1], VAR_4->msk_hw_id,
     VAR_4->msk_hw_rev);
 FUNC_2(VAR_3, VAR_5);

 return (VAR_0);
}
