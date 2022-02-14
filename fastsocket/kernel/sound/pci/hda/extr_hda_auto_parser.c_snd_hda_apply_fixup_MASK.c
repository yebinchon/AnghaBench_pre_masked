
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {int fixup_id; scalar_t__ fixup_list; } ;


 int FUNC_0 (struct hda_codec*,int ,int,int ) ;

void FUNC_1(struct hda_codec *VAR_0, int VAR_1)
{
 if (VAR_0->fixup_list)
  FUNC_0(VAR_0, VAR_0->fixup_id, VAR_1, 0);
}
