
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int auth_type; } ;
struct TYPE_4__ {TYPE_1__ connect; } ;
struct wireless_dev {TYPE_2__ wext; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_0(struct wireless_dev *VAR_8,
     s32 VAR_9)
{
 int VAR_10 = 0;

 if (!VAR_9)
  return -VAR_0;

 if (VAR_9 & ~(VAR_2 |
    VAR_3 |
    VAR_1))
  return -VAR_0;

 if (VAR_9 & VAR_2) {
  VAR_10++;
  VAR_8->wext.connect.auth_type = VAR_6;
 }

 if (VAR_9 & VAR_3) {
  VAR_10++;
  VAR_8->wext.connect.auth_type = VAR_7;
 }

 if (VAR_9 & VAR_1) {
  VAR_10++;
  VAR_8->wext.connect.auth_type = VAR_5;
 }

 if (VAR_10 > 1)
  VAR_8->wext.connect.auth_type = VAR_4;

 return 0;
}
