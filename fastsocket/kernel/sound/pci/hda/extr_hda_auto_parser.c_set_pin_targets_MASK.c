
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_pintbl {int val; scalar_t__ nid; } ;
struct hda_codec {int dummy; } ;


 int FUNC_0 (struct hda_codec*,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_1(struct hda_codec *VAR_0,
       const struct hda_pintbl *VAR_1)
{
 for (; VAR_1->nid; VAR_1++)
  FUNC_0(VAR_0, VAR_1->nid, VAR_1->val);
}
