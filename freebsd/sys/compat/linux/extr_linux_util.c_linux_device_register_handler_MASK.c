
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct linux_device_handler {scalar_t__ linux_major; } ;
struct device_element {int entry; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,struct device_element*,int ) ;
 int FUNC_1 (struct linux_device_handler*,int *,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct device_element* FUNC_2 (int,int ,int ) ;

int
FUNC_3(struct linux_device_handler *VAR_6)
{
 struct device_element *VAR_7;

 if (VAR_6 == ((void*)0))
  return (VAR_0);

 VAR_7 = FUNC_2(sizeof(*VAR_7), VAR_1, VAR_2);
 if (VAR_6->linux_major < 0) {
  VAR_6->linux_major = VAR_4++;
 }
 FUNC_1(VAR_6, &VAR_7->entry, sizeof(*VAR_6));


 FUNC_0(&VAR_3, VAR_7, VAR_5);

 return (0);
}
