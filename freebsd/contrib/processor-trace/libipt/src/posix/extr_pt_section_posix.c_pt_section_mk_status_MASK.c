
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct stat {scalar_t__ st_size; } ;
struct pt_sec_posix_status {struct stat stat; } ;


 struct pt_sec_posix_status* FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char const*,struct stat*) ;

int FUNC_2(void **VAR_4, uint64_t *VAR_5, const char *VAR_6)
{
 struct pt_sec_posix_status *VAR_7;
 struct stat VAR_8;
 int VAR_9;

 if (!VAR_4 || !VAR_5)
  return -VAR_2;

 VAR_9 = FUNC_1(VAR_6, &VAR_8);
 if (VAR_9 < 0)
  return -VAR_0;

 if (VAR_8.st_size < 0)
  return -VAR_1;

 VAR_7 = FUNC_0(sizeof(*VAR_7));
 if (!VAR_7)
  return -VAR_3;

 VAR_7->stat = VAR_8;

 *VAR_4 = VAR_7;
 *VAR_5 = (uint64_t) VAR_8.st_size;

 return 0;
}
