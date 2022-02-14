
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct e6060sw_softc {scalar_t__ smi_offset; } ;
typedef int device_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,scalar_t__,int ) ;
 int FUNC_1 (int ,scalar_t__,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ) ;
 struct e6060sw_softc* FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(device_t VAR_8)
{
 struct e6060sw_softc *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_3(VAR_8);

 FUNC_1(FUNC_2(VAR_8), VAR_0 + VAR_9->smi_offset,
     VAR_6, VAR_1 | (VAR_4 << 12));
 while (1) {
  VAR_10 = FUNC_0(FUNC_2(VAR_8),
      VAR_0 + VAR_9->smi_offset, VAR_6);
  if ((VAR_10 & VAR_1) == 0)
   break;
 }


 FUNC_1(FUNC_2(VAR_8), VAR_0 + VAR_9->smi_offset,
     VAR_2, 0xcccc);
 FUNC_1(FUNC_2(VAR_8), VAR_0 + VAR_9->smi_offset,
     VAR_3, 0x00cc);
 FUNC_1(FUNC_2(VAR_8), VAR_0 + VAR_9->smi_offset,
     VAR_7, 0x1000 | 1);
 FUNC_1(FUNC_2(VAR_8), VAR_0 + VAR_9->smi_offset,
     VAR_6, VAR_1 | (VAR_5 << 12) | 1);
 while (1) {
  VAR_10 = FUNC_0(FUNC_2(VAR_8),
      VAR_0 + VAR_9->smi_offset, VAR_6);
  if ((VAR_10 & VAR_1) == 0)
   break;
 }
}
