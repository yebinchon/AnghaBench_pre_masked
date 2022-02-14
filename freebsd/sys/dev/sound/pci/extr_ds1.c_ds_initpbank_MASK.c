
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct pbank {int Format; int PgLoopEnd; int PgDelta; int PgDeltaEnd; int LpfQ; int LpfK; int LpfKEnd; int EgGain; int EgGainEnd; int LchGain; int LchGainEnd; int RchGain; int RchGainEnd; int Effect1Gain; int Effect1GainEnd; int Effect2Gain; int Effect2GainEnd; int Effect3Gain; int Effect3GainEnd; scalar_t__ LpfD2; scalar_t__ LpfD1; scalar_t__ PgStartFrac; scalar_t__ PgStart; scalar_t__ LoopCount; scalar_t__ NumOfFrames; scalar_t__ Status; scalar_t__ PgLoopFrac; scalar_t__ PgLoop; int PgBase; scalar_t__ LoopDefault; } ;
typedef int bus_addr_t ;



__attribute__((used)) static int
FUNC_0(volatile struct pbank *VAR_0, int VAR_1, int VAR_2, int VAR_3, u_int32_t VAR_4, bus_addr_t VAR_5, u_int32_t VAR_6)
{
 u_int32_t VAR_7[] = {1, 1, 0, 0, 0};
 u_int32_t VAR_8[] = {1, 0, 1, 0, 0};
 u_int32_t VAR_9[] = {0, 0, 0, 0, 0};
 u_int32_t VAR_10[] = {1, 0, 0, 1, 0};
 u_int32_t VAR_11[] = {1, 0, 0, 0, 1};
 int VAR_12, VAR_13;
 u_int32_t VAR_14;

 struct {
  int rate, fK, fQ;
 } VAR_15[] = {
  { 100, 0x00570000, 0x35280000},
  { 2000, 0x06aa0000, 0x34a70000},
  { 8000, 0x18b20000, 0x32020000},
  {11025, 0x20930000, 0x31770000},
  {16000, 0x2b9a0000, 0x31390000},
  {22050, 0x35a10000, 0x31c90000},
  {32000, 0x3eaa0000, 0x33d00000},

    {48000, 0x40000000, 0x40000000},
 };

 VAR_12 = VAR_3? 1 : 0;
 VAR_12 += VAR_2? 1 : 0;
 VAR_14 = (65536 * VAR_4) / 48000;
 VAR_13 = 0;
 while (VAR_13 < 7 && VAR_15[VAR_13].rate < VAR_4)
  VAR_13++;

 VAR_0->Format = VAR_2? 0x00010000 : 0;
 VAR_0->Format |= VAR_3? 0 : 0x80000000;
 VAR_0->Format |= (VAR_2 && (VAR_1 == 2 || VAR_1 == 4))? 0x00000001 : 0;
 VAR_0->LoopDefault = 0;
 VAR_0->PgBase = VAR_5;
 VAR_0->PgLoop = 0;
 VAR_0->PgLoopEnd = VAR_6 >> VAR_12;
 VAR_0->PgLoopFrac = 0;
 VAR_0->Status = 0;
 VAR_0->NumOfFrames = 0;
 VAR_0->LoopCount = 0;
 VAR_0->PgStart = 0;
 VAR_0->PgStartFrac = 0;
 VAR_0->PgDelta = VAR_0->PgDeltaEnd = VAR_14 << 12;
 VAR_0->LpfQ = VAR_15[VAR_13].fQ;
 VAR_0->LpfK = VAR_0->LpfKEnd = VAR_15[VAR_13].fK;
 VAR_0->LpfD1 = VAR_0->LpfD2 = 0;
 VAR_0->EgGain = VAR_0->EgGainEnd = 0x40000000;
 VAR_0->LchGain = VAR_0->LchGainEnd = VAR_7[VAR_1] * 0x40000000;
 VAR_0->RchGain = VAR_0->RchGainEnd = VAR_8[VAR_1] * 0x40000000;
 VAR_0->Effect1Gain = VAR_0->Effect1GainEnd = VAR_9[VAR_1] * 0x40000000;
 VAR_0->Effect2Gain = VAR_0->Effect2GainEnd = VAR_10[VAR_1] * 0x40000000;
 VAR_0->Effect3Gain = VAR_0->Effect3GainEnd = VAR_11[VAR_1] * 0x40000000;

 return 0;
}
