
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* zfs_name; int * zfs_hdl; } ;
typedef TYPE_1__ zfs_handle_t ;
struct TYPE_6__ {unsigned long long zc_cookie; int zc_name; int member_0; } ;
typedef TYPE_2__ zfs_cmd_t ;
typedef int time_t ;
struct tm {int tm_hour; int tm_min; int tm_sec; } ;
struct TYPE_7__ {unsigned long long pa_fd; unsigned long long pa_size; scalar_t__ pa_parsable; scalar_t__ pa_astitle; TYPE_1__* pa_zhp; } ;
typedef TYPE_3__ progress_arg_t ;
typedef int libzfs_handle_t ;
typedef int buf ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 struct tm* FUNC_1 (int *) ;
 int FUNC_2 (char*,char*,int,unsigned long long,int) ;
 int FUNC_3 (int) ;
 int VAR_1 ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int ,TYPE_2__*) ;
 int FUNC_7 (unsigned long long,char*,int) ;

__attribute__((used)) static void *
FUNC_8(void *VAR_2)
{
 progress_arg_t *VAR_3 = VAR_2;
 zfs_cmd_t VAR_4 = { 0 };
 zfs_handle_t *VAR_5 = VAR_3->pa_zhp;
 libzfs_handle_t *VAR_6 = VAR_5->zfs_hdl;
 unsigned long long VAR_7, VAR_8;
 char VAR_9[16];
 time_t VAR_10;
 struct tm *VAR_11;

 (void) FUNC_4(VAR_4.zc_name, VAR_5->zfs_name, sizeof (VAR_4.zc_name));

 if (!VAR_3->pa_parsable && !VAR_3->pa_astitle)
  (void) FUNC_0(VAR_1, "TIME        SENT   SNAPSHOT\n");




 for (;;) {
  (void) FUNC_3(1);

  VAR_4.zc_cookie = VAR_3->pa_fd;
  if (FUNC_6(VAR_6, VAR_0, &VAR_4) != 0)
   return ((void *)-1);

  (void) FUNC_5(&VAR_10);
  VAR_11 = FUNC_1(&VAR_10);
  VAR_7 = VAR_4.zc_cookie;

  if (VAR_3->pa_astitle) {
   int VAR_12;
   if (VAR_3->pa_size > VAR_7)
    VAR_12 = 100 * VAR_7 / VAR_3->pa_size;
   else
    VAR_12 = 100;

   FUNC_2("sending %s (%d%%: %llu/%llu)",
       VAR_5->zfs_name, VAR_12, VAR_7, VAR_3->pa_size);
  } else if (VAR_3->pa_parsable) {
   (void) FUNC_0(VAR_1, "%02d:%02d:%02d\t%llu\t%s\n",
       VAR_11->tm_hour, VAR_11->tm_min, VAR_11->tm_sec,
       VAR_7, VAR_5->zfs_name);
  } else {
   FUNC_7(VAR_7, VAR_9, sizeof (VAR_9));
   (void) FUNC_0(VAR_1, "%02d:%02d:%02d   %5s   %s\n",
       VAR_11->tm_hour, VAR_11->tm_min, VAR_11->tm_sec,
       VAR_9, VAR_5->zfs_name);
  }
 }
}
