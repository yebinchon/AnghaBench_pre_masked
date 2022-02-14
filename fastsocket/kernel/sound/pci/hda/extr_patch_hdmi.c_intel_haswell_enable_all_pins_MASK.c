
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {int dummy; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_0 (struct hda_codec*,int ,int ,int ,unsigned int) ;
 int FUNC_1 (struct hda_codec*) ;

__attribute__((used)) static void FUNC_2(struct hda_codec *VAR_4,
       bool VAR_5)
{
 unsigned int VAR_6;

 VAR_6 = FUNC_0(VAR_4, VAR_3, 0,
    VAR_1, 0);
 if (VAR_6 == -1 || VAR_6 & VAR_0)
  return;

 VAR_6 |= VAR_0;
 VAR_6 = FUNC_0(VAR_4, VAR_3, 0,
    VAR_2, VAR_6);
 if (VAR_6 == -1)
  return;

 if (VAR_5)
  FUNC_1(VAR_4);
}
