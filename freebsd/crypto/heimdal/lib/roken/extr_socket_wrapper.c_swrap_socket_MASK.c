
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket_info {int family; int type; int protocol; int fd; } ;





 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (int ,struct socket_info*) ;
 scalar_t__ FUNC_1 (int,int) ;
 int VAR_2 ;
 int FUNC_2 (int const,int,int) ;
 int FUNC_3 () ;
 int VAR_3 ;

int FUNC_4(int VAR_4, int VAR_5, int VAR_6)
{
 struct socket_info *VAR_7;
 int VAR_8;

 if (!FUNC_3()) {
  return FUNC_2(VAR_4, VAR_5, VAR_6);
 }

 switch (VAR_4) {
 case 132:



  break;
 case 130:
  return FUNC_2(VAR_4, VAR_5, VAR_6);
 default:
  VAR_2 = VAR_0;
  return -1;
 }

 switch (VAR_5) {
 case 128:
  break;
 case 129:
  break;
 default:
  VAR_2 = VAR_1;
  return -1;
 }
 VAR_8 = FUNC_2(130, VAR_5, 0);

 if (VAR_8 == -1) return -1;

 VAR_7 = (struct socket_info *)FUNC_1(1, sizeof(struct socket_info));

 VAR_7->family = VAR_4;
 VAR_7->type = VAR_5;
 VAR_7->protocol = VAR_6;
 VAR_7->fd = VAR_8;

 FUNC_0(VAR_3, VAR_7);

 return VAR_7->fd;
}
