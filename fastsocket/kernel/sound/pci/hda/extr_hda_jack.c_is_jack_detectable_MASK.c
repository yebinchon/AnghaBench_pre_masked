
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {int jackpoll_interval; scalar_t__ no_jack_detect; } ;
typedef int hda_nid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct hda_codec*,int ) ;
 int FUNC_2 (struct hda_codec*,int ) ;
 int FUNC_3 (struct hda_codec*,int ) ;

bool FUNC_4(struct hda_codec *VAR_3, hda_nid_t VAR_4)
{
 if (VAR_3->no_jack_detect)
  return 0;
 if (!(FUNC_3(VAR_3, VAR_4) & VAR_1))
  return 0;
 if (FUNC_0(FUNC_2(VAR_3, VAR_4)) &
      VAR_0)
  return 0;
 if (!(FUNC_1(VAR_3, VAR_4) & VAR_2) &&
     !VAR_3->jackpoll_interval)
  return 0;
 return 1;
}
