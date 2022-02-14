
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hda_codec {TYPE_1__* bus; } ;
typedef int hda_nid_t ;
struct TYPE_2__ {scalar_t__ sync_write; } ;


 int FUNC_0 (struct hda_codec*,unsigned int,int,unsigned int*) ;
 unsigned int FUNC_1 (struct hda_codec*,int ,int,unsigned int,unsigned int) ;

int FUNC_2(struct hda_codec *VAR_0, hda_nid_t VAR_1, int VAR_2,
   unsigned int VAR_3, unsigned int VAR_4)
{
 unsigned int VAR_5 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
 unsigned int VAR_6;
 return FUNC_0(VAR_0, VAR_5, VAR_2,
          VAR_0->bus->sync_write ? &VAR_6 : ((void*)0));
}
