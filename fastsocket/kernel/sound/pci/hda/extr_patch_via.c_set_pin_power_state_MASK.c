
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct via_spec {unsigned int no_pin_power_ctl; } ;
struct hda_codec {struct via_spec* spec; } ;
typedef int hda_nid_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 scalar_t__ FUNC_0 (unsigned int) ;
 scalar_t__ FUNC_1 (struct hda_codec*,int ) ;
 scalar_t__ FUNC_2 (struct hda_codec*) ;
 unsigned int FUNC_3 (struct hda_codec*,int ) ;
 unsigned int FUNC_4 (struct hda_codec*,int ) ;
 int FUNC_5 (struct hda_codec*,int ,unsigned int) ;

__attribute__((used)) static void FUNC_6(struct hda_codec *VAR_6, hda_nid_t VAR_7,
    unsigned int *VAR_8)
{
 unsigned VAR_9;
 unsigned VAR_10 = FUNC_3(VAR_6, VAR_7);
 unsigned VAR_11 = (VAR_10 & VAR_0)
  >> VAR_2
  & VAR_1;
 struct via_spec *VAR_12 = VAR_6->spec;
 unsigned VAR_13 = 0;

 VAR_11 |= VAR_12->no_pin_power_ctl;
 if (!VAR_11)
  VAR_13 = FUNC_4(VAR_6, VAR_7);
 if ((FUNC_2(VAR_6) && FUNC_1(VAR_6, VAR_7))
     || ((VAR_11 || VAR_13)
  && FUNC_0(VAR_10) != VAR_3)) {
  *VAR_8 = VAR_4;
  VAR_9 = VAR_4;
 } else
  VAR_9 = VAR_5;

 FUNC_5(VAR_6, VAR_7, VAR_9);
}
