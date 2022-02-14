
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtblk_softc {int vtblk_vq; int vtblk_max_nsegs; int vtblk_dev; } ;
struct vq_alloc_info {int dummy; } ;
typedef int device_t ;


 int FUNC_0 (struct vq_alloc_info*,int ,int ,struct vtblk_softc*,int *,char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int,struct vq_alloc_info*) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_3(struct vtblk_softc *VAR_1)
{
 device_t VAR_2;
 struct vq_alloc_info VAR_3;

 VAR_2 = VAR_1->vtblk_dev;

 FUNC_0(&VAR_3, VAR_1->vtblk_max_nsegs,
     VAR_0, VAR_1, &VAR_1->vtblk_vq,
     "%s request", FUNC_1(VAR_2));

 return (FUNC_2(VAR_2, 0, 1, &VAR_3));
}
