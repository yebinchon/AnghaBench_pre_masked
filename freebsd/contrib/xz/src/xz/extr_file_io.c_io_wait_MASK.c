
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pollfd {scalar_t__ revents; void* events; int fd; } ;
typedef int io_wait_ret ;
struct TYPE_3__ {int dest_name; int src_name; int dest_fd; int src_fd; } ;
typedef TYPE_1__ file_pair ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ,int ,int ) ;
 scalar_t__ VAR_9 ;
 int FUNC_3 (struct pollfd*,int,int) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_10 ;
 int * VAR_11 ;

__attribute__((used)) static io_wait_ret
FUNC_5(file_pair *VAR_12, int VAR_13, bool VAR_14)
{
 struct pollfd VAR_15[2];

 if (VAR_14) {
  VAR_15[0].fd = VAR_12->src_fd;
  VAR_15[0].events = VAR_5;
 } else {
  VAR_15[0].fd = VAR_12->dest_fd;
  VAR_15[0].events = VAR_6;
 }

 VAR_15[1].fd = VAR_11[0];
 VAR_15[1].events = VAR_5;

 while (1) {
  const int VAR_16 = FUNC_3(VAR_15, 2, VAR_13);

  if (VAR_10)
   return VAR_2;

  if (VAR_16 == -1) {
   if (VAR_7 == VAR_1 || VAR_7 == VAR_0)
    continue;

   FUNC_2(FUNC_0("%s: poll() failed: %s"),
     VAR_14 ? VAR_12->src_name
      : VAR_12->dest_name,
     FUNC_4(VAR_7));
   return VAR_2;
  }

  if (VAR_16 == 0) {
   FUNC_1(VAR_9 != 0);
   VAR_8 = 1;
   return VAR_4;
  }

  if (VAR_15[0].revents != 0)
   return VAR_3;
 }
}
