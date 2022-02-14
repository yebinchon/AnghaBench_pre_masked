
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct fsi_priv {int dummy; } ;
struct TYPE_4__ {TYPE_1__* info; } ;
struct TYPE_3__ {int portb_flags; int porta_flags; } ;


 int FUNC_0 (struct fsi_priv*) ;
 TYPE_2__* VAR_0 ;

__attribute__((used)) static u32 FUNC_1(struct fsi_priv *VAR_1)
{
 int VAR_2 = FUNC_0(VAR_1);

 return VAR_2 ? VAR_0->info->porta_flags :
  VAR_0->info->portb_flags;
}
