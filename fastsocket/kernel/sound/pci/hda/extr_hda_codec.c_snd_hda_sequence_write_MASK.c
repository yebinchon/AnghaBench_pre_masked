
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_verb {int param; int verb; scalar_t__ nid; } ;
struct hda_codec {int dummy; } ;


 int FUNC_0 (struct hda_codec*,scalar_t__,int ,int ,int ) ;

void FUNC_1(struct hda_codec *VAR_0, const struct hda_verb *VAR_1)
{
 for (; VAR_1->nid; VAR_1++)
  FUNC_0(VAR_0, VAR_1->nid, 0, VAR_1->verb, VAR_1->param);
}
