
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
typedef int u_int32_t ;
struct aac_softc {int FwDebugFlags; } ;


 int VAR_0 ;
 int FUNC_0 (struct aac_softc*,unsigned long,char*,char*) ;
 int FUNC_1 (char*,char*,...) ;

void FUNC_2(struct aac_softc *VAR_1, unsigned long VAR_2, u_int8_t *VAR_3, int VAR_4)
{
 int VAR_5, VAR_6;
 u_int32_t VAR_7 = 0;
 char VAR_8[100];
 char *VAR_9;





 if (VAR_1 != ((void*)0)) {
  VAR_7 = VAR_1->FwDebugFlags;
  VAR_1->FwDebugFlags |= VAR_0;
 }

 VAR_5 = 0;




 while (VAR_5 < VAR_4) {





  VAR_9 = VAR_8;




  FUNC_1(VAR_9, "\n%04x  ", VAR_5);
  VAR_9 += 6;




  for (VAR_6 = 0; VAR_6 < 16; ++VAR_6) {




   if ((VAR_5 + VAR_6) >= VAR_4)
    FUNC_1 (VAR_9, "   ");
   else
      FUNC_1 (VAR_9, "%02x ", VAR_3[VAR_5+VAR_6]);
   VAR_9 += 3;




   if (VAR_6 == 7) {
    FUNC_1 (VAR_9, "- ");
    VAR_9 += 2;
   }
  }




  FUNC_1 (VAR_9, "  ");
  VAR_9 += 2;
  for (VAR_6 = 0; VAR_6 < 16; ++VAR_6) {



   if ((VAR_5 + VAR_6) >= VAR_4)
    break;




   if ((VAR_3[VAR_5+VAR_6] > 0x1F) && (VAR_3[VAR_5+VAR_6] < 0x7F))
    FUNC_1 (VAR_9, "%c", VAR_3[VAR_5+VAR_6]);
   else
    FUNC_1 (VAR_9, ".");
   ++VAR_9;
  }



  FUNC_0(VAR_1, VAR_2, "%s", VAR_8);




  VAR_5 += 16;

 }




 if (VAR_1 != ((void*)0))
  VAR_1->FwDebugFlags = VAR_7;
}
