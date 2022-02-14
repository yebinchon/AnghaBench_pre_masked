
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee802_1x_mka_participant {scalar_t__ mn; int mi; } ;
typedef int Boolean ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int) ;

__attribute__((used)) static Boolean
FUNC_1(struct ieee802_1x_mka_participant *VAR_2)
{
 if (FUNC_0(VAR_2->mi, sizeof(VAR_2->mi)) < 0)
  return VAR_0;
 VAR_2->mn = 0;

 return VAR_1;
}
