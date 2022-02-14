
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct msghdr {int msg_iovlen; size_t msg_controllen; int * msg_control; struct iovec* msg_iov; } ;
struct iovec {int iov_len; scalar_t__* iov_base; } ;
struct cmsghdr {int dummy; } ;
typedef int msg ;
typedef int dummy ;


 struct cmsghdr* FUNC_0 (struct msghdr*) ;
 struct cmsghdr* FUNC_1 (struct msghdr*,struct cmsghdr*) ;
 size_t FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct msghdr*,int) ;
 int * FUNC_5 (int,size_t) ;
 int VAR_0 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int,struct msghdr*) ;
 int FUNC_8 (struct cmsghdr*,int const) ;

__attribute__((used)) static int
FUNC_9(int VAR_1, const int *VAR_2, size_t VAR_3)
{
 struct msghdr VAR_4;
 struct cmsghdr *VAR_5;
 struct iovec VAR_6;
 unsigned int VAR_7;
 int VAR_8, VAR_9;
 uint8_t VAR_10;

 FUNC_3(VAR_1 >= 0);
 FUNC_3(VAR_2 != ((void*)0));
 FUNC_3(VAR_3 > 0);

 FUNC_4(&VAR_4, sizeof(VAR_4));




 VAR_10 = 0;
 VAR_6.iov_base = &VAR_10;
 VAR_6.iov_len = sizeof(VAR_10);

 VAR_4.msg_iov = &VAR_6;
 VAR_4.msg_iovlen = 1;
 VAR_4.msg_controllen = VAR_3 * FUNC_2(sizeof(int));
 VAR_4.msg_control = FUNC_5(1, VAR_4.msg_controllen);
 if (VAR_4.msg_control == ((void*)0))
  return (-1);

 VAR_9 = -1;

 for (VAR_7 = 0, VAR_5 = FUNC_0(&VAR_4); VAR_7 < VAR_3 && VAR_5 != ((void*)0);
     VAR_7++, VAR_5 = FUNC_1(&VAR_4, VAR_5)) {
  if (FUNC_8(VAR_5, VAR_2[VAR_7]) == -1)
   goto end;
 }

 if (FUNC_7(VAR_1, &VAR_4) == -1)
  goto end;

 VAR_9 = 0;
end:
 VAR_8 = VAR_0;
 FUNC_6(VAR_4.msg_control);
 VAR_0 = VAR_8;
 return (VAR_9);
}
