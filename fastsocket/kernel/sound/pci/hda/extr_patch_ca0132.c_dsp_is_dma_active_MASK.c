
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {int dummy; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hda_codec*,int ,unsigned int*) ;

__attribute__((used)) static bool FUNC_1(struct hda_codec *VAR_2, unsigned int VAR_3)
{
 unsigned int VAR_4;

 FUNC_0(VAR_2, VAR_1, &VAR_4);

 return ((VAR_4 & (1 <<
   (VAR_0 + VAR_3))) != 0);
}
