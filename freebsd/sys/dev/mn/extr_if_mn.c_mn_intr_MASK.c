
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32_t ;
struct mn_softc {char* name; int* riqb; int* tiqb; TYPE_1__* m32x; } ;
struct TYPE_2__ {int stat; int lstat; } ;


 int FUNC_0 (struct mn_softc*) ;
 int FUNC_1 (struct mn_softc*,int) ;
 int FUNC_2 (struct mn_softc*,int) ;
 int FUNC_3 (char*,...) ;

__attribute__((used)) static void
FUNC_4(void *VAR_0)
{
 struct mn_softc *VAR_1;
 u_int32_t VAR_2, VAR_3, VAR_4;
 int VAR_5, VAR_6;

 VAR_1 = VAR_0;
 VAR_2 = VAR_1->m32x->stat;
 VAR_3 = VAR_1->m32x->lstat;





 if (VAR_2 & ~0xc200) {
  FUNC_3("%s: I stat=%08x lstat=%08x\n", VAR_1->name, VAR_2, VAR_3);
 }

 if ((VAR_2 & 0x200) || (VAR_3 & 2))
  FUNC_0(VAR_1);

 for (VAR_6 = VAR_5 = 0; VAR_5 < 64; VAR_5 ++) {
  VAR_4 = VAR_1->riqb[VAR_5];
  if (VAR_4) {
   VAR_1->riqb[VAR_5] = 0;
   FUNC_1(VAR_1, VAR_4);
   if ((VAR_4 & ~0x1f) == 0x30000800 || (VAR_4 & ~0x1f) == 0x30000b00)
    continue;
   VAR_4 &= ~0x30000400;
   if ((VAR_4 & ~0x1f) == 0x00000900)
    continue;
   if (!(VAR_4 & ~0x1f))
    continue;
   if (!VAR_6)
    FUNC_3("%s*: RIQB:", VAR_1->name);
   FUNC_3(" [%d]=%08x", VAR_5, VAR_4);
   VAR_6++;
  }
 }
 if (VAR_6)
     FUNC_3("\n");

 for (VAR_6 = VAR_5 = 0; VAR_5 < 64; VAR_5 ++) {
  VAR_4 = VAR_1->tiqb[VAR_5];
  if (VAR_4) {
   VAR_1->tiqb[VAR_5] = 0;
   FUNC_2(VAR_1, VAR_4);
   if ((VAR_4 & ~0x1f) == 0x20000800)
    continue;
   VAR_4 &= ~0x20000000;
   if (!VAR_4)
    continue;
   if (!VAR_6)
    FUNC_3("%s*: TIQB:", VAR_1->name);
   FUNC_3(" [%d]=%08x", VAR_5, VAR_4);
   VAR_6++;
  }
 }
 if (VAR_6)
  FUNC_3("\n");
 VAR_1->m32x->stat = VAR_2;
}
