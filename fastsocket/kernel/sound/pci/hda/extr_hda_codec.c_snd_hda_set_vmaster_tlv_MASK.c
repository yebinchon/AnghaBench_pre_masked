
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hda_codec {int dummy; } ;
typedef int hda_nid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (struct hda_codec*,int ,int) ;

void FUNC_1(struct hda_codec *VAR_5, hda_nid_t VAR_6, int VAR_7,
        unsigned int *VAR_8)
{
 u32 VAR_9;
 int VAR_10, VAR_11;

 VAR_9 = FUNC_0(VAR_5, VAR_6, VAR_7);
 VAR_10 = (VAR_9 & VAR_0) >> VAR_1;
 VAR_11 = (VAR_9 & VAR_2) >> VAR_3;
 VAR_11 = (VAR_11 + 1) * 25;
 VAR_8[0] = VAR_4;
 VAR_8[1] = 2 * sizeof(unsigned int);
 VAR_8[2] = -VAR_10 * VAR_11;
 VAR_8[3] = VAR_11;
}
