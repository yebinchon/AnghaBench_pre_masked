
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hda_codec {struct ca0132_spec* spec; } ;
struct ca0132_spec {scalar_t__ dsp_state; } ;
struct TYPE_2__ {int params; int mid; int* reqs; unsigned int* def_vals; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__* VAR_6 ;
 int FUNC_0 (struct hda_codec*,int,int,unsigned int) ;

__attribute__((used)) static void FUNC_1(struct hda_codec *VAR_7)
{
 struct ca0132_spec *VAR_8 = VAR_7->spec;
 unsigned int VAR_9;
 int VAR_10;
 int VAR_11, VAR_12;

 if (VAR_8->dsp_state != VAR_0)
  return;


 VAR_10 = VAR_5 + VAR_4 + 1;
 for (VAR_11 = 0; VAR_11 < VAR_10; VAR_11++) {
  for (VAR_12 = 0; VAR_12 <= VAR_6[VAR_11].params; VAR_12++) {
   FUNC_0(VAR_7, VAR_6[VAR_11].mid,
          VAR_6[VAR_11].reqs[VAR_12],
          VAR_6[VAR_11].def_vals[VAR_12]);
  }
 }


 VAR_9 = VAR_3;
 FUNC_0(VAR_7, 0x96, 0x3C, VAR_9);


 FUNC_0(VAR_7, 0x8f, 0x01, VAR_9);


 VAR_9 = VAR_1;
 FUNC_0(VAR_7, 0x80, 0x00, VAR_9);
 FUNC_0(VAR_7, 0x80, 0x01, VAR_9);


 VAR_9 = VAR_1;
 FUNC_0(VAR_7, 0x80, 0x05, VAR_9);


 VAR_9 = VAR_2;
 FUNC_0(VAR_7, 0x31, 0x00, VAR_9);
}
