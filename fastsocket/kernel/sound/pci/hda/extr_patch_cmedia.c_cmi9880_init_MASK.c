
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {struct cmi_spec* spec; } ;
struct cmi_spec {scalar_t__ board_config; int multi_init; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct hda_codec*,int ) ;

__attribute__((used)) static int FUNC_1(struct hda_codec *VAR_4)
{
 struct cmi_spec *VAR_5 = VAR_4->spec;
 if (VAR_5->board_config == VAR_0)
  FUNC_0(VAR_4, VAR_2);
 else
  FUNC_0(VAR_4, VAR_3);
 if (VAR_5->board_config == VAR_1)
  FUNC_0(VAR_4, VAR_5->multi_init);
 return 0;
}
