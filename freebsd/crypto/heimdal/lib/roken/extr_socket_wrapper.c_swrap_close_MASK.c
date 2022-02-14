
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket_info {struct socket_info* tmp_path; struct socket_info* peername; struct socket_info* myname; struct socket_info* path; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct socket_info*) ;
 struct socket_info* FUNC_1 (int) ;
 int FUNC_2 (struct socket_info*) ;
 int FUNC_3 (int) ;
 int VAR_3 ;
 int FUNC_4 (struct socket_info*,int *,int ,int *,int ) ;
 int FUNC_5 (struct socket_info*) ;

int FUNC_6(int VAR_4)
{
 struct socket_info *VAR_5 = FUNC_1(VAR_4);
 int VAR_6;

 if (!VAR_5) {
  return FUNC_3(VAR_4);
 }

 FUNC_0(VAR_3, VAR_5);

 if (VAR_5->myname && VAR_5->peername) {
  FUNC_4(VAR_5, ((void*)0), VAR_2, ((void*)0), 0);
 }

 VAR_6 = FUNC_3(VAR_4);

 if (VAR_5->myname && VAR_5->peername) {
  FUNC_4(VAR_5, ((void*)0), VAR_1, ((void*)0), 0);
  FUNC_4(VAR_5, ((void*)0), VAR_0, ((void*)0), 0);
 }

 if (VAR_5->path) FUNC_2(VAR_5->path);
 if (VAR_5->myname) FUNC_2(VAR_5->myname);
 if (VAR_5->peername) FUNC_2(VAR_5->peername);
 if (VAR_5->tmp_path) {
  FUNC_5(VAR_5->tmp_path);
  FUNC_2(VAR_5->tmp_path);
 }
 FUNC_2(VAR_5);

 return VAR_6;
}
