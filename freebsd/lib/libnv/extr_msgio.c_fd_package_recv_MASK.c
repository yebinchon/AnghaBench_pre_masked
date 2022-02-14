
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct msghdr {int iov_len; int msg_iovlen; size_t msg_controllen; int * msg_control; struct msghdr* msg_iov; int * iov_base; } ;
struct iovec {int iov_len; int msg_iovlen; size_t msg_controllen; int * msg_control; struct iovec* msg_iov; int * iov_base; } ;
struct cmsghdr {scalar_t__ cmsg_level; scalar_t__ cmsg_type; int cmsg_len; } ;
typedef int msg ;
typedef int iov ;
typedef int dummy ;


 int FUNC_0 (struct cmsghdr*) ;
 struct cmsghdr* FUNC_1 (struct msghdr*) ;
 int FUNC_2 (int ) ;
 struct cmsghdr* FUNC_3 (struct msghdr*,struct cmsghdr*) ;
 size_t FUNC_4 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_6 (int ,int*,int) ;
 int FUNC_7 (struct msghdr*,int) ;
 int * FUNC_8 (int,size_t) ;
 int FUNC_9 (int) ;
 int VAR_5 ;
 int FUNC_10 (int,int ,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int,struct msghdr*) ;

__attribute__((used)) static int
FUNC_13(int VAR_6, int *VAR_7, size_t VAR_8)
{
 struct msghdr VAR_9;
 struct cmsghdr *VAR_10;
 unsigned int VAR_11;
 int VAR_12, VAR_13;
 struct iovec VAR_14;
 uint8_t VAR_15;

 FUNC_5(VAR_6 >= 0);
 FUNC_5(VAR_8 > 0);
 FUNC_5(VAR_7 != ((void*)0));

 FUNC_7(&VAR_9, sizeof(VAR_9));
 FUNC_7(&VAR_14, sizeof(VAR_14));




 VAR_14.iov_base = &VAR_15;
 VAR_14.iov_len = sizeof(VAR_15);

 VAR_9.msg_iov = &VAR_14;
 VAR_9.msg_iovlen = 1;
 VAR_9.msg_controllen = VAR_8 * FUNC_4(sizeof(int));
 VAR_9.msg_control = FUNC_8(1, VAR_9.msg_controllen);
 if (VAR_9.msg_control == ((void*)0))
  return (-1);

 VAR_13 = -1;

 if (FUNC_12(VAR_6, &VAR_9) == -1)
  goto end;

 VAR_11 = 0;
 VAR_10 = FUNC_1(&VAR_9);
 while (VAR_10 && VAR_11 < VAR_8) {
  unsigned int VAR_16;

  if (VAR_10->cmsg_level != VAR_4 ||
      VAR_10->cmsg_type != VAR_3) {
   VAR_5 = VAR_0;
   break;
  }
  VAR_16 = (VAR_10->cmsg_len - FUNC_2(0)) / sizeof(int);
  if (VAR_11 + VAR_16 > VAR_8) {
   VAR_5 = VAR_0;
   break;
  }
  FUNC_6(FUNC_0(VAR_10), VAR_7 + VAR_11, sizeof(int) * VAR_16);
  VAR_10 = FUNC_3(&VAR_9, VAR_10);
  VAR_11 += VAR_16;
 }

 if (VAR_10 != ((void*)0) || VAR_11 < VAR_8) {
  unsigned int VAR_17;





  VAR_17 = VAR_11;
  for (VAR_11 = 0; VAR_11 < VAR_17; VAR_11++) {
   if (VAR_7[VAR_11] >= 0) {
    FUNC_9(VAR_7[VAR_11]);
   }
  }
  VAR_5 = VAR_0;
  goto end;
 }







 for (VAR_11 = 0; VAR_11 < VAR_8; VAR_11++) {
  (void) FUNC_10(VAR_7[VAR_11], VAR_2, VAR_1);
 }


 VAR_13 = 0;
end:
 VAR_12 = VAR_5;
 FUNC_11(VAR_9.msg_control);
 VAR_5 = VAR_12;
 return (VAR_13);
}
