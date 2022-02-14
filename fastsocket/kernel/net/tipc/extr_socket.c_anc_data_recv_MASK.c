
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tipc_port {int conn_type; int conn_instance; } ;
struct tipc_msg {int dummy; } ;
struct msghdr {scalar_t__ msg_controllen; } ;


 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 int* FUNC_1 (struct tipc_msg*) ;
 int FUNC_2 (struct tipc_msg*) ;
 int FUNC_3 (struct tipc_msg*) ;
 int FUNC_4 (struct tipc_msg*) ;
 int FUNC_5 (struct tipc_msg*) ;
 int FUNC_6 (struct tipc_msg*) ;
 int FUNC_7 (struct tipc_msg*) ;
 int FUNC_8 (struct msghdr*,int ,int ,int,int*) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static int FUNC_10(struct msghdr *VAR_5, struct tipc_msg *VAR_6,
    struct tipc_port *VAR_7)
{
 u32 VAR_8[3];
 u32 VAR_9;
 u32 VAR_10;
 int VAR_11;
 int VAR_12;

 if (FUNC_0(VAR_5->msg_controllen == 0))
  return 0;



 VAR_9 = VAR_6 ? FUNC_3(VAR_6) : 0;
 if (FUNC_9(VAR_9)) {
  VAR_8[0] = VAR_9;
  VAR_8[1] = FUNC_2(VAR_6);
  if ((VAR_12 = FUNC_8(VAR_5, VAR_0, VAR_3, 8, VAR_8)))
   return VAR_12;
  if (VAR_8[1] &&
      (VAR_12 = FUNC_8(VAR_5, VAR_0, VAR_4, VAR_8[1],
        FUNC_1(VAR_6))))
   return VAR_12;
 }



 VAR_10 = VAR_6 ? FUNC_7(VAR_6) : VAR_2;
 switch (VAR_10) {
 case 128:
  VAR_11 = 1;
  VAR_8[0] = FUNC_5(VAR_6);
  VAR_8[1] = FUNC_4(VAR_6);
  VAR_8[2] = FUNC_4(VAR_6);
  break;
 case 129:
  VAR_11 = 1;
  VAR_8[0] = FUNC_5(VAR_6);
  VAR_8[1] = FUNC_4(VAR_6);
  VAR_8[2] = FUNC_6(VAR_6);
  break;
 case 130:
  VAR_11 = (VAR_7->conn_type != 0);
  VAR_8[0] = VAR_7->conn_type;
  VAR_8[1] = VAR_7->conn_instance;
  VAR_8[2] = VAR_7->conn_instance;
  break;
 default:
  VAR_11 = 0;
 }
 if (VAR_11 &&
     (VAR_12 = FUNC_8(VAR_5, VAR_0, VAR_1, 12, VAR_8)))
  return VAR_12;

 return 0;
}
