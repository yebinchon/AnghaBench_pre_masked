
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {struct ca0132_spec* spec; } ;
struct ca0132_spec {int chipio_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct hda_codec*,int ,unsigned int) ;
 int FUNC_1 (struct hda_codec*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct hda_codec*,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct hda_codec *VAR_6, unsigned int VAR_7)
{
 struct ca0132_spec *VAR_8 = VAR_6->spec;
 int VAR_9;

 FUNC_1(VAR_6);

 FUNC_2(&VAR_8->chipio_mutex);
 VAR_9 = FUNC_0(VAR_6, VAR_2,
       VAR_7 & 0xffff);
 if (VAR_9 < 0)
  goto error;

 VAR_9 = FUNC_0(VAR_6, VAR_1,
        VAR_7 >> 16);
 if (VAR_9 < 0)
  goto error;


 VAR_9 = FUNC_4(VAR_6, VAR_5, 0,
        VAR_3, 0);
error:
 FUNC_3(&VAR_8->chipio_mutex);

 return (VAR_9 == VAR_4) ?
   -VAR_0 : 0;
}
