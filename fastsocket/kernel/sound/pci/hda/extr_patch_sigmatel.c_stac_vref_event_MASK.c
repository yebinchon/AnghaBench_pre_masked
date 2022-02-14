
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_jack_tbl {int private_data; } ;
struct hda_codec {int afg; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (struct hda_codec*,int ,int ,int ,int ) ;
 int FUNC_1 (struct hda_codec*,int ,int ,int,int) ;

__attribute__((used)) static void FUNC_2(struct hda_codec *VAR_1, struct hda_jack_tbl *VAR_2)
{
 unsigned int VAR_3;

 VAR_3 = FUNC_0(VAR_1, VAR_1->afg, 0,
      VAR_0, 0);

 FUNC_1(VAR_1, VAR_1->afg, 0, 0x7e0,
       !!(VAR_3 & (1 << VAR_2->private_data)));
}
