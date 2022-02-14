
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct mlx4_en_priv {TYPE_2__* mdev; } ;
struct TYPE_3__ {scalar_t__ udp_rss; } ;
struct TYPE_4__ {TYPE_1__ profile; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

u8 FUNC_0(struct mlx4_en_priv *VAR_6)
{
 u8 VAR_7 = (VAR_0 | VAR_2 | VAR_1 |
   VAR_3);

 if (VAR_6->mdev->profile.udp_rss)
  VAR_7 |= VAR_4 | VAR_5;
 return (VAR_7);
}
