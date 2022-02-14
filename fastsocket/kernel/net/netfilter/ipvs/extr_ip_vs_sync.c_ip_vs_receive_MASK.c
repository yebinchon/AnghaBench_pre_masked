
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int dummy; } ;
struct msghdr {int * member_0; } ;
struct kvec {char* iov_base; size_t iov_len; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct socket*,struct msghdr*,struct kvec*,int,size_t const,int ) ;

__attribute__((used)) static int
FUNC_3(struct socket *VAR_0, char *VAR_1, const size_t VAR_2)
{
 struct msghdr VAR_3 = {((void*)0),};
 struct kvec VAR_4;
 int VAR_5;

 FUNC_0(7);


 VAR_4.iov_base = VAR_1;
 VAR_4.iov_len = (size_t)VAR_2;

 VAR_5 = FUNC_2(VAR_0, &VAR_3, &VAR_4, 1, VAR_2, 0);

 if (VAR_5 < 0)
  return -1;

 FUNC_1(7);
 return VAR_5;
}
