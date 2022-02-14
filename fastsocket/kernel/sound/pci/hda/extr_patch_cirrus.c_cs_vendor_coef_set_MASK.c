
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {struct cs_spec* spec; } ;
struct cs_spec {int vendor_nid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hda_codec*,int ,int ,int ,unsigned int) ;

__attribute__((used)) static inline void FUNC_1(struct hda_codec *VAR_2, unsigned int VAR_3,
          unsigned int VAR_4)
{
 struct cs_spec *VAR_5 = VAR_2->spec;
 FUNC_0(VAR_2, VAR_5->vendor_nid, 0,
       VAR_0, VAR_3);
 FUNC_0(VAR_2, VAR_5->vendor_nid, 0,
       VAR_1, VAR_4);
}
