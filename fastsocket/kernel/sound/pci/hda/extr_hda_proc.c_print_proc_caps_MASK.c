
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_info_buffer {int dummy; } ;
struct hda_codec {int dummy; } ;
typedef int hda_nid_t ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int FUNC_0 (struct hda_codec*,int ,int ) ;
 int FUNC_1 (struct snd_info_buffer*,char*,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct snd_info_buffer *VAR_4,
       struct hda_codec *VAR_5, hda_nid_t VAR_6)
{
 unsigned int VAR_7 = FUNC_0(VAR_5, VAR_6,
          VAR_0);
 FUNC_1(VAR_4, "  Processing caps: benign=%d, ncoeff=%d\n",
      VAR_7 & VAR_1,
      (VAR_7 & VAR_2) >> VAR_3);
}
