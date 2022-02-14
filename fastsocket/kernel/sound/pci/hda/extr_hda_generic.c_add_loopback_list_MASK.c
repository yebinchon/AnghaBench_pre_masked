
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int list; } ;
struct TYPE_3__ {int amplist; } ;
struct hda_gen_spec {TYPE_2__ loopback_list; TYPE_1__ loopback; } ;
struct hda_amp_list {int idx; int dir; int nid; } ;
typedef int hda_nid_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct hda_amp_list* FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_1(struct hda_gen_spec *VAR_2, hda_nid_t VAR_3, int VAR_4)
{
 struct hda_amp_list *VAR_5;

 VAR_5 = FUNC_0(&VAR_2->loopback_list);
 if (!VAR_5)
  return -VAR_0;
 VAR_5->nid = VAR_3;
 VAR_5->dir = VAR_1;
 VAR_5->idx = VAR_4;
 VAR_2->loopback.amplist = VAR_2->loopback_list.list;
 return 0;
}
