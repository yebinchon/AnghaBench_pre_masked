
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {scalar_t__ start_nid; scalar_t__ num_nodes; struct conexant_spec* spec; } ;
struct conexant_spec {int num_eapds; int dynamic_eapd; scalar_t__* eapds; } ;
typedef scalar_t__ hda_nid_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (struct hda_codec*,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct hda_codec*,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct hda_codec *VAR_2)
{
 struct conexant_spec *VAR_3 = VAR_2->spec;
 hda_nid_t VAR_4, VAR_5;

 VAR_5 = VAR_2->start_nid + VAR_2->num_nodes;
 for (VAR_4 = VAR_2->start_nid; VAR_4 < VAR_5; VAR_4++) {
  if (FUNC_2(FUNC_1(VAR_2, VAR_4)) != VAR_1)
   continue;
  if (!(FUNC_3(VAR_2, VAR_4) & VAR_0))
   continue;
  VAR_3->eapds[VAR_3->num_eapds++] = VAR_4;
  if (VAR_3->num_eapds >= FUNC_0(VAR_3->eapds))
   break;
 }







 if (VAR_3->num_eapds > 2)
  VAR_3->dynamic_eapd = 1;
}
