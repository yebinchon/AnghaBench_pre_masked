
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uds_ctx {int uc_sun; int uc_fd; } ;
struct sockaddr {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,struct sockaddr*,int) ;
 int VAR_1 ;
 int FUNC_2 (struct uds_ctx*) ;
 int FUNC_3 (char const*,int ,struct uds_ctx**) ;

__attribute__((used)) static int
FUNC_4(const char *VAR_2, const char *VAR_3, int VAR_4, void **VAR_5)
{
 struct uds_ctx *VAR_6;
 int VAR_7;

 FUNC_0(VAR_3 != ((void*)0));
 FUNC_0(VAR_4 >= -1);

 VAR_7 = FUNC_3(VAR_3, VAR_0, &VAR_6);
 if (VAR_7 != 0)
  return (VAR_7);

 FUNC_0(VAR_2 == ((void*)0));

 if (FUNC_1(VAR_6->uc_fd, (struct sockaddr *)&VAR_6->uc_sun,
     sizeof(VAR_6->uc_sun)) == -1) {
  VAR_7 = VAR_1;
  FUNC_2(VAR_6);
  return (VAR_7);
 }

 *VAR_5 = VAR_6;

 return (0);
}
