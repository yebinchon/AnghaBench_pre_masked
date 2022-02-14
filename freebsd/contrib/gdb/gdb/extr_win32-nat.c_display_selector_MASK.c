
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int BaseHi; int BaseMid; int LimitHi; int Type; int Dpl; scalar_t__ Granularity; scalar_t__ Default_Big; int Pres; } ;
struct TYPE_6__ {TYPE_1__ Bits; } ;
struct TYPE_7__ {int BaseLow; int LimitLow; TYPE_2__ HighWord; } ;
typedef TYPE_3__ LDT_ENTRY ;
typedef int HANDLE ;
typedef int DWORD ;


 scalar_t__ FUNC_0 (int ,int,TYPE_3__*) ;
 int FUNC_1 (char*,int,...) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int
FUNC_3 (HANDLE VAR_0, DWORD VAR_1)
{
  LDT_ENTRY VAR_2;
  if (FUNC_0 (VAR_0, VAR_1, &VAR_2))
    {
      int VAR_3, VAR_4;
      FUNC_1 ("0x%03lx: ", VAR_1);
      if (!VAR_2.HighWord.Bits.Pres)
 {
   FUNC_2 ("Segment not present\n");
   return 0;
 }
      VAR_3 = (VAR_2.HighWord.Bits.BaseHi << 24) +
      (VAR_2.HighWord.Bits.BaseMid << 16)
      + VAR_2.BaseLow;
      VAR_4 = (VAR_2.HighWord.Bits.LimitHi << 16) + VAR_2.LimitLow;
      if (VAR_2.HighWord.Bits.Granularity)
 VAR_4 = (VAR_4 << 12) | 0xfff;
      FUNC_1 ("base=0x%08x limit=0x%08x", VAR_3, VAR_4);
      if (VAR_2.HighWord.Bits.Default_Big)
 FUNC_2(" 32-bit ");
      else
 FUNC_2(" 16-bit ");
      switch ((VAR_2.HighWord.Bits.Type & 0xf) >> 1)
 {
 case 0:
   FUNC_2 ("Data (Read-Only, Exp-up");
   break;
 case 1:
   FUNC_2 ("Data (Read/Write, Exp-up");
   break;
 case 2:
   FUNC_2 ("Unused segment (");
   break;
 case 3:
   FUNC_2 ("Data (Read/Write, Exp-down");
   break;
 case 4:
   FUNC_2 ("Code (Exec-Only, N.Conf");
   break;
 case 5:
   FUNC_2 ("Code (Exec/Read, N.Conf");
   break;
 case 6:
   FUNC_2 ("Code (Exec-Only, Conf");
   break;
 case 7:
   FUNC_2 ("Code (Exec/Read, Conf");
   break;
 default:
   FUNC_1 ("Unknown type 0x%x",VAR_2.HighWord.Bits.Type);
 }
      if ((VAR_2.HighWord.Bits.Type & 0x1) == 0)
 FUNC_2(", N.Acc");
      FUNC_2 (")\n");
      if ((VAR_2.HighWord.Bits.Type & 0x10) == 0)
 FUNC_2("System selector ");
      FUNC_1 ("Priviledge level = %d. ", VAR_2.HighWord.Bits.Dpl);
      if (VAR_2.HighWord.Bits.Granularity)
 FUNC_2 ("Page granular.\n");
      else
 FUNC_2 ("Byte granular.\n");
      return 1;
    }
  else
    {
      FUNC_1 ("Invalid selector 0x%lx.\n",VAR_1);
      return 0;
    }
}
