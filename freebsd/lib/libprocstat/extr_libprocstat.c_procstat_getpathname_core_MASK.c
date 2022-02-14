
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct procstat_core {int dummy; } ;
struct kinfo_file {scalar_t__ kf_fd; int kf_path; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct kinfo_file*) ;
 struct kinfo_file* FUNC_1 (struct procstat_core*,int*) ;
 int FUNC_2 (char*,int ,size_t) ;

__attribute__((used)) static int
FUNC_3(struct procstat_core *VAR_1, char *VAR_2,
    size_t VAR_3)
{
 struct kinfo_file *VAR_4;
 int VAR_5, VAR_6, VAR_7;

 VAR_4 = FUNC_1(VAR_1, &VAR_5);
 if (VAR_4 == ((void*)0))
  return (-1);
 VAR_7 = -1;
 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
  if (VAR_4[VAR_6].kf_fd != VAR_0)
   continue;
  FUNC_2(VAR_2, VAR_4[VAR_6].kf_path, VAR_3);
  VAR_7 = 0;
  break;
 }
 FUNC_0(VAR_4);
 return (VAR_7);
}
