
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {int dummy; } ;


 int FUNC_0 (struct hda_codec*,unsigned int*) ;

__attribute__((used)) static int FUNC_1(struct hda_codec *VAR_0, unsigned int *VAR_1,
          unsigned int *VAR_2, unsigned int VAR_3)
{
 int VAR_4 = 0;
 unsigned int VAR_5 = *VAR_2;
 unsigned int VAR_6;
 unsigned int VAR_7;
 unsigned int VAR_8;

 if (VAR_1 == ((void*)0))
  return -1;

 VAR_6 = 0;
 while (VAR_6 < VAR_5 && VAR_6 < VAR_3) {
  VAR_4 = FUNC_0(VAR_0, VAR_1++);
  if (VAR_4 != 0)
   break;
  VAR_6++;
 }

 VAR_7 = VAR_6;
 if (VAR_4 == 0) {
  while (VAR_7 < VAR_5) {
   VAR_4 = FUNC_0(VAR_0, &VAR_8);
   if (VAR_4 != 0)
    break;
   VAR_7++;
  }
 }
 *VAR_2 = VAR_6;

 return VAR_4;
}
