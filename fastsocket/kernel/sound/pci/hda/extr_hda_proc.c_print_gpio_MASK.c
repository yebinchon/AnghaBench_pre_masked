
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_info_buffer {int dummy; } ;
struct hda_codec {int nids; int mixers; int afg; } ;
typedef int hda_nid_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (struct snd_info_buffer*,struct hda_codec*,int ,int *) ;
 unsigned int FUNC_1 (struct hda_codec*,int ,int ,int ,int ) ;
 unsigned int FUNC_2 (struct hda_codec*,int ,int ) ;
 int FUNC_3 (struct snd_info_buffer*,char*,int,int,int,int,int,...) ;

__attribute__((used)) static void FUNC_4(struct snd_info_buffer *VAR_14,
         struct hda_codec *VAR_15, hda_nid_t VAR_16)
{
 unsigned int VAR_17 =
  FUNC_2(VAR_15, VAR_15->afg, VAR_7);
 unsigned int VAR_18, VAR_19, VAR_20, VAR_21, VAR_22, VAR_23;
 int VAR_24, VAR_25;
 FUNC_3(VAR_14, "GPIO: io=%d, o=%d, i=%d, "
      "unsolicited=%d, wake=%d\n",
      VAR_17 & VAR_0,
      (VAR_17 & VAR_3) >> VAR_4,
      (VAR_17 & VAR_1) >> VAR_2,
      (VAR_17 & VAR_5) ? 1 : 0,
      (VAR_17 & VAR_6) ? 1 : 0);
 VAR_25 = VAR_17 & VAR_0;
 if (!VAR_25 || VAR_25 > 8)
  return;
 VAR_18 = FUNC_1(VAR_15, VAR_16, 0,
        VAR_10, 0);
 VAR_19 = FUNC_1(VAR_15, VAR_16, 0,
           VAR_9, 0);
 VAR_20 = FUNC_1(VAR_15, VAR_16, 0,
      VAR_13, 0);
 VAR_21 = FUNC_1(VAR_15, VAR_16, 0,
        VAR_12, 0);
 VAR_22 = FUNC_1(VAR_15, VAR_16, 0,
        VAR_11, 0);
 VAR_23 = FUNC_1(VAR_15, VAR_16, 0,
      VAR_8, 0);
 for (VAR_24 = 0; VAR_24 < VAR_25; ++VAR_24)
  FUNC_3(VAR_14,
       "  IO[%d]: enable=%d, dir=%d, wake=%d, "
       "sticky=%d, data=%d, unsol=%d\n", VAR_24,
       (VAR_18 & (1<<VAR_24)) ? 1 : 0,
       (VAR_19 & (1<<VAR_24)) ? 1 : 0,
       (VAR_20 & (1<<VAR_24)) ? 1 : 0,
       (VAR_22 & (1<<VAR_24)) ? 1 : 0,
       (VAR_23 & (1<<VAR_24)) ? 1 : 0,
       (VAR_21 & (1<<VAR_24)) ? 1 : 0);

 FUNC_0(VAR_14, VAR_15, VAR_16, &VAR_15->mixers);
 FUNC_0(VAR_14, VAR_15, VAR_16, &VAR_15->nids);
}
