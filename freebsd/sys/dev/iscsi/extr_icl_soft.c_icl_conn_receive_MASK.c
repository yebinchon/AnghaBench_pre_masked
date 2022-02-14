
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uio ;
struct uio {size_t uio_resid; } ;
struct socket {int dummy; } ;
struct mbuf {int dummy; } ;
struct icl_conn {struct socket* ic_socket; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int FUNC_1 (struct mbuf*) ;
 int FUNC_2 (struct uio*,int ,int) ;
 int FUNC_3 (struct socket*,int *,struct uio*,struct mbuf**,int *,int*) ;

__attribute__((used)) static struct mbuf *
FUNC_4(struct icl_conn *VAR_1, size_t VAR_2)
{
 struct uio VAR_3;
 struct socket *VAR_4;
 struct mbuf *VAR_5;
 int VAR_6, VAR_7;

 VAR_4 = VAR_1->ic_socket;

 FUNC_2(&VAR_3, 0, sizeof(VAR_3));
 VAR_3.uio_resid = VAR_2;

 VAR_7 = VAR_0;
 VAR_6 = FUNC_3(VAR_4, ((void*)0), &VAR_3, &VAR_5, ((void*)0), &VAR_7);
 if (VAR_6 != 0) {
  FUNC_0("soreceive error %d", VAR_6);
  return (((void*)0));
 }
 if (VAR_3.uio_resid != 0) {
  FUNC_1(VAR_5);
  FUNC_0("short read");
  return (((void*)0));
 }

 return (VAR_5);
}
