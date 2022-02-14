
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtrnd_softc {int vtrnd_vq; } ;
struct vq_alloc_info {int dummy; } ;
typedef int device_t ;


 int FUNC_0 (struct vq_alloc_info*,int ,int *,struct vtrnd_softc*,int *,char*,int ) ;
 int FUNC_1 (int ) ;
 struct vtrnd_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int,struct vq_alloc_info*) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_0)
{
 struct vtrnd_softc *VAR_1;
 struct vq_alloc_info VAR_2;

 VAR_1 = FUNC_2(VAR_0);

 FUNC_0(&VAR_2, 0, ((void*)0), VAR_1, &VAR_1->vtrnd_vq,
     "%s request", FUNC_1(VAR_0));

 return (FUNC_3(VAR_0, 0, 1, &VAR_2));
}
