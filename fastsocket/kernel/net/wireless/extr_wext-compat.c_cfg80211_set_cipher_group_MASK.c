
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {scalar_t__ cipher_group; } ;
struct TYPE_4__ {TYPE_3__ crypto; } ;
struct TYPE_5__ {TYPE_1__ connect; } ;
struct wireless_dev {TYPE_2__ wext; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;

__attribute__((used)) static int FUNC_0(struct wireless_dev *VAR_12, u32 VAR_13)
{
 if (VAR_13 & VAR_6)
  VAR_12->wext.connect.crypto.cipher_group =
   VAR_11;
 else if (VAR_13 & VAR_5)
  VAR_12->wext.connect.crypto.cipher_group =
   VAR_10;
 else if (VAR_13 & VAR_4)
  VAR_12->wext.connect.crypto.cipher_group =
   VAR_9;
 else if (VAR_13 & VAR_2)
  VAR_12->wext.connect.crypto.cipher_group =
   VAR_8;
 else if (VAR_13 & VAR_1)
  VAR_12->wext.connect.crypto.cipher_group =
   VAR_7;
 else if (VAR_13 & VAR_3)
  VAR_12->wext.connect.crypto.cipher_group = 0;
 else
  return -VAR_0;

 return 0;
}
