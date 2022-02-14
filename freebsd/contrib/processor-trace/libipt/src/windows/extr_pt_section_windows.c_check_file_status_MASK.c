
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pt_section {struct pt_sec_windows_status* status; } ;
struct TYPE_2__ {scalar_t__ st_size; scalar_t__ st_mtime; } ;
struct pt_sec_windows_status {TYPE_1__ stat; } ;
struct _stat {scalar_t__ st_size; scalar_t__ st_mtime; } ;


 int FUNC_0 (int,struct _stat*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_1(struct pt_section *VAR_3, int VAR_4)
{
 struct pt_sec_windows_status *VAR_5;
 struct _stat VAR_6;
 int VAR_7;

 if (!VAR_3)
  return -VAR_2;

 VAR_7 = FUNC_0(VAR_4, &VAR_6);
 if (VAR_7)
  return -VAR_0;

 VAR_5 = VAR_3->status;
 if (!VAR_5)
  return -VAR_2;

 if (VAR_6.st_size != VAR_5->stat.st_size)
  return -VAR_1;

 if (VAR_6.st_mtime != VAR_5->stat.st_mtime)
  return -VAR_1;

 return 0;
}
