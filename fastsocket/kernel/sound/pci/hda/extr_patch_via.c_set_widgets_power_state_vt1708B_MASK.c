
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ indep_hp_enabled; } ;
struct via_spec {scalar_t__ codec_type; TYPE_1__ gen; } ;
struct hda_codec {int vendor_id; struct via_spec* spec; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct hda_codec*,int,unsigned int*) ;
 scalar_t__ FUNC_1 (struct hda_codec*) ;
 int FUNC_2 (struct hda_codec*,int,int ,int ,int) ;
 int FUNC_3 (struct hda_codec*,int,unsigned int) ;

__attribute__((used)) static void FUNC_4(struct hda_codec *VAR_5)
{
 struct via_spec *VAR_6 = VAR_5->spec;
 int VAR_7;
 unsigned int VAR_8;
 int VAR_9 = 0;
 if ((VAR_6->codec_type != VAR_3) &&
     (VAR_5->vendor_id != 0x11064397))
  VAR_9 = 1;


 VAR_7 =
 (FUNC_2(VAR_5, 0x17, 0, VAR_2, 0x00)
  == ((VAR_6->codec_type == VAR_4) ? 5 : 0));


 VAR_8 = VAR_1;
 FUNC_0(VAR_5, 0x1a, &VAR_8);
 FUNC_0(VAR_5, 0x1b, &VAR_8);
 FUNC_0(VAR_5, 0x1e, &VAR_8);
 if (VAR_7)
  VAR_8 = VAR_0;

 FUNC_3(VAR_5, 0x17, VAR_8);
 FUNC_3(VAR_5, 0x13, VAR_8);
 FUNC_3(VAR_5, 0x14, VAR_8);



 VAR_8 = VAR_1;
 FUNC_0(VAR_5, 0x19, &VAR_8);
 if (FUNC_1(VAR_5))
  FUNC_0(VAR_5, 0x1b, &VAR_8);
 FUNC_3(VAR_5, 0x18, VAR_8);
 FUNC_3(VAR_5, 0x11, VAR_8);


 if (VAR_9) {
  VAR_8 = VAR_1;
  FUNC_0(VAR_5, 0x22, &VAR_8);
  if (FUNC_1(VAR_5))
   FUNC_0(VAR_5, 0x1a, &VAR_8);
  FUNC_3(VAR_5, 0x26, VAR_8);
  FUNC_3(VAR_5, 0x24, VAR_8);
 } else if (VAR_5->vendor_id == 0x11064397) {

  VAR_8 = VAR_1;
  FUNC_0(VAR_5, 0x23, &VAR_8);
  if (FUNC_1(VAR_5))
   FUNC_0(VAR_5, 0x1a, &VAR_8);
  FUNC_3(VAR_5, 0x27, VAR_8);
  FUNC_3(VAR_5, 0x25, VAR_8);
 }


 VAR_8 = VAR_1;

 FUNC_0(VAR_5, 0x1c, &VAR_8);
 FUNC_0(VAR_5, 0x1d, &VAR_8);
 if (VAR_9)
  FUNC_0(VAR_5, 0x23, &VAR_8);


 FUNC_3(VAR_5, 0x16, VAR_7 ? VAR_0 : VAR_8);
 FUNC_3(VAR_5, 0x10, VAR_8);
 if (VAR_9) {
  FUNC_3(VAR_5, 0x25, VAR_8);
  FUNC_3(VAR_5, 0x27, VAR_8);
 } else if (VAR_5->vendor_id == 0x11064397 && VAR_6->gen.indep_hp_enabled)
  FUNC_3(VAR_5, 0x25, VAR_8);
}
