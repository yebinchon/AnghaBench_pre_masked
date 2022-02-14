
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {scalar_t__ vendor_id; } ;
struct alc_codec_rename_table {scalar_t__ vendor_id; int coef_mask; int coef_bits; int name; } ;


 int FUNC_0 (struct hda_codec*,int ) ;
 int FUNC_1 (struct hda_codec*) ;
 struct alc_codec_rename_table* VAR_0 ;

__attribute__((used)) static int FUNC_2(struct hda_codec *VAR_1)
{
 const struct alc_codec_rename_table *VAR_2;

 for (VAR_2 = VAR_0; VAR_2->vendor_id; VAR_2++) {
  if (VAR_2->vendor_id != VAR_1->vendor_id)
   continue;
  if ((FUNC_1(VAR_1) & VAR_2->coef_mask) == VAR_2->coef_bits)
   return FUNC_0(VAR_1, VAR_2->name);
 }
 return 0;
}
