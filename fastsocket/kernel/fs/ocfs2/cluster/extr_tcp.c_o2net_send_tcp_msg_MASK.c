
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int dummy; } ;
struct msghdr {size_t msg_iovlen; struct iovec* msg_iov; } ;
struct kvec {int dummy; } ;
struct iovec {int dummy; } ;
typedef int mm_segment_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ,char*,int,...) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct socket*,struct msghdr*,size_t) ;

__attribute__((used)) static int FUNC_5(struct socket *VAR_3, struct kvec *VAR_4,
         size_t VAR_5, size_t VAR_6)
{
 int VAR_7;
 mm_segment_t VAR_8;
 struct msghdr VAR_9 = {
  .msg_iov = (struct iovec *)VAR_4,
  .msg_iovlen = VAR_5,
 };

 if (VAR_3 == ((void*)0)) {
  VAR_7 = -VAR_0;
  goto out;
 }

 VAR_8 = FUNC_1();
 FUNC_3(FUNC_0());
 VAR_7 = FUNC_4(VAR_3, &VAR_9, VAR_6);
 FUNC_3(VAR_8);
 if (VAR_7 != VAR_6) {
  FUNC_2(VAR_2, "sendmsg returned %d instead of %zu\n", VAR_7,
       VAR_6);
  if (VAR_7 >= 0)
   VAR_7 = -VAR_1;
  goto out;
 }

 VAR_7 = 0;
out:
 if (VAR_7 < 0)
  FUNC_2(0, "returning error: %d\n", VAR_7);
 return VAR_7;
}
