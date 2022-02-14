
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct cdev {int dummy; } ;
typedef int * device_t ;


 int FUNC_0 (struct cdev*) ;
 int * FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static void
FUNC_3(struct cdev *VAR_1, uint32_t VAR_2)
{
 device_t VAR_3;

 VAR_3 = FUNC_1(VAR_0, FUNC_0(VAR_1));

 if (VAR_3 != ((void*)0))
  FUNC_2(VAR_3, VAR_2);
}
