
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {int num_nodes; int * wcaps; int start_nid; } ;
typedef int hda_nid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int,int ) ;
 int FUNC_1 (struct hda_codec*,int ,int *) ;
 int FUNC_2 (struct hda_codec*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct hda_codec *VAR_3, hda_nid_t VAR_4)
{
 int VAR_5;
 hda_nid_t VAR_6;

 VAR_3->num_nodes = FUNC_1(VAR_3, VAR_4,
       &VAR_3->start_nid);
 VAR_3->wcaps = FUNC_0(VAR_3->num_nodes * 4, VAR_2);
 if (!VAR_3->wcaps)
  return -VAR_1;
 VAR_6 = VAR_3->start_nid;
 for (VAR_5 = 0; VAR_5 < VAR_3->num_nodes; VAR_5++, VAR_6++)
  VAR_3->wcaps[VAR_5] = FUNC_2(VAR_3, VAR_6,
           VAR_0);
 return 0;
}
