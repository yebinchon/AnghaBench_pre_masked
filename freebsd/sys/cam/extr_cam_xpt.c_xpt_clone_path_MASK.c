
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cam_path {int dummy; } ;
typedef int cam_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int,int ,int ) ;
 int FUNC_1 (struct cam_path*,struct cam_path*) ;

cam_status
FUNC_2(struct cam_path **VAR_4, struct cam_path *VAR_5)
{
 struct cam_path *VAR_6;

 VAR_6 = (struct cam_path *)FUNC_0(sizeof(*VAR_5), VAR_2, VAR_3);
 if (VAR_6 == ((void*)0))
  return(VAR_1);
 FUNC_1(VAR_6, VAR_5);
 *VAR_4 = VAR_6;
 return (VAR_0);
}
