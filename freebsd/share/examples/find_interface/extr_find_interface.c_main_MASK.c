
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int s_addr; } ;
struct sockaddr_in {int sin_len; TYPE_1__ sin_addr; void* sin_port; void* sin_family; } ;
struct sockaddr {int dummy; } ;
struct hostent {int * h_addr_list; } ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int,struct sockaddr*,int) ;
 int FUNC_1 (int,struct sockaddr*,int) ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ VAR_8 ;
 int FUNC_3 (int ,char*,...) ;
 struct hostent* FUNC_4 (char*) ;
 int FUNC_5 (int,struct sockaddr*,int*) ;
 int FUNC_6 (int ) ;
 void* FUNC_7 (int) ;
 char* FUNC_8 (TYPE_1__) ;
 int FUNC_9 (TYPE_1__*,int ,int) ;
 int FUNC_10 (void*) ;
 int FUNC_11 (char*,char*,char*) ;
 int FUNC_12 (int ,int ,int ) ;

int
FUNC_13(int VAR_9, char **VAR_10)
{
 struct sockaddr_in VAR_11, VAR_12;
 struct hostent *VAR_13;
 int VAR_14, VAR_15, VAR_16;

 VAR_9--, VAR_10++;

 if (!*VAR_10) {
  FUNC_3(VAR_4, "must supply a hostname");
 }

 VAR_13 = FUNC_4(*VAR_10);
 if (!VAR_13) {
  FUNC_3(VAR_2, "cannot resolve hostname: %s", *VAR_10);
 }

 FUNC_9(&VAR_12.sin_addr, VAR_13->h_addr_list[0], sizeof VAR_12.sin_addr);
 VAR_12.sin_port = FUNC_7(60000);
 VAR_12.sin_family = VAR_0;
 VAR_12.sin_len = sizeof VAR_12;

 VAR_11.sin_addr.s_addr = FUNC_6(VAR_5);
 VAR_11.sin_port = FUNC_7(60000);
 VAR_11.sin_family = VAR_0;
 VAR_11.sin_len = sizeof VAR_11;

 VAR_14 = FUNC_12(VAR_6, VAR_7, 0);
 if (VAR_14 < 0)
  FUNC_2(VAR_3, "socket");

 do {
  VAR_15 = FUNC_0(VAR_14, (struct sockaddr *)&VAR_11, sizeof VAR_11);
  VAR_11.sin_port = FUNC_7(FUNC_10(VAR_11.sin_port) + 1);
 } while(VAR_15 < 0 && VAR_8 == VAR_1);

 if (VAR_15 < 0)
  FUNC_2(VAR_3, "bind");

 do {
  VAR_15 = FUNC_1(VAR_14, (struct sockaddr *)&VAR_12, sizeof VAR_12);
  VAR_12.sin_port = FUNC_7(FUNC_10(VAR_12.sin_port) + 1);
 } while(VAR_15 < 0 && VAR_8 == VAR_1);

 if (VAR_15 < 0)
  FUNC_2(VAR_3, "connect");

 VAR_16 = sizeof VAR_11;
 VAR_15 = FUNC_5(VAR_14, (struct sockaddr *)&VAR_11, &VAR_16);
 if (VAR_15 < 0)
  FUNC_2(VAR_3, "getsockname");

 FUNC_11("Route to %s is out %s\n", *VAR_10, FUNC_8(VAR_11.sin_addr));
 return 0;
}
