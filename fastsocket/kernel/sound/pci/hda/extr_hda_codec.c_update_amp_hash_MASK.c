
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hda_codec {int hash_mutex; } ;
struct TYPE_2__ {int val; } ;
struct hda_amp_info {unsigned int* vol; TYPE_1__ head; } ;
typedef int hda_nid_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int,int) ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 struct hda_amp_info* FUNC_2 (struct hda_codec*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 unsigned int FUNC_5 (struct hda_codec*,int ,int ,int ,unsigned int) ;

__attribute__((used)) static struct hda_amp_info *
FUNC_6(struct hda_codec *VAR_6, hda_nid_t VAR_7, int VAR_8,
  int VAR_9, int VAR_10, bool VAR_11)
{
 struct hda_amp_info *VAR_12;
 unsigned int VAR_13, VAR_14 = 0;
 bool VAR_15 = 0;

 retry:
 VAR_12 = FUNC_2(VAR_6, FUNC_0(VAR_7, VAR_9, VAR_10));
 if (!VAR_12)
  return ((void*)0);
 if (!(VAR_12->head.val & FUNC_1(VAR_8))) {
  if (!VAR_15) {
   FUNC_4(&VAR_6->hash_mutex);
   VAR_13 = VAR_8 ? VAR_3 : VAR_1;
   VAR_13 |= VAR_9 == VAR_5 ?
    VAR_2 : VAR_0;
   VAR_13 |= VAR_10;
   VAR_14 = FUNC_5(VAR_6, VAR_7, 0,
     VAR_4, VAR_13);
   VAR_14 &= 0xff;
   VAR_15 = 1;
   FUNC_3(&VAR_6->hash_mutex);
   goto retry;
  }
  VAR_12->vol[VAR_8] = VAR_14;
  VAR_12->head.val |= FUNC_1(VAR_8);
 } else if (VAR_11)
  return ((void*)0);
 return VAR_12;
}
