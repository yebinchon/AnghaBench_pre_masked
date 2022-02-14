
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int dummy; } ;
struct pollfd {int fd; int revents; short events; } ;
struct mmsghdr {int msg_len; int msg_hdr; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 short VAR_4 ;
 int VAR_5 ;
 short VAR_6 ;
 short VAR_7 ;
 short VAR_8 ;
 int FUNC_0 (int,int *,int) ;
 int VAR_9 ;
 int FUNC_1 (struct pollfd*,int,struct timespec const*,int *) ;

ssize_t
FUNC_2(int VAR_10, struct mmsghdr *__restrict VAR_11, size_t VAR_12, int VAR_13,
    const struct timespec *__restrict VAR_14)
{
 struct pollfd VAR_15[1];
 size_t VAR_16, VAR_17;
 ssize_t VAR_18;
 int VAR_19;
 short VAR_20;

 if (VAR_14 != ((void*)0)) {
  VAR_15[0].fd = VAR_10;
  VAR_15[0].revents = 0;
  VAR_15[0].events = VAR_20 = VAR_4 | VAR_8 | VAR_7 |
      VAR_6;
  VAR_19 = FUNC_1(&VAR_15[0], 1, VAR_14, ((void*)0));
  if (VAR_19 == -1 || VAR_19 == 0)
   return (VAR_19);
  if (VAR_15[0].revents & VAR_5) {
   VAR_9 = VAR_0;
   return (-1);
  }
  if ((VAR_15[0].revents & VAR_20) == 0) {
   VAR_9 = VAR_1;
   return (-1);
  }
 }

 VAR_18 = FUNC_0(VAR_10, &VAR_11[0].msg_hdr, VAR_13);
 if (VAR_18 == -1)
  return (VAR_18);

 VAR_11[0].msg_len = VAR_18;





 if (VAR_13 & VAR_3)
  VAR_13 |= VAR_2;

 VAR_17 = 1;
 for (VAR_16 = VAR_17; VAR_16 < VAR_12; VAR_16++, VAR_17++) {
  VAR_18 = FUNC_0(VAR_10, &VAR_11[VAR_16].msg_hdr, VAR_13);
  if (VAR_18 == -1) {




   return (VAR_17);
  }


  VAR_11[VAR_16].msg_len = VAR_18;
 }

 return (VAR_17);
}
