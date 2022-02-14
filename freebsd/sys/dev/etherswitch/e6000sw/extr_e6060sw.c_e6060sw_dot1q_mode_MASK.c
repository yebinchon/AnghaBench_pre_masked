
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct e6060sw_softc {int numports; scalar_t__ smi_offset; } ;
typedef int device_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,scalar_t__,int ) ;
 int FUNC_1 (int ,scalar_t__,int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 struct e6060sw_softc* FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(device_t VAR_5, int VAR_6)
{
 struct e6060sw_softc *VAR_7;
 int VAR_8;
 int VAR_9;

 VAR_7 = FUNC_3(VAR_5);

 for (VAR_8 = 0; VAR_8 <= VAR_7->numports; VAR_8++) {
  VAR_9 = FUNC_0(FUNC_2(VAR_5),
      VAR_0 + VAR_7->smi_offset + VAR_8, VAR_3);
  VAR_9 &= ~(VAR_1 << VAR_2);
  VAR_9 |= VAR_6 << VAR_2;
  FUNC_1(FUNC_2(VAR_5),
      VAR_0 + VAR_7->smi_offset + VAR_8, VAR_3, VAR_9);

  VAR_9 = FUNC_0(FUNC_2(VAR_5),
      VAR_0 + VAR_7->smi_offset + VAR_8,
      VAR_4);
  VAR_9 &= ~0xfff;
  VAR_9 |= 1;
  FUNC_1(FUNC_2(VAR_5),
      VAR_0 + VAR_7->smi_offset + VAR_8,
      VAR_4, VAR_9);
 }
}
