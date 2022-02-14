
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
struct an_softc {int an_ifp; } ;
struct an_ltv_gen {int an_len; int an_type; int an_val; } ;
typedef int buf ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ,char*,...) ;
 scalar_t__ FUNC_2 (char) ;
 int FUNC_3 (char*,...) ;

__attribute__((used)) static void
FUNC_4(struct an_softc *VAR_1, struct an_ltv_gen *VAR_2, char *VAR_3)
{
 u_int8_t *VAR_4;
 int VAR_5;
 int VAR_6;
 int VAR_7 = 0;
 char VAR_8[17], VAR_9;

 VAR_5 = VAR_2->an_len - 4;
 FUNC_1(VAR_1->an_ifp, "RID %4x, Length %4d, Mode %s\n",
  VAR_2->an_type, VAR_2->an_len - 4, VAR_3);

 if (VAR_0 == 1 || (VAR_0 == VAR_2->an_type)) {
  FUNC_1(VAR_1->an_ifp, "\t");
  FUNC_0(VAR_8,sizeof(VAR_8));

  VAR_4 = (u_int8_t *)&VAR_2->an_val;
  for (VAR_6 = VAR_5; VAR_6 > 0; VAR_6--) {
   FUNC_3("%02x ", *VAR_4);

   VAR_9 = *VAR_4++;
   if (FUNC_2(VAR_9))
    VAR_8[VAR_7] = VAR_9;
   else
    VAR_8[VAR_7] = '.';
   if (++VAR_7 == 16) {
    VAR_7 = 0;
    FUNC_3("%s\n",VAR_8);
    FUNC_1(VAR_1->an_ifp, "\t");
    FUNC_0(VAR_8,sizeof(VAR_8));
   }
  }
  for (; VAR_7 != 16; VAR_7++) {
   FUNC_3("   ");
  }
  FUNC_3(" %s\n",VAR_8);
 }
}
