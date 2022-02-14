
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nid_path {int depth; int * path; } ;
struct hda_codec {int dummy; } ;
typedef int hda_nid_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct hda_codec*,int ,int ) ;

__attribute__((used)) static hda_nid_t FUNC_1(struct hda_codec *VAR_1,
          struct nid_path *VAR_2)
{
 int VAR_3;

 for (VAR_3 = VAR_2->depth - 1; VAR_3 >= 0; VAR_3--) {
  if (FUNC_0(VAR_1, VAR_2->path[VAR_3], VAR_0))
   return VAR_2->path[VAR_3];
 }
 return 0;
}
