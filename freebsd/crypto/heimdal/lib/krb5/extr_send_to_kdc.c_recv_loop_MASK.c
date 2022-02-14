
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int time_t ;
struct timeval {scalar_t__ tv_usec; int tv_sec; } ;
typedef scalar_t__ krb5_socket_t ;
struct TYPE_5__ {size_t length; void* data; } ;
typedef TYPE_1__ krb5_data ;
typedef int fd_set ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (size_t,size_t) ;
 void* FUNC_5 (void*,size_t) ;
 int FUNC_6 (scalar_t__,char*,int,int ) ;
 scalar_t__ FUNC_7 (scalar_t__,int ,int*) ;
 int FUNC_8 (scalar_t__,int *,int *,int *,struct timeval*) ;

__attribute__((used)) static int
FUNC_9 (krb5_socket_t VAR_4,
    time_t VAR_5,
    int VAR_6,
    size_t VAR_7,
    krb5_data *VAR_8)
{
     fd_set VAR_9;
     struct timeval VAR_10;
     int VAR_11;
     int VAR_12;


     if (VAR_4 >= VAR_1) {
  return -1;
     }


     FUNC_3(VAR_8);
     do {
  FUNC_1(&VAR_9);
  FUNC_0(VAR_4, &VAR_9);
  VAR_10.tv_sec = VAR_5;
  VAR_10.tv_usec = 0;
  VAR_11 = FUNC_8 (VAR_4 + 1, &VAR_9, ((void*)0), ((void*)0), &VAR_10);
  if (VAR_11 < 0) {
      if (VAR_3 == VAR_0)
   continue;
      return -1;
  } else if (VAR_11 == 0) {
      return 0;
  } else {
      void *VAR_13;

      if (FUNC_7 (VAR_4, VAR_2, &VAR_12) < 0) {
   FUNC_2 (VAR_8);
   return -1;
      }
      if(VAR_12 <= 0)
   return 0;

      if (VAR_7)
   VAR_12 = FUNC_4((size_t)VAR_12, VAR_7 - VAR_8->length);

      VAR_13 = FUNC_5 (VAR_8->data, VAR_8->length + VAR_12);
      if (VAR_13 == ((void*)0)) {
   FUNC_2 (VAR_8);
   return -1;
      }
      VAR_8->data = VAR_13;
      VAR_11 = FUNC_6 (VAR_4, (char*)VAR_13 + VAR_8->length, VAR_12, 0);
      if (VAR_11 < 0) {
   FUNC_2 (VAR_8);
   return -1;
      }
      VAR_8->length += VAR_11;
  }
     } while(!VAR_6 && (VAR_7 == 0 || VAR_8->length < VAR_7));
     return 0;
}
