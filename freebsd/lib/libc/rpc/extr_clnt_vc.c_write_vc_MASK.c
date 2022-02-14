
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr {scalar_t__ sa_family; } ;
struct TYPE_2__ {void* re_status; void* re_errno; } ;
struct ct_data {TYPE_1__ ct_error; int ct_fd; } ;
typedef int socklen_t ;
typedef int sa ;


 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (int ,void*,size_t) ;
 scalar_t__ FUNC_1 (int ,struct sockaddr*,int*) ;
 int FUNC_2 (int ,void*,size_t) ;
 void* VAR_2 ;

__attribute__((used)) static int
FUNC_3(void *VAR_3, void *VAR_4, int VAR_5)
{
 struct sockaddr VAR_6;
 socklen_t VAR_7;
 struct ct_data *VAR_8 = (struct ct_data *)VAR_3;
 int VAR_9, VAR_10;

 VAR_7 = sizeof(VAR_6);
 if ((FUNC_1(VAR_8->ct_fd, &VAR_6, &VAR_7) == 0) &&
     (VAR_6.sa_family == VAR_0)) {
  for (VAR_10 = VAR_5; VAR_10 > 0; VAR_10 -= VAR_9, VAR_4 = (char *)VAR_4 + VAR_9) {
   if ((VAR_9 = FUNC_0(VAR_8->ct_fd, VAR_4,
        (size_t)VAR_10)) == -1) {
    VAR_8->ct_error.re_errno = VAR_2;
    VAR_8->ct_error.re_status = VAR_1;
    return (-1);
   }
  }
 } else {
  for (VAR_10 = VAR_5; VAR_10 > 0; VAR_10 -= VAR_9, VAR_4 = (char *)VAR_4 + VAR_9) {
   if ((VAR_9 = FUNC_2(VAR_8->ct_fd, VAR_4, (size_t)VAR_10)) == -1) {
    VAR_8->ct_error.re_errno = VAR_2;
    VAR_8->ct_error.re_status = VAR_1;
    return (-1);
   }
  }
 }
 return (VAR_5);
}
