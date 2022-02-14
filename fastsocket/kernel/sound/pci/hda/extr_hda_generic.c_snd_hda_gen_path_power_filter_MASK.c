
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {int dummy; } ;
typedef int hda_nid_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct hda_codec*,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct hda_codec*,int ) ;

__attribute__((used)) static unsigned int FUNC_3(struct hda_codec *VAR_3,
        hda_nid_t VAR_4,
        unsigned int VAR_5)
{
 if (VAR_5 != VAR_0)
  return VAR_5;
 if (FUNC_1(FUNC_0(VAR_3, VAR_4)) >= VAR_2)
  return VAR_5;
 if (FUNC_2(VAR_3, VAR_4))
  return VAR_5;
 return VAR_1;
}
