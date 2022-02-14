
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {TYPE_3__* ports_guid; } ;
struct TYPE_12__ {TYPE_4__ alias_guid; } ;
struct mlx4_ib_dev {TYPE_5__ sriov; TYPE_6__* dev; } ;
typedef int __be64 ;
struct TYPE_13__ {TYPE_1__* persist; } ;
struct TYPE_10__ {TYPE_2__* all_rec_per_port; } ;
struct TYPE_9__ {int * all_recs; } ;
struct TYPE_8__ {int num_vfs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_6__*,int,int) ;
 int FUNC_2 (TYPE_6__*,int) ;
 int FUNC_3 (char*,int,long long,int) ;

__attribute__((used)) static void FUNC_4(struct mlx4_ib_dev *VAR_3, int VAR_4)
{
 int VAR_5, VAR_6, VAR_7;
 __be64 VAR_8;


 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
   VAR_7 = VAR_5 * VAR_1 + VAR_6;

   if (!VAR_7 || VAR_7 > VAR_3->dev->persist->num_vfs ||
       !FUNC_2(VAR_3->dev, VAR_7))
    continue;
   VAR_8 = FUNC_1(VAR_3->dev, VAR_7, VAR_4);
   *(__be64 *)&VAR_3->sriov.alias_guid.ports_guid[VAR_4 - 1].
    all_rec_per_port[VAR_5].all_recs
    [VAR_0 * VAR_6] = VAR_8;
   FUNC_3("guid was set, entry=%d, val=0x%llx, port=%d\n",
     VAR_7,
     (long long)FUNC_0(VAR_8),
     VAR_4);
  }
 }
}
