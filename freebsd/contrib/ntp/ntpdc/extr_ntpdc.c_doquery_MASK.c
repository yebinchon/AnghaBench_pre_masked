
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock_timeval {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;
typedef int fd_set ;




 int FUNC_0 (scalar_t__,int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;






 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int,int,size_t*,size_t*,char const**,int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (scalar_t__,char*,int,int ) ;
 int VAR_3 ;
 int FUNC_5 (scalar_t__,int *,int *,int *,struct sock_timeval*) ;
 int FUNC_6 (int,int,int,size_t,size_t,char const*) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (char*) ;

int
FUNC_8(
 int VAR_6,
 int VAR_7,
 int VAR_8,
 size_t VAR_9,
 size_t VAR_10,
 const char *VAR_11,
 size_t *VAR_12,
 size_t *VAR_13,
 const char **VAR_14,
  int VAR_15,
 int VAR_16
 )
{
 int VAR_17;
 char VAR_18[512];
 fd_set VAR_19;
 struct sock_timeval VAR_20;




 if (!VAR_1) {
  (void) FUNC_2(VAR_5, "***No host open, use `host' command\n");
  return -1;
 }




again:
 do {
  VAR_20.tv_sec = VAR_20.tv_usec = 0;
  FUNC_1(&VAR_19);
  FUNC_0(VAR_4, &VAR_19);
  VAR_17 = FUNC_5(VAR_4+1, &VAR_19, ((void*)0), ((void*)0), &VAR_20);
  if (VAR_17 == -1) {
   FUNC_7("polling select");
   return -1;
  } else if (VAR_17 > 0)

      (void) FUNC_4(VAR_4, VAR_18, sizeof VAR_18, 0);
 } while (VAR_17 > 0);





 VAR_17 = FUNC_6(VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11);
 if (VAR_17 != 0)
  return VAR_17;




 VAR_17 = FUNC_3(VAR_6, VAR_7, VAR_12, VAR_13, VAR_14, VAR_16);




 if (VAR_17 == 132 && VAR_3 != 48) {
  int VAR_21;

  VAR_21 = VAR_3;

  switch(VAR_3) {
  case 128:
   VAR_3 = 160;
   break;
  case 160:
   VAR_3 = 48;
   break;
  }
  if (VAR_2 == VAR_0) {
   FUNC_2(VAR_5,
       "***Warning changing to older implementation\n");
   return 131;
  }

  FUNC_2(VAR_5,
      "***Warning changing the request packet size from %d to %d\n",
      VAR_21, VAR_3);
  goto again;
 }


  if ((VAR_17 > 0) && (((1 << VAR_17) & VAR_15) == 0)) {
  switch(VAR_17) {
  case 131:

   if (VAR_6 == VAR_0)
    break;
   (void) FUNC_2(VAR_5,
           "***Server implementation incompatible with our own\n");
   break;
  case 129:
   (void) FUNC_2(VAR_5,
           "***Server doesn't implement this request\n");
   break;
  case 132:
   (void) FUNC_2(VAR_5,
           "***Server reports a format error in the received packet (shouldn't happen)\n");
   break;
  case 130:
   (void) FUNC_2(VAR_5,
           "***Server reports data not found\n");
   break;
  case 133:
   (void) FUNC_2(VAR_5, "***Permission denied\n");
   break;
  case 134:
   (void) FUNC_2(VAR_5, "***Request timed out\n");
   break;
  case 135:
   (void) FUNC_2(VAR_5,
           "***Response from server was incomplete\n");
   break;
  default:
   (void) FUNC_2(VAR_5,
           "***Server returns unknown error code %d\n", VAR_17);
   break;
  }
 }
 return VAR_17;
}
