
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct e6060sw_softc {int numports; scalar_t__ sw_model; scalar_t__ smi_offset; } ;
typedef int device_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,scalar_t__,int ) ;
 int FUNC_1 (int ,scalar_t__,int ,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ) ;
 struct e6060sw_softc* FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(device_t VAR_8)
{
 struct e6060sw_softc *VAR_9;
 int VAR_10;
 int VAR_11;

 VAR_9 = FUNC_3(VAR_8);

 for (VAR_10 = 0; VAR_10 <= VAR_9->numports; VAR_10++) {
  if (VAR_9->sw_model == VAR_1 || VAR_9->sw_model == VAR_2) {
   VAR_11 = FUNC_0(FUNC_2(VAR_8),
       VAR_0 + VAR_9->smi_offset + VAR_10, VAR_7);
   VAR_11 &= ~(VAR_4 << VAR_5);
   FUNC_1(FUNC_2(VAR_8),
       VAR_0 + VAR_9->smi_offset + VAR_10,
       VAR_7, VAR_11);

   VAR_11 = FUNC_0(FUNC_2(VAR_8),
       VAR_0 + VAR_9->smi_offset + VAR_10, VAR_6);
   VAR_11 |= 3 << VAR_3;
   FUNC_1(FUNC_2(VAR_8),
       VAR_0 + VAR_9->smi_offset + VAR_10,
       VAR_6, VAR_11);
  }
 }
}
