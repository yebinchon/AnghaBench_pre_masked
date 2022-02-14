
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tv ;
struct timeval {int tv_usec; int tv_sec; } ;
struct thread {int dummy; } ;
struct sockaddr {int tv_usec; int tv_sec; } ;
struct setsockopt_args {int level; int name; int valsize; int val; int s; } ;
struct linux_setsockopt_args {int optlen; int optval; int s; int optname; int level; } ;
typedef int socklen_t ;
typedef int linux_tv ;
struct TYPE_3__ {int tv_usec; int tv_sec; } ;
typedef TYPE_1__ l_timeval ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;



 int VAR_3 ;
 int FUNC_1 (int ,TYPE_1__*,int) ;
 int FUNC_2 (struct timeval*,int ) ;
 int FUNC_3 (struct thread*,int ,int,int,struct timeval*,int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,struct timeval**,int*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct thread*,struct setsockopt_args*) ;

int
FUNC_11(struct thread *VAR_4, struct linux_setsockopt_args *VAR_5)
{
 struct setsockopt_args VAR_6;






 l_timeval VAR_7;
 struct sockaddr *VAR_8;
 struct timeval VAR_9;
 socklen_t VAR_10;
 int VAR_11, VAR_12;

 VAR_6.s = VAR_5->s;
 VAR_6.level = FUNC_8(VAR_5->level);
 switch (VAR_6.level) {
 case 130:
  VAR_12 = FUNC_6(VAR_5->optname);
  switch (VAR_12) {
  case 129:

  case 128:
   VAR_11 = FUNC_1(FUNC_0(VAR_5->optval), &VAR_7,
       sizeof(VAR_7));
   if (VAR_11 != 0)
    return (VAR_11);
   VAR_9.tv_sec = VAR_7.tv_sec;
   VAR_9.tv_usec = VAR_7.tv_usec;
   return (FUNC_3(VAR_4, VAR_5->s, VAR_6.level,
       VAR_12, &VAR_9, VAR_3, sizeof(VAR_9)));

  default:
   break;
  }
  break;
 case 133:
  VAR_12 = FUNC_5(VAR_5->optname);
  break;
 case 132:
  VAR_12 = FUNC_4(VAR_5->optname);
  break;
 case 131:
  VAR_12 = FUNC_9(VAR_5->optname);
  break;
 default:
  VAR_12 = -1;
  break;
 }
 if (VAR_12 == -1)
  return (VAR_0);


 if (VAR_12 == VAR_1) {

  VAR_10 = VAR_5->optlen;
  VAR_11 = FUNC_7(FUNC_0(VAR_5->optval), &VAR_8, &VAR_10);
  if (VAR_11 != 0)
   return (VAR_11);

  VAR_11 = FUNC_3(VAR_4, VAR_5->s, VAR_6.level,
      VAR_12, VAR_8, VAR_3, VAR_10);
  FUNC_2(VAR_8, VAR_2);
 } else {
  VAR_6.name = VAR_12;
  VAR_6.val = FUNC_0(VAR_5->optval);
  VAR_6.valsize = VAR_5->optlen;
  VAR_11 = FUNC_10(VAR_4, &VAR_6);
 }

 return (VAR_11);
}
