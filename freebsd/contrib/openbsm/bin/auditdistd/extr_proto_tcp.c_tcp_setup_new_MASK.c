
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ ss_family; } ;
struct tcp_ctx {int tc_fd; int tc_wait_called; int tc_side; int tc_magic; TYPE_1__ tc_sa; } ;
typedef int nodelay ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 int VAR_8 ;
 int FUNC_2 (struct tcp_ctx*) ;
 struct tcp_ctx* FUNC_3 (int) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int,int ,int ,int*,int) ;
 int FUNC_7 (scalar_t__,int ,int ) ;
 int FUNC_8 (char const*,int ,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_9(const char *VAR_9, int VAR_10, struct tcp_ctx **VAR_11)
{
 struct tcp_ctx *VAR_12;
 int VAR_13, VAR_14;

 FUNC_0(VAR_9 != ((void*)0));
 FUNC_0(VAR_10 == VAR_6 ||
     VAR_10 == VAR_7);
 FUNC_0(VAR_11 != ((void*)0));

 VAR_12 = FUNC_3(sizeof(*VAR_12));
 if (VAR_12 == ((void*)0))
  return (VAR_8);


 VAR_13 = FUNC_8(VAR_9, FUNC_1(FUNC_5("tcp:port")), &VAR_12->tc_sa);
 if (VAR_13 != 0) {
  FUNC_2(VAR_12);
  return (VAR_13);
 }

 FUNC_0(VAR_12->tc_sa.ss_family != VAR_0);

 VAR_12->tc_fd = FUNC_7(VAR_12->tc_sa.ss_family, VAR_3, 0);
 if (VAR_12->tc_fd == -1) {
  VAR_13 = VAR_8;
  FUNC_2(VAR_12);
  return (VAR_13);
 }

 FUNC_0(VAR_12->tc_sa.ss_family != VAR_0);


 VAR_14 = 1;
 if (FUNC_6(VAR_12->tc_fd, VAR_1, VAR_5, &VAR_14,
     sizeof(VAR_14)) == -1) {
  FUNC_4(VAR_2, "Unable to set TCP_NOELAY");
 }

 VAR_12->tc_wait_called = (VAR_10 == VAR_6 ? 0 : 1);
 VAR_12->tc_side = VAR_10;
 VAR_12->tc_magic = VAR_4;
 *VAR_11 = VAR_12;

 return (0);
}
