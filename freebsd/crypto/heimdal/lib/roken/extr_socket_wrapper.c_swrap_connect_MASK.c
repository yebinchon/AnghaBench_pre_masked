
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket_info {scalar_t__ bound; scalar_t__ family; int peername_len; int peername; } ;
struct sockaddr_un {int dummy; } ;
typedef struct sockaddr {scalar_t__ sa_family; } const sockaddr ;
typedef int socklen_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 struct socket_info* FUNC_0 (int) ;
 int FUNC_1 (int,struct sockaddr const*,int) ;
 int FUNC_2 (struct socket_info*,struct sockaddr const*,int,struct sockaddr_un*,int ,int *) ;
 int FUNC_3 (struct sockaddr const*,int) ;
 int FUNC_4 (struct socket_info*) ;
 int FUNC_5 (struct socket_info*,struct sockaddr const*,int ,int *,int ) ;

int FUNC_6(int VAR_8, const struct sockaddr *VAR_9, socklen_t VAR_10)
{
 int VAR_11;
 struct sockaddr_un VAR_12;
 struct socket_info *VAR_13 = FUNC_0(VAR_8);

 if (!VAR_13) {
  return FUNC_1(VAR_8, VAR_9, VAR_10);
 }

 if (VAR_13->bound == 0) {
  VAR_11 = FUNC_4(VAR_13);
  if (VAR_11 == -1) return -1;
 }

 if (VAR_13->family != VAR_9->sa_family) {
  VAR_7 = VAR_1;
  return -1;
 }

 VAR_11 = FUNC_2(VAR_13, (const struct sockaddr *)VAR_9, VAR_10, &VAR_12, 0, ((void*)0));
 if (VAR_11 == -1) return -1;

 FUNC_5(VAR_13, VAR_9, VAR_5, ((void*)0), 0);

 VAR_11 = FUNC_1(VAR_8, (struct sockaddr *)&VAR_12,
      sizeof(struct sockaddr_un));


 if (VAR_11 == -1 && VAR_7 == VAR_2) {
  VAR_7 = VAR_0;
 }

 if (VAR_11 == 0) {
  VAR_13->peername_len = VAR_10;
  VAR_13->peername = FUNC_3(VAR_9, VAR_10);

  FUNC_5(VAR_13, VAR_9, VAR_4, ((void*)0), 0);
  FUNC_5(VAR_13, VAR_9, VAR_3, ((void*)0), 0);
 } else {
  FUNC_5(VAR_13, VAR_9, VAR_6, ((void*)0), 0);
 }

 return VAR_11;
}
