
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nid_path {int * path; } ;
struct hda_codec {int dummy; } ;
typedef int hda_nid_t ;


 int VAR_0 ;
 int FUNC_0 (struct hda_codec*,int ,int ,int ,int ,int) ;
 int FUNC_1 (struct hda_codec*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct hda_codec *VAR_1, struct nid_path *VAR_2,
        int VAR_3, bool VAR_4)
{
 hda_nid_t VAR_5 = VAR_2->path[VAR_3];
 FUNC_1(VAR_1, VAR_5, VAR_0, 0);
 FUNC_0(VAR_1, VAR_5, VAR_0, 0, 0, VAR_4);
}
