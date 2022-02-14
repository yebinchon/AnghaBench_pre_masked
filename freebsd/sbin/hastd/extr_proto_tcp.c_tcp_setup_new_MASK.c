
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ ss_family; } ;
struct tcp_ctx {int tc_fd; int tc_side; int tc_magic; TYPE_1__ tc_sa; } ;
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
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct tcp_ctx*) ;
 struct tcp_ctx* FUNC_2 (int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int,int ,int ,int*,int) ;
 int FUNC_5 (scalar_t__,int ,int ) ;
 int FUNC_6 (char const*,int ,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_7(const char *VAR_10, int VAR_11, void **VAR_12)
{
 struct tcp_ctx *VAR_13;
 int VAR_14, VAR_15;

 FUNC_0(VAR_10 != ((void*)0));
 FUNC_0(VAR_11 == VAR_7 ||
     VAR_11 == VAR_8);
 FUNC_0(VAR_12 != ((void*)0));

 VAR_13 = FUNC_2(sizeof(*VAR_13));
 if (VAR_13 == ((void*)0))
  return (VAR_9);


 if ((VAR_14 = FUNC_6(VAR_10, VAR_3, &VAR_13->tc_sa)) != 0) {
  FUNC_1(VAR_13);
  return (VAR_14);
 }

 FUNC_0(VAR_13->tc_sa.ss_family != VAR_0);

 VAR_13->tc_fd = FUNC_5(VAR_13->tc_sa.ss_family, VAR_4, 0);
 if (VAR_13->tc_fd == -1) {
  VAR_14 = VAR_9;
  FUNC_1(VAR_13);
  return (VAR_14);
 }

 FUNC_0(VAR_13->tc_sa.ss_family != VAR_0);


 VAR_15 = 1;
 if (FUNC_4(VAR_13->tc_fd, VAR_1, VAR_6, &VAR_15,
     sizeof(VAR_15)) == -1) {
  FUNC_3(VAR_2, "Unable to set TCP_NOELAY");
 }

 VAR_13->tc_side = VAR_11;
 VAR_13->tc_magic = VAR_5;
 *VAR_12 = VAR_13;

 return (0);
}
