
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
struct mmc_softc {int retune_paused; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct mmc_softc*,int ,int,int,int *,int ) ;

__attribute__((used)) static int
FUNC_1(struct mmc_softc *VAR_5, uint16_t VAR_6)
{
 int VAR_7, VAR_8;

 VAR_8 = (VAR_6 ? VAR_3 : VAR_2) | VAR_1;
 VAR_5->retune_paused++;
 VAR_7 = FUNC_0(VAR_5, VAR_4, (uint32_t)VAR_6 << 16,
     VAR_8, ((void*)0), VAR_0);
 VAR_5->retune_paused--;
 return (VAR_7);
}
