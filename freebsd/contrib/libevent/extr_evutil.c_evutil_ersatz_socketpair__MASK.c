
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ s_addr; } ;
struct sockaddr_in {int sin_family; scalar_t__ sin_port; TYPE_1__ sin_addr; } ;
struct sockaddr {int dummy; } ;
typedef int listen_addr ;
typedef scalar_t__ evutil_socket_t ;
typedef int ev_socklen_t ;
typedef int connect_addr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (scalar_t__,struct sockaddr*,int*) ;
 int FUNC_4 (scalar_t__,struct sockaddr*,int) ;
 int FUNC_5 (scalar_t__,struct sockaddr*,int) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__,struct sockaddr*,int*) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (scalar_t__,int) ;
 int FUNC_10 (struct sockaddr_in*,int ,int) ;
 scalar_t__ FUNC_11 (int,int,int ) ;

int
FUNC_12(int VAR_6, int VAR_7, int VAR_8,
    evutil_socket_t VAR_9[2])
{
 evutil_socket_t VAR_10 = -1;
 evutil_socket_t VAR_11 = -1;
 evutil_socket_t VAR_12 = -1;
 struct sockaddr_in VAR_13;
 struct sockaddr_in VAR_14;
 ev_socklen_t VAR_15;
 int VAR_16 = -1;
 int VAR_17;

 VAR_17 = VAR_6 != VAR_0;



 if (VAR_8 || VAR_17) {
  FUNC_1(VAR_2);
  return -1;
 }

 if (!VAR_9) {
  FUNC_1(VAR_4);
  return -1;
 }

 VAR_10 = FUNC_11(VAR_0, VAR_7, 0);
 if (VAR_10 < 0)
  return -1;
 FUNC_10(&VAR_13, 0, sizeof(VAR_13));
 VAR_13.sin_family = VAR_0;
 VAR_13.sin_addr.s_addr = FUNC_8(VAR_5);
 VAR_13.sin_port = 0;
 if (FUNC_4(VAR_10, (struct sockaddr *) &VAR_13, sizeof (VAR_13))
  == -1)
  goto tidy_up_and_fail;
 if (FUNC_9(VAR_10, 1) == -1)
  goto tidy_up_and_fail;

 VAR_11 = FUNC_11(VAR_0, VAR_7, 0);
 if (VAR_11 < 0)
  goto tidy_up_and_fail;

 FUNC_10(&VAR_14, 0, sizeof(VAR_14));


 VAR_15 = sizeof(VAR_14);
 if (FUNC_7(VAR_10, (struct sockaddr *) &VAR_14, &VAR_15) == -1)
  goto tidy_up_and_fail;
 if (VAR_15 != sizeof (VAR_14))
  goto abort_tidy_up_and_fail;
 if (FUNC_5(VAR_11, (struct sockaddr *) &VAR_14,
    sizeof(VAR_14)) == -1)
  goto tidy_up_and_fail;

 VAR_15 = sizeof(VAR_13);
 VAR_12 = FUNC_3(VAR_10, (struct sockaddr *) &VAR_13, &VAR_15);
 if (VAR_12 < 0)
  goto tidy_up_and_fail;
 if (VAR_15 != sizeof(VAR_13))
  goto abort_tidy_up_and_fail;


 if (FUNC_7(VAR_11, (struct sockaddr *) &VAR_14, &VAR_15) == -1)
  goto tidy_up_and_fail;
 if (VAR_15 != sizeof (VAR_14)
  || VAR_13.sin_family != VAR_14.sin_family
  || VAR_13.sin_addr.s_addr != VAR_14.sin_addr.s_addr
  || VAR_13.sin_port != VAR_14.sin_port)
  goto abort_tidy_up_and_fail;
 FUNC_6(VAR_10);
 VAR_9[0] = VAR_11;
 VAR_9[1] = VAR_12;

 return 0;

 abort_tidy_up_and_fail:
 VAR_16 = VAR_3;
 tidy_up_and_fail:
 if (VAR_16 < 0)
  VAR_16 = FUNC_2();
 if (VAR_10 != -1)
  FUNC_6(VAR_10);
 if (VAR_11 != -1)
  FUNC_6(VAR_11);
 if (VAR_12 != -1)
  FUNC_6(VAR_12);

 FUNC_1(VAR_16);
 return -1;

}
