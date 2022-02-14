
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {int dummy; } ;
typedef int hda_nid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hda_codec*,int ,int ,int) ;

__attribute__((used)) static inline void FUNC_1(struct hda_codec *VAR_2, hda_nid_t VAR_3,
           int VAR_4, int VAR_5)
{
 if (VAR_4 != -1)
  FUNC_0(VAR_2, VAR_3, VAR_0, VAR_4);
 if (VAR_5 != -1)
  FUNC_0(VAR_2, VAR_3, VAR_1, VAR_5);
}
