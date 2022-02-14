
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hda_codec*,int ,unsigned int) ;
 scalar_t__ FUNC_1 (struct hda_codec*,int ) ;

__attribute__((used)) static void FUNC_2(struct hda_codec *VAR_2)
{
 unsigned int VAR_3;

 VAR_3 = 0x0002;
 VAR_3 |= 0x0008;
 if (FUNC_1(VAR_2, VAR_0))
  VAR_3 |= 0x4000;



 FUNC_0(VAR_2, VAR_1, VAR_3);
}
