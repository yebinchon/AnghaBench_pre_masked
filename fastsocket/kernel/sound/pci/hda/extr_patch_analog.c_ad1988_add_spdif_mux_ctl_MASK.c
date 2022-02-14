
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nid_path {int depth; int active; int multi; int idx; int path; } ;
struct TYPE_5__ {int init; } ;
struct hda_codec {TYPE_2__ patch_ops; struct ad198x_spec* spec; } ;
struct TYPE_4__ {int dig_outs; } ;
struct TYPE_6__ {int paths; TYPE_1__ autocfg; } ;
struct ad198x_spec {TYPE_3__ gen; int * smux_paths; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct hda_codec*,int) ;
 scalar_t__ FUNC_1 (int ) ;
 struct nid_path* FUNC_2 (int *) ;
 int FUNC_3 (TYPE_3__*,int *,int *) ;
 int FUNC_4 (struct hda_codec*,int) ;
 int FUNC_5 (struct hda_codec*,struct nid_path*) ;

__attribute__((used)) static int FUNC_6(struct hda_codec *VAR_4)
{
 struct ad198x_spec *VAR_5 = VAR_4->spec;
 int VAR_6, VAR_7;



 static struct nid_path VAR_8[4] = {
  {
   .depth = 3,
   .path = { 0x02, 0x1d, 0x1b },
   .idx = { 0, 0, 0 },
   .multi = { 0, 0, 0 },
  },
  {
   .depth = 4,
   .path = { 0x08, 0x0b, 0x1d, 0x1b },
   .idx = { 0, 0, 1, 0 },
   .multi = { 0, 1, 0, 0 },
  },
  {
   .depth = 4,
   .path = { 0x09, 0x0b, 0x1d, 0x1b },
   .idx = { 0, 1, 1, 0 },
   .multi = { 0, 1, 0, 0 },
  },
  {
   .depth = 4,
   .path = { 0x0f, 0x0b, 0x1d, 0x1b },
   .idx = { 0, 2, 1, 0 },
   .multi = { 0, 1, 0, 0 },
  },
 };


 if (!VAR_5->gen.autocfg.dig_outs ||
     FUNC_1(FUNC_0(VAR_4, 0x1d)) != VAR_0)
  return 0;

 VAR_7 = FUNC_4(VAR_4, 0x0b) + 1;
 if (VAR_7 != 3 && VAR_7 != 4)
  return 0;

 for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {
  struct nid_path *VAR_9 = FUNC_2(&VAR_5->gen.paths);
  if (!VAR_9)
   return -VAR_1;
  *VAR_9 = VAR_8[VAR_6];
  if (!VAR_6)
   VAR_9->active = 1;
  VAR_5->smux_paths[VAR_6] = FUNC_5(VAR_4, VAR_9);
 }

 if (!FUNC_3(&VAR_5->gen, ((void*)0), &VAR_3))
  return -VAR_1;

 VAR_4->patch_ops.init = VAR_2;

 return 0;
}
