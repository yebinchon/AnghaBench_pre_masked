
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;
typedef int dev ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,char*,int,int ,int,int ,char*,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_4(device_t VAR_6)
{




 FUNC_0(FUNC_2(VAR_6),
     FUNC_1(FUNC_3(VAR_6)), VAR_2,
     "spdif_enabled", VAR_1 | VAR_0, VAR_6, sizeof(VAR_6),
     VAR_4, "I",
     "Enable S/PDIF output on primary playback channel");
 FUNC_0(FUNC_2(VAR_6),
     FUNC_1(FUNC_3(VAR_6)), VAR_2,
     "dxs_src", VAR_1 | VAR_0, VAR_6, sizeof(VAR_6),
     VAR_3, "I",
     "Enable VIA DXS Sample Rate Converter");
 FUNC_0(FUNC_2(VAR_6),
     FUNC_1(FUNC_3(VAR_6)), VAR_2,
     "polling", VAR_1 | VAR_0, VAR_6, sizeof(VAR_6),
     VAR_5, "I",
     "Enable polling mode");
}
