
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ ss_family; int ss_len; } ;
struct tcp_ctx {scalar_t__ tc_magic; scalar_t__ tc_side; scalar_t__ tc_fd; TYPE_1__ tc_sa; } ;
struct sockaddr {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_1 (scalar_t__,struct sockaddr*,int ) ;
 int VAR_8 ;
 int FUNC_2 (scalar_t__,int ,...) ;
 int FUNC_3 (int ,int,int,char*) ;
 int FUNC_4 (void*,int) ;

__attribute__((used)) static int
FUNC_5(void *VAR_9, int VAR_10)
{
 struct tcp_ctx *VAR_11 = VAR_9;
 int VAR_12, VAR_13;

 FUNC_0(VAR_11 != ((void*)0));
 FUNC_0(VAR_11->tc_magic == VAR_6);
 FUNC_0(VAR_11->tc_side == VAR_7);
 FUNC_0(VAR_11->tc_fd >= 0);
 FUNC_0(VAR_11->tc_sa.ss_family != VAR_0);
 FUNC_0(VAR_10 >= -1);

 VAR_13 = FUNC_2(VAR_11->tc_fd, VAR_2);
 if (VAR_13 == -1) {
  FUNC_3(VAR_4, 1, VAR_8, "fcntl(F_GETFL) failed");
  return (VAR_8);
 }




 VAR_13 |= VAR_5;
 if (FUNC_2(VAR_11->tc_fd, VAR_3, VAR_13) == -1) {
  FUNC_3(VAR_4, 1, VAR_8,
      "fcntl(F_SETFL, O_NONBLOCK) failed");
  return (VAR_8);
 }

 if (FUNC_1(VAR_11->tc_fd, (struct sockaddr *)&VAR_11->tc_sa,
     VAR_11->tc_sa.ss_len) == 0) {
  if (VAR_10 == -1)
   return (0);
  VAR_12 = 0;
  goto done;
 }
 if (VAR_8 != VAR_1) {
  VAR_12 = VAR_8;
  FUNC_3(VAR_4, 1, VAR_8, "connect() failed");
  goto done;
 }
 if (VAR_10 == -1)
  return (0);
 return (FUNC_4(VAR_9, VAR_10));
done:
 VAR_13 &= ~VAR_5;
 if (FUNC_2(VAR_11->tc_fd, VAR_3, VAR_13) == -1) {
  if (VAR_12 == 0)
   VAR_12 = VAR_8;
  FUNC_3(VAR_4, 1, VAR_8,
      "fcntl(F_SETFL, ~O_NONBLOCK) failed");
 }
 return (VAR_12);
}
