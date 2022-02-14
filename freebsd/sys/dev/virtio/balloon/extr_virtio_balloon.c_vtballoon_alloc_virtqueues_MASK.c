
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtballoon_softc {int vtballoon_deflate_vq; int vtballoon_inflate_vq; int vtballoon_dev; } ;
struct vq_alloc_info {int dummy; } ;
typedef int device_t ;


 int FUNC_0 (struct vq_alloc_info*,int ,int ,struct vtballoon_softc*,int *,char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int,struct vq_alloc_info*) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_3(struct vtballoon_softc *VAR_1)
{
 device_t VAR_2;
 struct vq_alloc_info VAR_3[2];
 int VAR_4;

 VAR_2 = VAR_1->vtballoon_dev;
 VAR_4 = 2;

 FUNC_0(&VAR_3[0], 0, VAR_0, VAR_1,
     &VAR_1->vtballoon_inflate_vq, "%s inflate", FUNC_1(VAR_2));

 FUNC_0(&VAR_3[1], 0, VAR_0, VAR_1,
     &VAR_1->vtballoon_deflate_vq, "%s deflate", FUNC_1(VAR_2));

 return (FUNC_2(VAR_2, 0, VAR_4, VAR_3));
}
