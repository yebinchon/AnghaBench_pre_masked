
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ioat_softc {int device; int * res; int * tag; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int *) ;
 int FUNC_1 (int ,int *,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int
FUNC_4(struct ioat_softc *VAR_1)
{

 if (VAR_1->tag != ((void*)0))
  FUNC_1(VAR_1->device, VAR_1->res, VAR_1->tag);

 if (VAR_1->res != ((void*)0))
  FUNC_0(VAR_1->device, VAR_0,
      FUNC_3(VAR_1->res), VAR_1->res);

 FUNC_2(VAR_1->device);
 return (0);
}
