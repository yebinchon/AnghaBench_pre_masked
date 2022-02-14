
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct hda_codec*,int ,int ,unsigned int,unsigned int) ;
 scalar_t__ FUNC_3 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct hda_codec *VAR_4, unsigned int VAR_5,
        unsigned int VAR_6)
{
 int VAR_7;
 unsigned long VAR_8 = VAR_3 + FUNC_0(1000);


 do {
  VAR_7 = FUNC_2(VAR_4, VAR_2, 0, VAR_5, VAR_6);
  if ((VAR_7 >= 0) && (VAR_7 != VAR_1))
   return VAR_7;
  FUNC_1(20);
 } while (FUNC_3(VAR_3, VAR_8));

 return -VAR_0;
}
