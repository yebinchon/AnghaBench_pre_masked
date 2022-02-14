
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {struct ad198x_spec* spec; } ;
struct ad198x_spec {scalar_t__ jack_present; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (struct hda_codec*,int,int ,int ,int ) ;
 int FUNC_1 (struct hda_codec*,int,int ,int ,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct hda_codec *VAR_2)
{
 struct ad198x_spec *VAR_3 = VAR_2->spec;
 unsigned int VAR_4;

 if (VAR_3->jack_present)
  VAR_4 = VAR_0;
 else

  VAR_4 = FUNC_0(VAR_2, 0x1a, 0, VAR_1, 0);
 FUNC_1(VAR_2, 0x1b, VAR_1, 0,
     VAR_0, VAR_4);
}
