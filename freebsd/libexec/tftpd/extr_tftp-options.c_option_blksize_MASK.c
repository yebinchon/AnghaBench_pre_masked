
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_long ;
typedef int maxdgram ;
struct TYPE_2__ {int o_reply; int * o_request; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int*,char*,int) ;
 int FUNC_1 (int *) ;
 int VAR_9 ;
 TYPE_1__* VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (int,int ) ;
 scalar_t__ FUNC_3 (char*,int*,size_t*,int *,int ) ;
 int FUNC_4 (int ,char*,...) ;

int
FUNC_5(int VAR_13)
{
 u_long VAR_14;
 size_t VAR_15;

 if (VAR_10[VAR_7].o_request == ((void*)0))
  return (0);


 VAR_15 = sizeof(VAR_14);
 if (FUNC_3("net.inet.udp.maxdgram",
     &VAR_14, &VAR_15, ((void*)0), 0) < 0) {
  FUNC_4(VAR_5, "sysctl: net.inet.udp.maxdgram");
  return (VAR_8 ? 1 : 0);
 }

 int VAR_16 = FUNC_1(VAR_10[VAR_7].o_request);
 if (VAR_16 < VAR_1 || VAR_16 > VAR_0) {
  if (VAR_8) {
   FUNC_4(VAR_5,
       "Invalid blocksize (%d bytes), aborting",
       VAR_16);
   FUNC_2(VAR_13, VAR_3);
   return (1);
  } else {
   FUNC_4(VAR_6,
       "Invalid blocksize (%d bytes), ignoring request",
       VAR_16);
   return (0);
  }
 }

 if (VAR_16 > (int)VAR_14) {
  if (VAR_8) {
   FUNC_4(VAR_5,
       "Invalid blocksize (%d bytes), "
       "net.inet.udp.maxdgram sysctl limits it to "
       "%ld bytes.\n", VAR_16, VAR_14);
   FUNC_2(VAR_13, VAR_3);
   return (1);
  } else {
   FUNC_4(VAR_6,
       "Invalid blocksize (%d bytes), "
       "net.inet.udp.maxdgram sysctl limits it to "
       "%ld bytes.\n", VAR_16, VAR_14);
   VAR_16 = VAR_14;

  }
 }

 FUNC_0(&VAR_10[VAR_7].o_reply, "%d", VAR_16);
 VAR_12 = VAR_16;
 VAR_11 = VAR_16 + 4;
 if (VAR_9&VAR_2)
  FUNC_4(VAR_4, "Setting blksize to '%s'",
      VAR_10[VAR_7].o_reply);

 return (0);
}
