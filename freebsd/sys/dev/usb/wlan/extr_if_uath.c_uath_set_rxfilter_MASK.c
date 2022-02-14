
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct uath_softc {int dummy; } ;
struct uath_cmd_rx_filter {void* op; void* bits; } ;


 int FUNC_0 (struct uath_softc*,int,char*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (struct uath_softc*,int ,struct uath_cmd_rx_filter*,int,int ) ;

__attribute__((used)) static int
FUNC_3(struct uath_softc *VAR_3, uint32_t VAR_4, uint32_t VAR_5)
{
 struct uath_cmd_rx_filter VAR_6;

 VAR_6.bits = FUNC_1(VAR_4);
 VAR_6.op = FUNC_1(VAR_5);

 FUNC_0(VAR_3, VAR_0 | VAR_1,
     "setting Rx filter=0x%x flags=0x%x\n", VAR_4, VAR_5);
 return FUNC_2(VAR_3, VAR_2, &VAR_6,
     sizeof VAR_6, 0);
}
