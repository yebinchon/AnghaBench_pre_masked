
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct thread {int dummy; } ;
struct stat {int st_mode; } ;
struct TYPE_6__ {int flags; int fd; } ;
struct cloudabi_sys_file_stat_get_args {int buf; TYPE_1__ fd; int path_len; int path; } ;
typedef int csb ;
struct TYPE_7__ {void* st_filetype; } ;
typedef TYPE_2__ cloudabi_filestat_t ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int VAR_9 ;
 int FUNC_7 (char*) ;
 int FUNC_8 (struct stat*,TYPE_2__*) ;
 int FUNC_9 (int ,int ,char**) ;
 int FUNC_10 (TYPE_2__*,int ,int) ;
 int FUNC_11 (struct thread*,int ,int ,char*,int ,struct stat*,int *) ;
 int FUNC_12 (TYPE_2__*,int ,int) ;

int
FUNC_13(struct thread *VAR_10,
    struct cloudabi_sys_file_stat_get_args *VAR_11)
{
 struct stat VAR_12;
 cloudabi_filestat_t VAR_13;
 char *VAR_14;
 int VAR_15;

 FUNC_12(&VAR_13, 0, sizeof(VAR_13));

 VAR_15 = FUNC_9(VAR_11->path, VAR_11->path_len, &VAR_14);
 if (VAR_15 != 0)
  return (VAR_15);

 VAR_15 = FUNC_11(VAR_10,
     (VAR_11->fd.flags & VAR_8) != 0 ? 0 :
     VAR_0, VAR_11->fd.fd, VAR_14, VAR_9, &VAR_12, ((void*)0));
 FUNC_7(VAR_14);
 if (VAR_15 != 0)
  return (VAR_15);


 FUNC_8(&VAR_12, &VAR_13);
 if (FUNC_0(VAR_12.st_mode))
  VAR_13.st_filetype = VAR_1;
 else if (FUNC_1(VAR_12.st_mode))
  VAR_13.st_filetype = VAR_2;
 else if (FUNC_2(VAR_12.st_mode))
  VAR_13.st_filetype = VAR_3;
 else if (FUNC_3(VAR_12.st_mode))
  VAR_13.st_filetype = VAR_5;
 else if (FUNC_5(VAR_12.st_mode))
  VAR_13.st_filetype = VAR_4;
 else if (FUNC_6(VAR_12.st_mode)) {

  VAR_13.st_filetype = VAR_5;
 } else if (FUNC_4(VAR_12.st_mode))
  VAR_13.st_filetype = VAR_6;
 else
  VAR_13.st_filetype = VAR_7;
 return (FUNC_10(&VAR_13, VAR_11->buf, sizeof(VAR_13)));
}
