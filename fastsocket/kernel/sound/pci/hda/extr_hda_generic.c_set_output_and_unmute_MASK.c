
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nid_path {int depth; int active; int * path; } ;
struct hda_codec {int spec; } ;
typedef int hda_nid_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct hda_codec*,int ) ;
 int FUNC_2 (struct hda_codec*,int ,int ) ;
 int FUNC_3 (struct hda_codec*,struct nid_path*,int ,int ) ;
 struct nid_path* FUNC_4 (struct hda_codec*,int) ;

__attribute__((used)) static void FUNC_5(struct hda_codec *VAR_0, int VAR_1)
{
 struct nid_path *VAR_2;
 hda_nid_t VAR_3;

 VAR_2 = FUNC_4(VAR_0, VAR_1);
 if (!VAR_2 || !VAR_2->depth)
  return;
 VAR_3 = VAR_2->path[VAR_2->depth - 1];
 FUNC_1(VAR_0, VAR_3);
 FUNC_3(VAR_0, VAR_2, VAR_2->active,
         FUNC_0(VAR_0->spec));
 FUNC_2(VAR_0, VAR_3, VAR_2->active);
}
