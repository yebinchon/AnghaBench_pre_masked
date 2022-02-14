
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hda_codec {struct ca0132_spec* spec; } ;
struct ca0132_spec {int chipio_mutex; } ;


 int FUNC_0 (struct hda_codec*,int ) ;
 int FUNC_1 (struct hda_codec*,int const*,unsigned int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct hda_codec *VAR_0,
     u32 VAR_1,
     const u32 *VAR_2,
     unsigned int VAR_3)
{
 struct ca0132_spec *VAR_4 = VAR_0->spec;
 int VAR_5;

 FUNC_2(&VAR_4->chipio_mutex);
 VAR_5 = FUNC_0(VAR_0, VAR_1);
 if (VAR_5 < 0)
  goto error;

 VAR_5 = FUNC_1(VAR_0, VAR_2, VAR_3);
error:
 FUNC_3(&VAR_4->chipio_mutex);

 return VAR_5;
}
