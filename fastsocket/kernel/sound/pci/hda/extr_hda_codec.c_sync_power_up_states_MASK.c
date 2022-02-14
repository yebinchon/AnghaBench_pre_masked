
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {unsigned int (* power_filter ) (struct hda_codec*,int ,unsigned int) ;int num_nodes; int start_nid; } ;
typedef int hda_nid_t ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int FUNC_0 (struct hda_codec*,int ) ;
 int FUNC_1 (struct hda_codec*,int ,unsigned int) ;
 int FUNC_2 (struct hda_codec*,int ,int ,int ,unsigned int) ;
 unsigned int FUNC_3 (struct hda_codec*,int ,unsigned int) ;

__attribute__((used)) static void FUNC_4(struct hda_codec *VAR_3)
{
 hda_nid_t VAR_4 = VAR_3->start_nid;
 int VAR_5;


 if (!VAR_3->power_filter)
  return;

 for (VAR_5 = 0; VAR_5 < VAR_3->num_nodes; VAR_5++, VAR_4++) {
  unsigned int VAR_6 = FUNC_0(VAR_3, VAR_4);
  unsigned int VAR_7;
  if (!(VAR_6 & VAR_2))
   continue;
  VAR_7 = VAR_3->power_filter(VAR_3, VAR_4, VAR_0);
  if (VAR_7 == VAR_0)
   continue;
  if (!FUNC_1(VAR_3, VAR_4, VAR_7))
   FUNC_2(VAR_3, VAR_4, 0,
         VAR_1, VAR_7);
 }
}
