
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {scalar_t__ const* slave_dig_outs; } ;
typedef scalar_t__ const hda_nid_t ;


 int FUNC_0 (struct hda_codec*,scalar_t__ const,int ,int,int) ;

__attribute__((used)) static void FUNC_1(struct hda_codec *VAR_0, hda_nid_t VAR_1,
   int VAR_2, int VAR_3)
{
 const hda_nid_t *VAR_4;

 FUNC_0(VAR_0, VAR_1, 0, VAR_2, VAR_3);
 VAR_4 = VAR_0->slave_dig_outs;
 if (!VAR_4)
  return;
 for (; *VAR_4; VAR_4++)
  FUNC_0(VAR_0, *VAR_4, 0, VAR_2, VAR_3);
}
