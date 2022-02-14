
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct _stat {scalar_t__ st_size; } ;
struct pt_sec_windows_status {struct _stat stat; } ;


 struct pt_sec_windows_status* FUNC_0 (int) ;
 int FUNC_1 (char const*,struct _stat*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_2(void **VAR_3, uint64_t *VAR_4, const char *VAR_5)
{
 struct pt_sec_windows_status *VAR_6;
 struct _stat VAR_7;
 int VAR_8;

 if (!VAR_3 || !VAR_4)
  return -VAR_1;

 VAR_8 = FUNC_1(VAR_5, &VAR_7);
 if (VAR_8 < 0)
  return VAR_8;

 if (VAR_7.st_size < 0)
  return -VAR_0;

 VAR_6 = FUNC_0(sizeof(*VAR_6));
 if (!VAR_6)
  return -VAR_2;

 VAR_6->stat = VAR_7;

 *VAR_3 = VAR_6;
 *VAR_4 = VAR_7.st_size;

 return 0;
}
