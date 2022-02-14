
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct hda_codec*,int ) ;

__attribute__((used)) static int FUNC_1(struct hda_codec *VAR_1,
    unsigned int *VAR_2, unsigned int VAR_3)
{
 int VAR_4 = 0;
 unsigned int VAR_5;

 if (VAR_2 == ((void*)0))
  return -VAR_0;

 VAR_5 = 0;
 while (VAR_5 < VAR_3) {
  VAR_4 = FUNC_0(VAR_1, *VAR_2++);
  if (VAR_4 != 0)
   break;
  VAR_5++;
 }

 return VAR_4;
}
