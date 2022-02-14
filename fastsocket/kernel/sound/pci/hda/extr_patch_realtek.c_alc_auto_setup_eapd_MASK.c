
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {int dummy; } ;
typedef int hda_nid_t ;


 int FUNC_0 (struct hda_codec*,int,int) ;

__attribute__((used)) static void FUNC_1(struct hda_codec *VAR_0, bool VAR_1)
{

 static hda_nid_t VAR_2[] = {
  0x0f, 0x10, 0x14, 0x15, 0
 };
 hda_nid_t *VAR_3;
 for (VAR_3 = VAR_2; *VAR_3; VAR_3++)
  FUNC_0(VAR_0, *VAR_3, VAR_1);
}
