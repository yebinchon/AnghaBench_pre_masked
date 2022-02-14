
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nid_path {int* idx; int depth; unsigned int* ctls; int active; } ;
struct hda_gen_spec {scalar_t__ mixer_nid; scalar_t__ mixer_merge_nid; void* loopback_merge_path; void** loopback_paths; } ;
struct hda_codec {struct hda_gen_spec* spec; } ;
typedef scalar_t__ hda_nid_t ;


 int VAR_0 ;
 unsigned int FUNC_0 (scalar_t__,int,int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int FUNC_1 (struct hda_gen_spec*,int ,char const*,int,unsigned int) ;
 int FUNC_2 (struct hda_gen_spec*,int ,char const*,int,unsigned int) ;
 int FUNC_3 (struct hda_gen_spec*,scalar_t__,int) ;
 scalar_t__ FUNC_4 (struct hda_codec*,scalar_t__,int ) ;
 scalar_t__ FUNC_5 (struct hda_codec*,scalar_t__,int ) ;
 int FUNC_6 (char*,struct nid_path*) ;
 struct nid_path* FUNC_7 (struct hda_codec*,scalar_t__,scalar_t__,int ) ;
 void* FUNC_8 (struct hda_codec*,struct nid_path*) ;

__attribute__((used)) static int FUNC_9(struct hda_codec *VAR_6, int VAR_7,
       hda_nid_t VAR_8, const char *VAR_9, int VAR_10,
       hda_nid_t VAR_11)
{
 struct hda_gen_spec *VAR_12 = VAR_6->spec;
 struct nid_path *VAR_13;
 unsigned int VAR_14;
 int VAR_15, VAR_16;

 if (!FUNC_5(VAR_6, VAR_11, VAR_3) &&
     !FUNC_4(VAR_6, VAR_11, VAR_3))
  return 0;

 VAR_13 = FUNC_7(VAR_6, VAR_8, VAR_11, 0);
 if (!VAR_13)
  return -VAR_0;
 FUNC_6("loopback", VAR_13);
 VAR_12->loopback_paths[VAR_7] = FUNC_8(VAR_6, VAR_13);

 VAR_16 = VAR_13->idx[VAR_13->depth - 1];
 if (FUNC_5(VAR_6, VAR_11, VAR_3)) {
  VAR_14 = FUNC_0(VAR_11, 3, VAR_16, VAR_3);
  VAR_15 = FUNC_2(VAR_12, VAR_2, VAR_9, VAR_10, VAR_14);
  if (VAR_15 < 0)
   return VAR_15;
  VAR_13->ctls[VAR_5] = VAR_14;
 }

 if (FUNC_4(VAR_6, VAR_11, VAR_3)) {
  VAR_14 = FUNC_0(VAR_11, 3, VAR_16, VAR_3);
  VAR_15 = FUNC_1(VAR_12, VAR_1, VAR_9, VAR_10, VAR_14);
  if (VAR_15 < 0)
   return VAR_15;
  VAR_13->ctls[VAR_4] = VAR_14;
 }

 VAR_13->active = 1;
 VAR_15 = FUNC_3(VAR_12, VAR_11, VAR_16);
 if (VAR_15 < 0)
  return VAR_15;

 if (VAR_12->mixer_nid != VAR_12->mixer_merge_nid &&
     !VAR_12->loopback_merge_path) {
  VAR_13 = FUNC_7(VAR_6, VAR_12->mixer_nid,
         VAR_12->mixer_merge_nid, 0);
  if (VAR_13) {
   FUNC_6("loopback-merge", VAR_13);
   VAR_13->active = 1;
   VAR_12->loopback_merge_path =
    FUNC_8(VAR_6, VAR_13);
  }
 }

 return 0;
}
