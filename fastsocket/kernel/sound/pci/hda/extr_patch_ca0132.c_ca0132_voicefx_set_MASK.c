
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hda_codec {struct ca0132_spec* spec; } ;
struct ca0132_spec {scalar_t__* effects_switch; } ;
struct TYPE_2__ {int * reqs; int mid; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 TYPE_1__ VAR_4 ;
 int FUNC_0 (struct hda_codec*,int ,int ,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct hda_codec *VAR_5, int VAR_6)
{
 struct ca0132_spec *VAR_7 = VAR_5->spec;
 unsigned int VAR_8;


 if (VAR_6) {
  VAR_8 = VAR_7->effects_switch[VAR_0 - VAR_1] ?
   VAR_2 : VAR_3;
 } else {
  VAR_8 = VAR_3;
 }

 FUNC_0(VAR_5, VAR_4.mid,
        VAR_4.reqs[0], VAR_8);

 return 1;
}
