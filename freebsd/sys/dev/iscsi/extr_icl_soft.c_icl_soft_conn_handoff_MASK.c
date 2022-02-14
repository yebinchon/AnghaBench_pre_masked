
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {scalar_t__ so_type; } ;
struct icl_conn {struct socket* ic_socket; } ;
struct file {scalar_t__ f_type; struct socket* f_data; int * f_ops; } ;
typedef int cap_rights_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct icl_conn*) ;
 int FUNC_1 (struct icl_conn*) ;
 int FUNC_2 (struct icl_conn*) ;
 int FUNC_3 (char*) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int *,int ) ;
 int VAR_6 ;
 int FUNC_5 (struct file*,int ) ;
 int FUNC_6 (int ,int,int ,struct file**) ;
 int FUNC_7 (struct icl_conn*) ;

int
FUNC_8(struct icl_conn *VAR_7, int VAR_8)
{
 struct file *VAR_9;
 struct socket *VAR_10;
 cap_rights_t VAR_11;
 int VAR_12;

 FUNC_1(VAR_7);
 VAR_12 = FUNC_6(VAR_6, VAR_8,
     FUNC_4(&VAR_11, VAR_0), &VAR_9);
 if (VAR_12 != 0)
  return (VAR_12);
 if (VAR_9->f_type != VAR_1) {
  FUNC_5(VAR_9, VAR_6);
  return (VAR_3);
 }
 VAR_10 = VAR_9->f_data;
 if (VAR_10->so_type != VAR_4) {
  FUNC_5(VAR_9, VAR_6);
  return (VAR_3);
 }

 FUNC_0(VAR_7);

 if (VAR_7->ic_socket != ((void*)0)) {
  FUNC_2(VAR_7);
  FUNC_5(VAR_9, VAR_6);
  return (VAR_2);
 }

 VAR_7->ic_socket = VAR_9->f_data;
 VAR_9->f_ops = &VAR_5;
 VAR_9->f_data = ((void*)0);
 FUNC_5(VAR_9, VAR_6);
 FUNC_2(VAR_7);

 VAR_12 = FUNC_7(VAR_7);

 return (VAR_12);
}
