
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee802_1x_mka_ki {scalar_t__ kn; int mi; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct ieee802_1x_mka_ki *VAR_1,
         struct ieee802_1x_mka_ki *VAR_2)
{
 return FUNC_0(VAR_1->mi, VAR_2->mi, VAR_0) == 0 &&
  VAR_1->kn == VAR_2->kn;
}
