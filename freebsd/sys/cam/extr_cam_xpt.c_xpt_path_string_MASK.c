
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbuf {int dummy; } ;
struct cam_path {int dummy; } ;


 int FUNC_0 (struct sbuf*) ;
 int FUNC_1 (struct sbuf*,char*,size_t,int ) ;
 int FUNC_2 (struct cam_path*,struct sbuf*) ;

int
FUNC_3(struct cam_path *VAR_0, char *VAR_1, size_t VAR_2)
{
 struct sbuf VAR_3;
 int VAR_4;

 FUNC_1(&VAR_3, VAR_1, VAR_2, 0);
 VAR_4 = FUNC_2(VAR_0, &VAR_3);
 FUNC_0(&VAR_3);
 return (VAR_4);
}
