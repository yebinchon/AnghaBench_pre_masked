
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int tv_nsec; scalar_t__ tv_sec; } ;
struct pollfd {int events; int fd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct timespec*,int *) ;
 scalar_t__ FUNC_1 (struct pollfd*,int,int) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,int ) ;

const char *
FUNC_4(void)
{
 struct pollfd VAR_3[1];
 struct timespec VAR_4;
 char VAR_5;
 const char *VAR_6 = "9600-baud";

 (void)FUNC_3(0, VAR_2);
 VAR_3[0].fd = VAR_1;
 VAR_3[0].events = VAR_0;
 if (FUNC_1(VAR_3, 1, 5000) <= 0)
  return (VAR_6);
 if (FUNC_2(VAR_1, &VAR_5, sizeof(char)) != sizeof(char))
  return (VAR_6);
 VAR_4.tv_sec = 0;
 VAR_4.tv_nsec = 20000;
 (void)FUNC_0(&VAR_4, ((void*)0));
 (void)FUNC_3(0, VAR_2);
 switch (VAR_5 & 0377) {

 case 0200:
  VAR_6 = "300-baud";
  break;

 case 0346:
  VAR_6 = "1200-baud";
  break;

 case 015:
 case 0215:
  VAR_6 = "2400-baud";
  break;

 default:
  VAR_6 = "4800-baud";
  break;

 case 0377:
  VAR_6 = "9600-baud";
  break;
 }
 return (VAR_6);
}
