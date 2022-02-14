
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hda_codec {scalar_t__ start_nid; scalar_t__ num_nodes; int * wcaps; } ;
typedef scalar_t__ hda_nid_t ;



__attribute__((used)) static inline u32 FUNC_0(struct hda_codec *VAR_0, hda_nid_t VAR_1)
{
 if (VAR_1 < VAR_0->start_nid ||
     VAR_1 >= VAR_0->start_nid + VAR_0->num_nodes)
  return 0;
 return VAR_0->wcaps[VAR_1 - VAR_0->start_nid];
}
