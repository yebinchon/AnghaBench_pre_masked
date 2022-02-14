
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsocket_ioctl_arg {int fd; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int* FUNC_1 (scalar_t__,int) ;
 int VAR_3 ;
 int FUNC_2 (int*) ;
 int VAR_4 ;
 int VAR_5 ;
 int* VAR_6 ;
 int FUNC_3 (int ,int ,struct fsocket_ioctl_arg*) ;
 int FUNC_4 (int*,int*,int) ;

int FUNC_5(int VAR_7)
{
 int *VAR_8 = VAR_6;
 int VAR_9 = VAR_7;
 struct fsocket_ioctl_arg VAR_10;

 if (VAR_7 >= VAR_5) {
  VAR_6 = FUNC_1(VAR_5 + VAR_2, sizeof(int));
  if (!VAR_6) {
   FUNC_0("Re allocate memory for listen fd set failed\n");
   VAR_10.fd = VAR_7;
   FUNC_3(VAR_4, VAR_1, &VAR_10);

   VAR_3 = VAR_0;
   VAR_9 = -1;
  } else {
   FUNC_4(VAR_6, VAR_8, VAR_5 * sizeof(int));
   FUNC_2(VAR_8);
   VAR_5 += VAR_2;
  }
 }
 return VAR_9;
}
