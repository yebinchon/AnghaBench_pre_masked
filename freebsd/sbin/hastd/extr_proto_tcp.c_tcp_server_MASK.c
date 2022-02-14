
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int val ;
struct TYPE_2__ {scalar_t__ ss_family; int ss_len; } ;
struct tcp_ctx {int tc_fd; TYPE_1__ tc_sa; } ;
struct sockaddr {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,struct sockaddr*,int ) ;
 int VAR_4 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int ,int ,int*,int) ;
 int FUNC_4 (struct tcp_ctx*) ;
 int FUNC_5 (char const*,int ,void**) ;

__attribute__((used)) static int
FUNC_6(const char *VAR_5, void **VAR_6)
{
 struct tcp_ctx *VAR_7;
 int VAR_8, VAR_9;

 VAR_8 = FUNC_5(VAR_5, VAR_3, VAR_6);
 if (VAR_8 != 0)
  return (VAR_8);

 VAR_7 = *VAR_6;

 VAR_9 = 1;

 (void)FUNC_3(VAR_7->tc_fd, VAR_1, VAR_2, &VAR_9,
    sizeof(VAR_9));

 FUNC_0(VAR_7->tc_sa.ss_family != VAR_0);

 if (FUNC_1(VAR_7->tc_fd, (struct sockaddr *)&VAR_7->tc_sa,
     VAR_7->tc_sa.ss_len) == -1) {
  VAR_8 = VAR_4;
  FUNC_4(VAR_7);
  return (VAR_8);
 }
 if (FUNC_2(VAR_7->tc_fd, 8) == -1) {
  VAR_8 = VAR_4;
  FUNC_4(VAR_7);
  return (VAR_8);
 }

 return (0);
}
