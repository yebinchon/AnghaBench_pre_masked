
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource_list {int dummy; } ;
struct superio_devinfo {struct resource_list resources; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct superio_devinfo* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct resource_list*,int ,int ,int ) ;
 int FUNC_2 (struct superio_devinfo*,char*) ;

__attribute__((used)) static void
FUNC_3(device_t VAR_3, device_t VAR_4)
{
 struct superio_devinfo *VAR_5;
 struct resource_list *VAR_6;

 VAR_5 = FUNC_0(VAR_4);
 VAR_6 = &VAR_5->resources;

 if (FUNC_1(VAR_6, VAR_3, VAR_4, VAR_1) != 0)
  FUNC_2(VAR_5, "Device leaked IRQ resources\n");
 if (FUNC_1(VAR_6, VAR_3, VAR_4, VAR_2) != 0)
  FUNC_2(VAR_5, "Device leaked memory resources\n");
 if (FUNC_1(VAR_6, VAR_3, VAR_4, VAR_0) != 0)
  FUNC_2(VAR_5, "Device leaked I/O resources\n");
}
