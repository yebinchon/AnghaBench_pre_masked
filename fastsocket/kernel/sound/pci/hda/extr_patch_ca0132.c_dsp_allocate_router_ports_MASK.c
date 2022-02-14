
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
struct hda_codec {int dummy; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct hda_codec*,int ,int ) ;
 int FUNC_1 (struct hda_codec*,int ,int ,int ,int ) ;
 int FUNC_2 (struct hda_codec*,int ,int ,int ,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct hda_codec *VAR_6,
         unsigned int VAR_7,
         unsigned int VAR_8,
         unsigned int VAR_9,
         unsigned int *VAR_10)
{
 int VAR_11 = 0;
 int VAR_12;
 u8 VAR_13;

 VAR_11 = FUNC_0(VAR_6, VAR_4, 0);
 if (VAR_11 < 0)
  return VAR_11;

 VAR_13 = VAR_9 << 6;
 VAR_13 |= (VAR_8 - 1) << 4;
 VAR_13 |= VAR_7 - 1;

 FUNC_2(VAR_6, VAR_5, 0,
       VAR_1,
       VAR_13);

 FUNC_2(VAR_6, VAR_5, 0,
       VAR_3,
       VAR_0);

 VAR_11 = FUNC_0(VAR_6, VAR_4, 0);
 if (VAR_11 < 0)
  return VAR_11;

 VAR_12 = FUNC_1(VAR_6, VAR_5, 0,
    VAR_2, 0);

 *VAR_10 = VAR_12;

 return (VAR_12 < 0) ? VAR_12 : 0;
}
