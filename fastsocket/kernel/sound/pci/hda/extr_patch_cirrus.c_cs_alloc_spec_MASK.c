
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {struct cs_spec* spec; } ;
struct cs_spec {int vendor_nid; int gen; } ;


 int VAR_0 ;
 struct cs_spec* FUNC_0 (int,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static struct cs_spec *FUNC_2(struct hda_codec *VAR_1, int VAR_2)
{
 struct cs_spec *VAR_3;

 VAR_3 = FUNC_0(sizeof(*VAR_3), VAR_0);
 if (!VAR_3)
  return ((void*)0);
 VAR_1->spec = VAR_3;
 VAR_3->vendor_nid = VAR_2;
 FUNC_1(&VAR_3->gen);

 return VAR_3;
}
