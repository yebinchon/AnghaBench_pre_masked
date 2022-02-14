
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int,char*,char*) ;

__attribute__((used)) static void
FUNC_1(uint32_t VAR_2, uint32_t VAR_3, char *VAR_4, int VAR_5)
{
 char *VAR_6 = ((void*)0);

 if (VAR_2 == VAR_1 || VAR_2 == 0) {
  switch (VAR_3) {
  case 137:
   VAR_6 = "SBP-2";
   break;
  default:
   if (VAR_2 != 0)
    VAR_6 = "unknown ANSIT10";
  }
 }
 if (VAR_2 == VAR_0 || VAR_2 == 0) {
  switch (VAR_3) {
  case 136:
   VAR_6 = "AV/C";
   break;
  case 135:
   VAR_6 = "CAL";
   break;
  case 130:
   VAR_6 = "EHS";
   break;
  case 129:
   VAR_6 = "HAVi";
   break;
  case 134:
   VAR_6 = "1394 Cam 1.04";
   break;
  case 133:
   VAR_6 = "1394 Cam 1.20";
   break;
  case 132:
   VAR_6 = "1394 Cam 1.30";
   break;
  case 131:
   VAR_6 = "1394 Direct print";
   break;
  case 128:
   VAR_6 = "Industrial & Instrument";
   break;
  default:
   if (VAR_2 != 0)
    VAR_6 = "unknown 1394TA";
  }
 }
 if (VAR_6 != ((void*)0))
  FUNC_0(VAR_4, VAR_5, "%s", VAR_6);
}
