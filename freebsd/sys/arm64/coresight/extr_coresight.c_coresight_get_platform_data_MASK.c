
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct coresight_platform_data {int in_ports; int out_ports; int endpoints; int mtx_lock; } ;
typedef int phandle_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ,struct coresight_platform_data*) ;
 int FUNC_2 (int ,struct coresight_platform_data*) ;
 struct coresight_platform_data* FUNC_3 (int,int ,int) ;
 int FUNC_4 (int *,char*,int *,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,int,int) ;

struct coresight_platform_data *
FUNC_7(device_t VAR_5)
{
 struct coresight_platform_data *VAR_6;
 phandle_t VAR_7;

 VAR_7 = FUNC_5(VAR_5);

 VAR_6 = FUNC_3(sizeof(struct coresight_platform_data),
     VAR_1, VAR_2 | VAR_3);
 FUNC_4(&VAR_6->mtx_lock, "Coresight Platform Data", ((void*)0), VAR_0);
 FUNC_0(&VAR_6->endpoints);

 FUNC_1(VAR_7, VAR_6);
 FUNC_2(VAR_7, VAR_6);

 if (VAR_4)
  FUNC_6("Total ports: in %d out %d\n",
      VAR_6->in_ports, VAR_6->out_ports);

 return (VAR_6);
}
