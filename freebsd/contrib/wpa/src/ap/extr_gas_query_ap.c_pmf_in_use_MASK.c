
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sta_info {int flags; } ;
struct hostapd_data {int dummy; } ;


 int VAR_0 ;
 struct sta_info* FUNC_0 (struct hostapd_data*,int const*) ;

__attribute__((used)) static int FUNC_1(struct hostapd_data *VAR_1, const u8 *VAR_2)
{
 struct sta_info *VAR_3;

 VAR_3 = FUNC_0(VAR_1, VAR_2);
 return VAR_3 && (VAR_3->flags & VAR_0);
}
