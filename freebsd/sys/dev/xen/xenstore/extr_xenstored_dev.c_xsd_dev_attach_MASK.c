
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cdev {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct cdev* FUNC_0 (int *,int ,int ,int ,int,char*) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_1(device_t VAR_4)
{
 struct cdev *VAR_5;

 VAR_5 = FUNC_0(&VAR_3, 0, VAR_2, VAR_1, 0400,
     "xen/xenstored");
 if (VAR_5 == ((void*)0))
  return (VAR_0);

 return (0);
}
