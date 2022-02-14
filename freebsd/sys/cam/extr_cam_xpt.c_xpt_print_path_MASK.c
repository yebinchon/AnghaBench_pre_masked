
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbuf {int dummy; } ;
struct cam_path {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*) ;
 char* FUNC_1 (struct sbuf*) ;
 int FUNC_2 (struct sbuf*) ;
 int FUNC_3 (struct sbuf*) ;
 int FUNC_4 (struct sbuf*,char*,int,int ) ;
 int FUNC_5 (struct cam_path*,struct sbuf*) ;

void
FUNC_6(struct cam_path *VAR_2)
{
 struct sbuf VAR_3;
 char VAR_4[VAR_1];

 FUNC_4(&VAR_3, VAR_4, VAR_1, VAR_0);
 FUNC_5(VAR_2, &VAR_3);
 FUNC_3(&VAR_3);
 FUNC_0("%s", FUNC_1(&VAR_3));
 FUNC_2(&VAR_3);
}
