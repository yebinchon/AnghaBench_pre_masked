
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_controller {scalar_t__ msix_enabled; int * res; scalar_t__ tag; int * bar4_resource; int bar4_resource_id; int * resource; int resource_id; int dev; } ;
typedef int device_t ;


 struct nvme_controller* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int ,int *) ;
 int FUNC_2 (int ,int *,scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct nvme_controller*) ;
 int FUNC_5 (struct nvme_controller*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_2)
{
 struct nvme_controller*VAR_3 = FUNC_0(VAR_2);
 int VAR_4;

 VAR_3->dev = VAR_2;
 VAR_4 = FUNC_4(VAR_3);
 if (VAR_4 != 0)
  goto bad;
 FUNC_6(VAR_2);
 FUNC_5(VAR_3);
 return FUNC_3(VAR_2);
bad:
 if (VAR_3->resource != ((void*)0)) {
  FUNC_1(VAR_2, VAR_1,
      VAR_3->resource_id, VAR_3->resource);
 }

 if (VAR_3->bar4_resource != ((void*)0)) {
  FUNC_1(VAR_2, VAR_1,
      VAR_3->bar4_resource_id, VAR_3->bar4_resource);
 }

 if (VAR_3->tag)
  FUNC_2(VAR_2, VAR_3->res, VAR_3->tag);

 if (VAR_3->res)
  FUNC_1(VAR_2, VAR_0,
      FUNC_8(VAR_3->res), VAR_3->res);

 if (VAR_3->msix_enabled)
  FUNC_7(VAR_2);

 return VAR_4;
}
