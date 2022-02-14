
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {int dummy; } ;
typedef int hda_nid_t ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (struct hda_codec*,int ,int ,int ,int ) ;

__attribute__((used)) static inline bool
FUNC_1(struct hda_codec *VAR_2, hda_nid_t VAR_3,
     unsigned int VAR_4)
{
 unsigned int VAR_5 = FUNC_0(VAR_2, VAR_3, 0,
      VAR_1, 0);
 if (VAR_5 & VAR_0)
  return 1;
 VAR_5 = (VAR_5 >> 4) & 0x0f;
 return (VAR_5 == VAR_4);
}
