
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * s6_addr; } ;
struct sockaddr_in6 {scalar_t__ sin6_scope_id; TYPE_2__ sin6_addr; int sin6_port; } ;
struct sockaddr_in {int sin_len; scalar_t__ ai_family; int ai_flags; int * ai_canonname; struct sockaddr* ai_addr; struct sockaddr_in* ai_next; int ai_socktype; int sin_addr; int sin_port; scalar_t__ sin_family; } ;
struct sockaddr {scalar_t__ sa_family; int sa_len; } ;
struct in_addr {int dummy; } ;
struct addrinfo {int sin_len; scalar_t__ ai_family; int ai_flags; int * ai_canonname; struct sockaddr* ai_addr; struct addrinfo* ai_next; int ai_socktype; int sin_addr; int sin_port; scalar_t__ sin_family; } ;
typedef int lsin ;
typedef int buf ;
struct TYPE_3__ {int si_port; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct sockaddr_in6* FUNC_1 (struct sockaddr*) ;
 TYPE_1__* FUNC_2 (struct sockaddr*) ;
 int VAR_11 ;
 int FUNC_3 (struct sockaddr_in*) ;
 int FUNC_4 (char*,int *,struct sockaddr_in*,struct sockaddr_in**) ;
 int FUNC_5 (struct sockaddr*,int,char*,int,int *,int ,int ) ;
 int FUNC_6 (struct sockaddr*,struct sockaddr*,int) ;
 int FUNC_7 (int *,int *,int) ;
 int FUNC_8 (struct sockaddr_in*,int ,int) ;
 int FUNC_9 (char*,int *,int) ;
 size_t FUNC_10 (char*) ;
 int FUNC_11 (char*,char*,size_t) ;
 int FUNC_12 (char*,size_t) ;

int
FUNC_13(char *VAR_12, size_t VAR_13, struct sockaddr *VAR_14, int VAR_15)
{
 int VAR_16, VAR_17;
 char VAR_18[VAR_8];




 VAR_16 = VAR_6;
 VAR_17 = FUNC_5(VAR_14, VAR_15, VAR_18, sizeof(VAR_18), ((void*)0), 0,
       VAR_9);
 if (VAR_17 == 0) {
  struct addrinfo VAR_19, *VAR_20, *VAR_21;
  struct sockaddr *VAR_22;

  FUNC_8(&VAR_19, 0, sizeof(struct addrinfo));
  VAR_19.ai_family = VAR_14->sa_family;
  VAR_19.ai_flags = VAR_2 | VAR_3;
  VAR_19.ai_socktype = VAR_11;

  VAR_17 = FUNC_4(VAR_18, ((void*)0), &VAR_19, &VAR_20);
  if (VAR_17) {
   VAR_16 = VAR_7;
   goto numeric;
  }
  for (VAR_21 = VAR_20; ; VAR_20 = VAR_20->ai_next) {
   if (VAR_20 == ((void*)0)) {
    FUNC_3(VAR_21);
    VAR_16 = VAR_5;
    goto numeric;
   }
   VAR_22 = VAR_20->ai_addr;
   if (VAR_22 == ((void*)0)) {
    FUNC_3(VAR_21);
    VAR_16 = VAR_5;
    goto numeric;
   }
   if (VAR_22->sa_len == VAR_15 &&
       VAR_22->sa_family == VAR_14->sa_family) {
    FUNC_2(VAR_22)->si_port = FUNC_2(VAR_14)->si_port;
    if (!FUNC_6(VAR_22, VAR_14, VAR_22->sa_len)) {
     VAR_16 = VAR_4;
     if (VAR_21->ai_canonname == ((void*)0)) {
      FUNC_3(VAR_21);
      goto numeric;
     }
     FUNC_9(VAR_18, VAR_21->ai_canonname,
      sizeof(VAR_18));
     FUNC_12(VAR_18, VAR_13);
     if (FUNC_10(VAR_18) > VAR_13 &&
         VAR_14->sa_family == VAR_0) {
      FUNC_3(VAR_21);
      goto numeric;
     }
     FUNC_11(VAR_12, VAR_18, VAR_13);
     break;
    }
   }
  }
  FUNC_3(VAR_21);
 } else {
    numeric:
  if (FUNC_5(VAR_14, VAR_15, VAR_18, sizeof(VAR_18), ((void*)0), 0,
    VAR_10) == 0)
   FUNC_11(VAR_12, VAR_18, VAR_13);
 }

 return VAR_16;
}
