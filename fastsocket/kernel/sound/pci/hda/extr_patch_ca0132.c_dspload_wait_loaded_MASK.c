
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {int dummy; } ;


 scalar_t__ FUNC_0 (struct hda_codec*) ;
 unsigned long VAR_0 ;
 unsigned long FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (unsigned long,unsigned long) ;

__attribute__((used)) static bool FUNC_6(struct hda_codec *VAR_1)
{
 unsigned long VAR_2 = VAR_0 + FUNC_1(2000);

 do {
  if (FUNC_0(VAR_1)) {
   FUNC_4("ca0132 DOWNLOAD OK :-) DSP IS RUNNING.\n");
   return 1;
  }
  FUNC_2(20);
 } while (FUNC_5(VAR_0, VAR_2));

 FUNC_3("ca0132 DOWNLOAD FAILED!!! DSP IS NOT RUNNING.\n");
 return 0;
}
