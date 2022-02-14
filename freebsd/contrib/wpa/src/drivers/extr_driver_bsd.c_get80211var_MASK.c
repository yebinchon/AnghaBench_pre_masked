
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211req {int i_len; } ;
struct bsd_driver_data {int dummy; } ;


 scalar_t__ FUNC_0 (struct bsd_driver_data*,struct ieee80211req*,int,void*,int) ;

__attribute__((used)) static int
FUNC_1(struct bsd_driver_data *VAR_0, int VAR_1, void *VAR_2, int VAR_3)
{
 struct ieee80211req VAR_4;

 if (FUNC_0(VAR_0, &VAR_4, VAR_1, VAR_2, VAR_3) < 0)
  return -1;
 return VAR_4.i_len;
}
