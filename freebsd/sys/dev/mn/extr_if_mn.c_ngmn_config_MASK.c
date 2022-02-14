
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mn_softc {int framing; scalar_t__ nhooks; char* nodename; } ;
typedef int node_p ;
typedef enum framing { ____Placeholder_framing } framing ;


 int VAR_0 ;
 int VAR_1 ;
 struct mn_softc* FUNC_0 (int ) ;
 int FUNC_1 (struct mn_softc*) ;
 int FUNC_2 (struct mn_softc*) ;
 int FUNC_3 (char*,char*,char*) ;
 int FUNC_4 (char*,char*,scalar_t__) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (char*,char*,int) ;

__attribute__((used)) static void
FUNC_8(node_p VAR_2, char *VAR_3, char *VAR_4)
{
 struct mn_softc *VAR_5;
 enum framing VAR_6;

 VAR_5 = FUNC_0(VAR_2);

 if (VAR_3 != ((void*)0)) {
  if (!FUNC_7(VAR_3, "line ", 5)) {
   VAR_6 = VAR_5->framing;
   if (!FUNC_6(VAR_3, "line e1")) {
    VAR_6 = VAR_0;
   } else if (!FUNC_6(VAR_3, "line e1u")) {
    VAR_6 = VAR_1;
   } else {
    FUNC_5(VAR_4, "ENOGROK\n");
    return;
   }
   if (VAR_6 == VAR_5->framing)
    return;
   if (VAR_5->nhooks > 0) {
    FUNC_4(VAR_4, "Cannot change line when %d hooks open\n", VAR_5->nhooks);
    return;
   }
   VAR_5->framing = VAR_6;

   FUNC_1(VAR_5);



  } else {
   FUNC_3("%s CONFIG SET [%s]\n", VAR_5->nodename, VAR_3);
   FUNC_5(VAR_4, "ENOGROK\n");
   return;
  }
 }

}
