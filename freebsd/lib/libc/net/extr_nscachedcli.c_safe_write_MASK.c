
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {scalar_t__ tv_nsec; int tv_sec; } ;
struct kevent {scalar_t__ filter; size_t data; int flags; } ;
struct cached_connection_ {int sockfd; int write_queue; } ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *,int ,struct kevent*,int,struct timespec*) ;
 int FUNC_1 (int ,void const*,size_t,int ,int *,int ) ;

__attribute__((used)) static int
FUNC_2(struct cached_connection_ *VAR_4, const void *VAR_5,
    size_t VAR_6)
{
 struct kevent VAR_7;
 int VAR_8;
 size_t VAR_9;
 ssize_t VAR_10;
 struct timespec VAR_11;

 if (VAR_6 == 0)
  return (0);

 VAR_11.tv_sec = VAR_3;
 VAR_11.tv_nsec = 0;
 VAR_9 = 0;
 do {
  VAR_8 = FUNC_0(VAR_4->write_queue, ((void*)0), 0, &VAR_7,
      1, &VAR_11);
  if ((VAR_8 == 1) && (VAR_7.filter == VAR_0)) {
   VAR_10 = FUNC_1(VAR_4->sockfd, VAR_5 + VAR_9,
       VAR_7.data < VAR_6 - VAR_9 ?
       VAR_7.data : VAR_6 - VAR_9, VAR_2,
       ((void*)0), 0);
   if (VAR_10 == -1)
    return (-1);
   else
    VAR_9 += VAR_10;

   if (VAR_7.flags & VAR_1)
    return (VAR_9 < VAR_6 ? -1 : 0);
  } else
   return (-1);
 } while (VAR_9 < VAR_6);

 return (0);
}
