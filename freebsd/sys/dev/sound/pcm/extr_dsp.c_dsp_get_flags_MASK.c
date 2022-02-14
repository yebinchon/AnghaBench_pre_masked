
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
 int FUNC_2 (int *) ;

__attribute__((used)) static uint32_t
FUNC_3(struct cdev *VAR_1)
{
 device_t VAR_2;

 VAR_2 = FUNC_1(VAR_0, FUNC_0(VAR_1));

 return ((VAR_2 != ((void*)0)) ? FUNC_2(VAR_2) : 0xffffffff);
}
