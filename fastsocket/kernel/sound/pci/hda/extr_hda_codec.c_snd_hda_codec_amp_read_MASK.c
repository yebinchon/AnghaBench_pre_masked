
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {int hash_mutex; } ;
struct hda_amp_info {unsigned int* vol; } ;
typedef int hda_nid_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct hda_amp_info* FUNC_2 (struct hda_codec*,int ,int,int,int,int) ;

int FUNC_3(struct hda_codec *VAR_0, hda_nid_t VAR_1, int VAR_2,
      int VAR_3, int VAR_4)
{
 struct hda_amp_info *VAR_5;
 unsigned int VAR_6 = 0;

 FUNC_0(&VAR_0->hash_mutex);
 VAR_5 = FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, 0);
 if (VAR_5)
  VAR_6 = VAR_5->vol[VAR_2];
 FUNC_1(&VAR_0->hash_mutex);
 return VAR_6;
}
