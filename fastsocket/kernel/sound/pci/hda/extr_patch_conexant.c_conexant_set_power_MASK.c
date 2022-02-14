
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {int dummy; } ;
typedef int hda_nid_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct hda_codec*,int ,int ,int ,unsigned int) ;
 int FUNC_2 (struct hda_codec*,int ,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct hda_codec *VAR_3, hda_nid_t VAR_4,
          unsigned int VAR_5)
{
 if (VAR_5 == VAR_1)
  FUNC_0(100);
 FUNC_1(VAR_3, VAR_4, 0, VAR_2,
       VAR_5);

 if (VAR_5 == VAR_0)
  FUNC_0(10);
 FUNC_2(VAR_3, VAR_4, VAR_5);
}
