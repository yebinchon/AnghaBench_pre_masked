
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct cdev {int si_drv1; } ;
struct agp_softc {scalar_t__ as_state; scalar_t__ as_isopen; int as_memory; } ;
struct agp_memory {scalar_t__ am_is_bound; } ;
typedef int device_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,struct agp_memory*) ;
 int FUNC_1 (int ,struct agp_memory*) ;
 struct agp_memory* FUNC_2 (int *) ;
 int FUNC_3 (int ,scalar_t__) ;
 struct agp_softc* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(struct cdev *VAR_1, int VAR_2, int VAR_3, struct thread *VAR_4)
{
 device_t VAR_5 = VAR_1->si_drv1;
 struct agp_softc *VAR_6 = FUNC_4(VAR_5);
 struct agp_memory *VAR_7;




 while ((VAR_7 = FUNC_2(&VAR_6->as_memory)) != ((void*)0)) {
  if (VAR_7->am_is_bound)
   FUNC_1(VAR_5, VAR_7);
  FUNC_0(VAR_5, VAR_7);
 }
 if (VAR_6->as_state == VAR_0)
  FUNC_3(VAR_5, VAR_0);
 VAR_6->as_isopen = 0;
 FUNC_5(VAR_5);

 return 0;
}
