
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int dummy; } ;
struct msghdr {int dummy; } ;
struct kvec {unsigned char* member_0; int member_1; } ;
struct cmtp_session {struct socket* sock; } ;
typedef int msg ;


 int FUNC_0 (char*,struct cmtp_session*,unsigned char*,int) ;
 int FUNC_1 (struct socket*,struct msghdr*,struct kvec*,int,int) ;
 int FUNC_2 (struct msghdr*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct cmtp_session *VAR_0, unsigned char *VAR_1, int VAR_2)
{
 struct socket *VAR_3 = VAR_0->sock;
 struct kvec VAR_4 = { VAR_1, VAR_2 };
 struct msghdr VAR_5;

 FUNC_0("session %p data %p len %d", VAR_0, VAR_1, VAR_2);

 if (!VAR_2)
  return 0;

 FUNC_2(&VAR_5, 0, sizeof(VAR_5));

 return FUNC_1(VAR_3, &VAR_5, &VAR_4, 1, VAR_2);
}
