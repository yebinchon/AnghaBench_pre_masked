
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hda_codec {struct conexant_spec* spec; } ;
struct conexant_spec {size_t mic_boost; scalar_t__ thinkpad; scalar_t__ ideapad; } ;
struct TYPE_4__ {TYPE_1__* items; } ;
struct TYPE_3__ {int index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__ VAR_5 ;
 int FUNC_0 (struct hda_codec*,int,int ,int ,int) ;

__attribute__((used)) static void FUNC_1(struct hda_codec *VAR_6)
{
 struct conexant_spec *VAR_7 = VAR_6->spec;
 FUNC_0(VAR_6, 0x17, 0,
  VAR_4,
  VAR_3 | VAR_1 | VAR_2 |
   VAR_5.items[VAR_7->mic_boost].index);
 if (VAR_7->ideapad || VAR_7->thinkpad) {

  FUNC_0(VAR_6, 0x23, 0,
   VAR_4,
   VAR_3 | VAR_1 | VAR_0 |
    VAR_5.
     items[VAR_7->mic_boost].index);
 }
}
