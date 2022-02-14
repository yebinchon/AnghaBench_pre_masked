
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211req {int i_val; } ;
struct bsd_driver_data {int dummy; } ;


 scalar_t__ FUNC_0 (struct bsd_driver_data*,struct ieee80211req*,int,int *,int ) ;

__attribute__((used)) static int
FUNC_1(struct bsd_driver_data *VAR_0, int VAR_1)
{
 struct ieee80211req VAR_2;

 if (FUNC_0(VAR_0, &VAR_2, VAR_1, ((void*)0), 0) < 0)
  return -1;
 return VAR_2.i_val;
}
