
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct glxiic_softc {int smb_res; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct glxiic_softc *VAR_2)
{
 uint16_t VAR_3;

 VAR_3 = FUNC_0(VAR_2->smb_res, VAR_0);
 FUNC_1(VAR_2->smb_res, VAR_0,
     VAR_3 & ~VAR_1);
}
