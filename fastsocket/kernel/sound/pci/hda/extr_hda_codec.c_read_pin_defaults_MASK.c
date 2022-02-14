
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_pincfg {void* ctrl; void* cfg; scalar_t__ nid; } ;
struct hda_codec {int num_nodes; int init_pins; scalar_t__ start_nid; } ;
typedef scalar_t__ hda_nid_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_0 (struct hda_codec*,scalar_t__) ;
 unsigned int FUNC_1 (unsigned int) ;
 struct hda_pincfg* FUNC_2 (int *) ;
 void* FUNC_3 (struct hda_codec*,scalar_t__,int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct hda_codec *VAR_4)
{
 int VAR_5;
 hda_nid_t VAR_6 = VAR_4->start_nid;

 for (VAR_5 = 0; VAR_5 < VAR_4->num_nodes; VAR_5++, VAR_6++) {
  struct hda_pincfg *VAR_7;
  unsigned int VAR_8 = FUNC_0(VAR_4, VAR_6);
  unsigned int VAR_9 = FUNC_1(VAR_8);
  if (VAR_9 != VAR_2)
   continue;
  VAR_7 = FUNC_2(&VAR_4->init_pins);
  if (!VAR_7)
   return -VAR_3;
  VAR_7->nid = VAR_6;
  VAR_7->cfg = FUNC_3(VAR_4, VAR_6, 0,
           VAR_0, 0);
  VAR_7->ctrl = FUNC_3(VAR_4, VAR_6, 0,
            VAR_1,
            0);
 }
 return 0;
}
