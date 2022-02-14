
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {struct ca0132_spec* spec; } ;
struct ca0132_spec {int chipio_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct hda_codec*,int ,int ,int ,int) ;

__attribute__((used)) static void FUNC_3(struct hda_codec *VAR_3)
{
 struct ca0132_spec *VAR_4 = VAR_3->spec;

 FUNC_0(&VAR_4->chipio_mutex);
 FUNC_2(VAR_3, VAR_2, 0,
       VAR_0, 0);
 FUNC_2(VAR_3, VAR_2, 0,
       VAR_1, 0xff);
 FUNC_2(VAR_3, VAR_2, 0,
       VAR_0, 5);
 FUNC_2(VAR_3, VAR_2, 0,
       VAR_1, 0x0b);
 FUNC_2(VAR_3, VAR_2, 0,
       VAR_0, 6);
 FUNC_2(VAR_3, VAR_2, 0,
       VAR_1, 0xff);
 FUNC_1(&VAR_4->chipio_mutex);
}
