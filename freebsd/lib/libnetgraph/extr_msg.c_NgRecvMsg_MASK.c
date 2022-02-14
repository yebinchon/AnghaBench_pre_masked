
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_char ;
struct sockaddr_ng {int sg_data; } ;
struct sockaddr {int dummy; } ;
struct TYPE_2__ {int flags; } ;
struct ng_mesg {TYPE_1__ header; } ;
typedef int socklen_t ;
typedef int sgbuf ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct ng_mesg*,int ) ;
 int FUNC_3 (struct sockaddr_ng* const) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int,struct ng_mesg*,size_t,int ,struct sockaddr*,int*) ;
 int FUNC_5 (char*,int ,int) ;

int
FUNC_6(int VAR_5, struct ng_mesg *VAR_6, size_t VAR_7, char *VAR_8)
{
 u_char VAR_9[VAR_2 + VAR_1];
 struct sockaddr_ng *const VAR_10 = (struct sockaddr_ng *) VAR_9;
 socklen_t VAR_11 = sizeof(VAR_9);
 int VAR_12, VAR_13;


 VAR_12 = FUNC_4(VAR_5, VAR_6, VAR_7, 0, (struct sockaddr *) VAR_10, &VAR_11);
 if (VAR_12 < 0) {
  VAR_13 = VAR_4;
  if (VAR_3 >= 1)
   FUNC_0("recvfrom");
  goto errout;
 }
 if (VAR_8 != ((void*)0))
  FUNC_5(VAR_8, VAR_10->sg_data, VAR_2);


 if (VAR_3 >= 2) {
  FUNC_1("RECEIVED %s:",
      (VAR_6->header.flags & VAR_0) ? "RESPONSE" : "MESSAGE");
  FUNC_3(VAR_10);
  FUNC_2(VAR_6, VAR_10->sg_data);
 }


 return (VAR_12);

errout:
 VAR_4 = VAR_13;
 return (-1);
}
