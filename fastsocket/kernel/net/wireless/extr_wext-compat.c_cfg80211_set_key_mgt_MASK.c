
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int n_akm_suites; int * akm_suites; } ;
struct TYPE_5__ {TYPE_1__ crypto; } ;
struct TYPE_6__ {TYPE_2__ connect; } ;
struct wireless_dev {TYPE_3__ wext; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_0(struct wireless_dev *VAR_5, u32 VAR_6)
{
 int VAR_7 = 0;

 if (VAR_6 & ~(VAR_1 |
   VAR_2))
  return -VAR_0;

 if (VAR_6 & VAR_1) {
  VAR_5->wext.connect.crypto.akm_suites[VAR_7] =
   VAR_3;
  VAR_7++;
 }

 if (VAR_6 & VAR_2) {
  VAR_5->wext.connect.crypto.akm_suites[VAR_7] =
   VAR_4;
  VAR_7++;
 }

 VAR_5->wext.connect.crypto.n_akm_suites = VAR_7;

 return 0;
}
