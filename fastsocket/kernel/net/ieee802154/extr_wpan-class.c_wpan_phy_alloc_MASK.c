
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * class; } ;
struct wpan_phy {TYPE_1__ dev; scalar_t__ idx; int pib_lock; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,char*,scalar_t__) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct wpan_phy*) ;
 struct wpan_phy* FUNC_3 (int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_8 (scalar_t__) ;
 int VAR_3 ;

struct wpan_phy *FUNC_9(size_t VAR_4)
{
 struct wpan_phy *VAR_5 = FUNC_3(sizeof(*VAR_5) + VAR_4,
   VAR_0);

 FUNC_5(&VAR_3);
 VAR_5->idx = VAR_2++;
 if (FUNC_7(!FUNC_8(VAR_5->idx))) {
  VAR_2--;
  FUNC_6(&VAR_3);
  FUNC_2(VAR_5);
  return ((void*)0);
 }
 FUNC_6(&VAR_3);

 FUNC_4(&VAR_5->pib_lock);

 FUNC_1(&VAR_5->dev);
 FUNC_0(&VAR_5->dev, "wpan-phy%d", VAR_5->idx);

 VAR_5->dev.class = &VAR_1;

 return VAR_5;
}
