
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seg_descr {int limit1; int limit0; int stype; int base0; scalar_t__ present; int bit32; int base1; int base2; scalar_t__ page_granular; } ;
struct gate_descr {int param_count; int offset0; int offset1; int selector; } ;
struct TYPE_2__ {int tss_cs; } ;


 int FUNC_0 () ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 (unsigned long,int,struct seg_descr*) ;
 int FUNC_2 (struct gate_descr*,struct seg_descr*,int) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int,char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void
FUNC_6 (unsigned VAR_2, unsigned long VAR_3, int VAR_4, int VAR_5)
{
  struct seg_descr VAR_6;
  struct gate_descr VAR_7;


  if (VAR_4 == 0 && VAR_2 == 0)
    FUNC_5 ("0x000: null descriptor\n");
  else if (FUNC_1 (VAR_3, VAR_4, &VAR_6) != -1)
    {


      static unsigned VAR_8[] = {
   0xffffdafeL,
   0x0000c0e0L,
   0xffffdafaL
      };



      int VAR_9 = VAR_1 ? (VAR_0.tss_cs & 3) : FUNC_0 () & 3;
      unsigned long VAR_10 = (VAR_6.limit1 << 16) | VAR_6.limit0;

      if (VAR_6.present
   && (VAR_8[VAR_2] & (1 << VAR_6.stype)) != 0)
 {
   FUNC_3 ("0x%03x: ",
      VAR_2 == 1
      ? VAR_4 : (VAR_4 * 8) | (VAR_2 ? (VAR_9 | 4) : 0));
   if (VAR_6.page_granular)
     VAR_10 = (VAR_10 << 12) | 0xfff;
   if (VAR_6.stype == 1 || VAR_6.stype == 2 || VAR_6.stype == 3
       || VAR_6.stype == 9 || VAR_6.stype == 11
       || (VAR_6.stype >= 16 && VAR_6.stype < 32))
     FUNC_3 ("base=0x%02x%02x%04x limit=0x%08lx",
        VAR_6.base2, VAR_6.base1, VAR_6.base0, VAR_10);

   switch (VAR_6.stype)
     {
       case 1:
       case 3:
  FUNC_3 (" 16-bit TSS  (task %sactive)",
     VAR_6.stype == 3 ? "" : "in");
  break;
       case 2:
  FUNC_5 (" LDT");
  break;
       case 4:
  FUNC_2 (&VAR_7, &VAR_6, sizeof VAR_7);
  FUNC_3 ("selector=0x%04x  offs=0x%04x%04x",
     VAR_7.selector, VAR_7.offset1, VAR_7.offset0);
  FUNC_3 (" 16-bit Call Gate (params=%d)",
     VAR_7.param_count);
  break;
       case 5:
  FUNC_3 ("TSS selector=0x%04x", VAR_6.base0);
  FUNC_4 (16, "Task Gate");
  break;
       case 6:
       case 7:
  FUNC_2 (&VAR_7, &VAR_6, sizeof VAR_7);
  FUNC_3 ("selector=0x%04x  offs=0x%04x%04x",
     VAR_7.selector, VAR_7.offset1, VAR_7.offset0);
  FUNC_3 (" 16-bit %s Gate",
     VAR_6.stype == 6 ? "Interrupt" : "Trap");
  break;
       case 9:
       case 11:
  FUNC_3 (" 32-bit TSS (task %sactive)",
     VAR_6.stype == 3 ? "" : "in");
  break;
       case 12:
  FUNC_2 (&VAR_7, &VAR_6, sizeof VAR_7);
  FUNC_3 ("selector=0x%04x  offs=0x%04x%04x",
     VAR_7.selector, VAR_7.offset1, VAR_7.offset0);
  FUNC_3 (" 32-bit Call Gate (params=%d)",
     VAR_7.param_count);
  break;
       case 14:
       case 15:
  FUNC_2 (&VAR_7, &VAR_6, sizeof VAR_7);
  FUNC_3 ("selector=0x%04x  offs=0x%04x%04x",
     VAR_7.selector, VAR_7.offset1, VAR_7.offset0);
  FUNC_3 (" 32-bit %s Gate",
     VAR_6.stype == 14 ? "Interrupt" : "Trap");
  break;
       case 16:
       case 17:
       case 18:
       case 19:
       case 20:
       case 21:
       case 22:
       case 23:
  FUNC_3 (" %s-bit Data (%s Exp-%s%s)",
     VAR_6.bit32 ? "32" : "16",
     VAR_6.stype & 2 ? "Read/Write," : "Read-Only, ",
     VAR_6.stype & 4 ? "down" : "up",
     VAR_6.stype & 1 ? "" : ", N.Acc");
  break;
       case 24:
       case 25:
       case 26:
       case 27:
       case 28:
       case 29:
       case 30:
       case 31:
  FUNC_3 (" %s-bit Code (%s,  %sConf%s)",
     VAR_6.bit32 ? "32" : "16",
     VAR_6.stype & 2 ? "Exec/Read" : "Exec-Only",
     VAR_6.stype & 4 ? "" : "N.",
     VAR_6.stype & 1 ? "" : ", N.Acc");
  break;
       default:
  FUNC_3 ("Unknown type 0x%02x", VAR_6.stype);
  break;
     }
   FUNC_5 ("\n");
 }
      else if (VAR_5)
 {
   FUNC_3 ("0x%03x: ",
      VAR_2 == 1
      ? VAR_4 : (VAR_4 * 8) | (VAR_2 ? (VAR_9 | 4) : 0));
   if (!VAR_6.present)
     FUNC_5 ("Segment not present\n");
   else
     FUNC_3 ("Segment type 0x%02x is invalid in this table\n",
        VAR_6.stype);
 }
    }
  else if (VAR_5)
    FUNC_3 ("0x%03x: Cannot read this descriptor\n", VAR_4);
}
