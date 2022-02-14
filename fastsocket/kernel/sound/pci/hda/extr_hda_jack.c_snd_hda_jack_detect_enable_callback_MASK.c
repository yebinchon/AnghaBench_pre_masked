
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_jack_tbl {int jack_detect; unsigned char action; int tag; scalar_t__ callback; } ;
struct hda_codec {scalar_t__ jackpoll_interval; } ;
typedef int hda_nid_t ;
typedef scalar_t__ hda_jack_callback ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hda_codec*,int ,int ,int ,int) ;
 struct hda_jack_tbl* FUNC_1 (struct hda_codec*,int ) ;

int FUNC_2(struct hda_codec *VAR_3, hda_nid_t VAR_4,
     unsigned char VAR_5,
     hda_jack_callback VAR_6)
{
 struct hda_jack_tbl *VAR_7 = FUNC_1(VAR_3, VAR_4);
 if (!VAR_7)
  return -VAR_2;
 if (VAR_7->jack_detect)
  return 0;
 VAR_7->jack_detect = 1;
 if (VAR_5)
  VAR_7->action = VAR_5;
 if (VAR_6)
  VAR_7->callback = VAR_6;
 if (VAR_3->jackpoll_interval > 0)
  return 0;
 return FUNC_0(VAR_3, VAR_4, 0,
      VAR_1,
      VAR_0 | VAR_7->tag);
}
