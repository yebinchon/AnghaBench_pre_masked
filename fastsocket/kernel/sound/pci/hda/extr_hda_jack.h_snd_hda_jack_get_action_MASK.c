
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_jack_tbl {int jack_dirty; unsigned char action; } ;
struct hda_codec {int dummy; } ;


 struct hda_jack_tbl* FUNC_0 (struct hda_codec*,unsigned int) ;

__attribute__((used)) static inline unsigned char
FUNC_1(struct hda_codec *VAR_0, unsigned int VAR_1)
{
 struct hda_jack_tbl *VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (VAR_2) {
  VAR_2->jack_dirty = 1;
  return VAR_2->action;
 }
 return 0;
}
