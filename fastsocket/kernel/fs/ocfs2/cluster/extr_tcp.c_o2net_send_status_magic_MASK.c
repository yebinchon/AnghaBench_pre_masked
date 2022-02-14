
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int dummy; } ;
struct o2net_msg {scalar_t__ data_len; int magic; void* status; void* sys_status; } ;
struct kvec {int iov_len; struct o2net_msg* iov_base; } ;
typedef enum o2net_system_error { ____Placeholder_o2net_system_error } o2net_system_error ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (struct o2net_msg*,char*,int) ;
 int FUNC_4 (struct socket*,struct kvec*,int,int) ;

__attribute__((used)) static int FUNC_5(struct socket *VAR_2, struct o2net_msg *VAR_3,
       enum o2net_system_error VAR_4, int VAR_5)
{
 struct kvec VAR_6 = {
  .iov_base = VAR_3,
  .iov_len = sizeof(struct o2net_msg),
 };

 FUNC_0(VAR_4 >= VAR_0);



 VAR_3->sys_status = FUNC_2(VAR_4);
 VAR_3->status = FUNC_2(VAR_5);
 VAR_3->magic = FUNC_1(VAR_1);
 VAR_3->data_len = 0;

 FUNC_3(VAR_3, "about to send status magic %d\n", VAR_5);

 return FUNC_4(VAR_2, &VAR_6, 1, sizeof(struct o2net_msg));
}
