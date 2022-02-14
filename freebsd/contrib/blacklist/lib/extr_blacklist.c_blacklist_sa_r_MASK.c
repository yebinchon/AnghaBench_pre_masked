
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
struct blacklist {int dummy; } ;
typedef int socklen_t ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct blacklist*,int,int,struct sockaddr const*,int ,char const*) ;

int
FUNC_1(struct blacklist *VAR_5, int VAR_6, int VAR_7,
 const struct sockaddr *VAR_8, socklen_t VAR_9, const char *VAR_10)
{
 int VAR_11;


 switch (VAR_6) {
 case 130:
  VAR_11 = VAR_1;
  break;
 case 129:
  VAR_11 = VAR_3;
  break;
 case 131:
  VAR_11 = VAR_0;
  break;
 case 128:
  VAR_11 = VAR_2;
  break;
 default:
  VAR_11 = VAR_4;
  break;
 }
 return FUNC_0(VAR_5, VAR_11, VAR_7, VAR_8, VAR_9, VAR_10);
}
