
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int io_base; } ;
struct TYPE_5__ {TYPE_1__ hw; } ;
typedef TYPE_2__ wavnc_info ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (scalar_t__) ;
 void* FUNC_1 (scalar_t__) ;
 int FUNC_2 (unsigned int,scalar_t__) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int
FUNC_5(wavnc_info *VAR_6,
  int VAR_7, unsigned int *VAR_8,
  int VAR_9, unsigned int *VAR_10)
{
 unsigned int VAR_11 = VAR_6->hw.io_base;
 unsigned int VAR_12 = 0;
 unsigned int VAR_13;

 if (VAR_5 & VAR_3) {
  FUNC_3("waveartist_cmd: cmd=");

  for (VAR_13 = 0; VAR_13 < VAR_7; VAR_13++)
   FUNC_3("%04X ", VAR_8[VAR_13]);

  FUNC_3("\n");
 }

 if (FUNC_0(VAR_11 + VAR_4) & VAR_1) {
  int VAR_14;




  VAR_14 = FUNC_1(VAR_11 + VAR_0);

  if (VAR_5 & VAR_3)
   FUNC_3("flushed %04X...", VAR_14);

  FUNC_4(10);
 }

 for (VAR_13 = 0; !VAR_12 && VAR_13 < VAR_7; VAR_13++) {
  int VAR_15;

  for (VAR_15 = 5000; VAR_15; VAR_15--)
   if (FUNC_0(VAR_11 + VAR_4) & VAR_2)
    break;

  if (!VAR_15)
   VAR_12 = 1;
  else
   FUNC_2(VAR_8[VAR_13], VAR_11 + VAR_0);
 }

 for (VAR_13 = 0; !VAR_12 && VAR_13 < VAR_9; VAR_13++) {
  int VAR_16;

  for (VAR_16 = 5000; VAR_16; VAR_16--)
   if (FUNC_0(VAR_11 + VAR_4) & VAR_1)
    break;

  if (!VAR_16)
   VAR_12 = 1;
  else
   VAR_10[VAR_13] = FUNC_1(VAR_11 + VAR_0);
 }

 if (VAR_5 & VAR_3) {
  if (!VAR_12) {
   FUNC_3("waveartist_cmd: resp=");

   for (VAR_13 = 0; VAR_13 < VAR_9; VAR_13++)
    FUNC_3("%04X ", VAR_10[VAR_13]);

   FUNC_3("\n");
  } else
   FUNC_3("waveartist_cmd: timed out\n");
 }

 return VAR_12 ? 1 : 0;
}
