
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {int sin_len; TYPE_1__ sin_addr; scalar_t__ sin_port; int sin_family; } ;
struct sockaddr {int dummy; } ;
typedef int socklen_t ;
typedef int one ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int,struct sockaddr const*,int) ;
 int FUNC_2 (int,struct sockaddr*,int*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct sockaddr_in*,int ,int) ;
 int FUNC_5 (int,int ,int ,int*,int) ;
 int FUNC_6 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_7(struct sockaddr_in *VAR_7) {
 int VAR_8, VAR_9;
 socklen_t VAR_10 = sizeof(*VAR_7);

 if ((VAR_8 = FUNC_6(VAR_0, VAR_6, VAR_3)) == -1)
  FUNC_0("socket");

 FUNC_4(VAR_7, 0, VAR_10);
 VAR_7->sin_family = VAR_0;
 VAR_7->sin_len = VAR_10;
 VAR_7->sin_port = 0;
 VAR_7->sin_addr.s_addr = FUNC_3(VAR_1);

 if (FUNC_1(VAR_8, (const struct sockaddr *)VAR_7, VAR_10) == -1)
  FUNC_0("bind");

 if (FUNC_2(VAR_8, (struct sockaddr *)VAR_7, &VAR_10) == -1)
  FUNC_0("getsockname");

 VAR_9 = 1;
 if (FUNC_5(VAR_8, VAR_2, VAR_4, &VAR_9, sizeof(VAR_9)) == -1)
  FUNC_0("setsockopt");
 if (FUNC_5(VAR_8, VAR_2, VAR_5, &VAR_9, sizeof(VAR_9)) == -1)
  FUNC_0("setsockopt");

 return VAR_8;
}
