
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {int dummy; } ;
typedef int hda_nid_t ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long FUNC_0 (int) ;
 int FUNC_1 (int) ;
 unsigned int FUNC_2 (struct hda_codec*,int ,int ,int ,int ) ;
 scalar_t__ FUNC_3 (unsigned long,unsigned long) ;

__attribute__((used)) static unsigned int FUNC_4(struct hda_codec *VAR_3,
      hda_nid_t VAR_4,
      unsigned int VAR_5)
{
 unsigned long VAR_6 = VAR_2 + FUNC_0(500);
 unsigned int VAR_7, VAR_8;

 for (;;) {
  VAR_7 = FUNC_2(VAR_3, VAR_4, 0,
        VAR_1, 0);
  if (VAR_7 & VAR_0)
   break;
  VAR_8 = (VAR_7 >> 4) & 0x0f;
  if (VAR_8 == VAR_5)
   break;
  if (FUNC_3(VAR_2, VAR_6))
   break;

  FUNC_1(1);
 }
 return VAR_7;
}
