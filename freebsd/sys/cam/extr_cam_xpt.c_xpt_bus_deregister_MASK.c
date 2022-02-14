
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cam_path {int bus; } ;
typedef int path_id_t ;
typedef scalar_t__ int32_t ;
typedef scalar_t__ cam_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,struct cam_path*,int *) ;
 scalar_t__ FUNC_1 (struct cam_path*,int *,int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct cam_path*) ;

int32_t
FUNC_4(path_id_t VAR_5)
{
 struct cam_path VAR_6;
 cam_status VAR_7;

 VAR_7 = FUNC_1(&VAR_6, ((void*)0), VAR_5,
      VAR_4, VAR_2);
 if (VAR_7 != VAR_3)
  return (VAR_7);

 FUNC_0(VAR_0, &VAR_6, ((void*)0));
 FUNC_0(VAR_1, &VAR_6, ((void*)0));


 FUNC_2(VAR_6.bus);
 FUNC_3(&VAR_6);

 return (VAR_3);
}
