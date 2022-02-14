
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sockaddr_un {char* sun_path; } ;
struct TYPE_4__ {int * s6_addr; } ;
struct TYPE_3__ {int s_addr; } ;
struct sockaddr_in6 {void* sin6_port; TYPE_2__ sin6_addr; int sin6_family; void* sin_port; TYPE_1__ sin_addr; int sin_family; } ;
struct sockaddr_in {void* sin6_port; TYPE_2__ sin6_addr; int sin6_family; void* sin_port; TYPE_1__ sin_addr; int sin_family; } ;
struct sockaddr {int dummy; } ;
typedef int socklen_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;




 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (unsigned int) ;
 int FUNC_2 (struct sockaddr_in6*,int ,int) ;
 int FUNC_3 (char const*,int ,char*,unsigned int*,unsigned int*) ;
 char* FUNC_4 (char*,char) ;

__attribute__((used)) static int FUNC_5(const struct sockaddr_un *VAR_7, struct sockaddr *VAR_8, socklen_t *VAR_9)
{
 unsigned int VAR_10;
 unsigned int VAR_11;
 const char *VAR_12;
 char VAR_13;

 VAR_12 = FUNC_4(VAR_7->sun_path, '/');
 if (VAR_12) VAR_12++; else VAR_12 = VAR_7->sun_path;

 if (FUNC_3(VAR_12, VAR_4, &VAR_13, &VAR_10, &VAR_11) != 3) {
  VAR_6 = VAR_2;
  return -1;
 }

 if (VAR_10 == 0 || VAR_10 > VAR_3) {
  VAR_6 = VAR_2;
  return -1;
 }

 if (VAR_11 > 0xFFFF) {
  VAR_6 = VAR_2;
  return -1;
 }

 switch(VAR_13) {
 case 131:
 case 129: {
  struct sockaddr_in *VAR_14 = (struct sockaddr_in *)VAR_8;

  if ((*VAR_9) < sizeof(*VAR_14)) {
      VAR_6 = VAR_2;
      return -1;
  }

  FUNC_2(VAR_14, 0, sizeof(*VAR_14));
  VAR_14->sin_family = VAR_0;
  VAR_14->sin_addr.s_addr = FUNC_0((127<<24) | VAR_10);
  VAR_14->sin_port = FUNC_1(VAR_11);

  *VAR_9 = sizeof(*VAR_14);
  break;
 }
 default:
  VAR_6 = VAR_2;
  return -1;
 }

 return 0;
}
