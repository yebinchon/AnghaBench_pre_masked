
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket_info {int myname_len; int bound; int bcast; int myname; } ;
struct sockaddr_un {int sun_path; } ;
typedef struct sockaddr const sockaddr ;
typedef int socklen_t ;


 struct socket_info* FUNC_0 (int) ;
 int FUNC_1 (int,struct sockaddr const*,int) ;
 int FUNC_2 (struct socket_info*,struct sockaddr const*,int,struct sockaddr_un*,int,int *) ;
 int FUNC_3 (struct sockaddr const*,int) ;
 int FUNC_4 (int ) ;

int FUNC_5(int VAR_0, const struct sockaddr *VAR_1, socklen_t VAR_2)
{
 int VAR_3;
 struct sockaddr_un VAR_4;
 struct socket_info *VAR_5 = FUNC_0(VAR_0);

 if (!VAR_5) {
  return FUNC_1(VAR_0, VAR_1, VAR_2);
 }

 VAR_5->myname_len = VAR_2;
 VAR_5->myname = FUNC_3(VAR_1, VAR_2);

 VAR_3 = FUNC_2(VAR_5, (const struct sockaddr *)VAR_1, VAR_2, &VAR_4, 1, &VAR_5->bcast);
 if (VAR_3 == -1) return -1;

 FUNC_4(VAR_4.sun_path);

 VAR_3 = FUNC_1(VAR_0, (struct sockaddr *)&VAR_4,
   sizeof(struct sockaddr_un));

 if (VAR_3 == 0) {
  VAR_5->bound = 1;
 }

 return VAR_3;
}
