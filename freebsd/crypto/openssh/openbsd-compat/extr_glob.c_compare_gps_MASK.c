
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct glob_path_stat {int gps_path; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int
FUNC_1(const void *VAR_0, const void *VAR_1)
{
 const struct glob_path_stat *VAR_2 = (const struct glob_path_stat *)VAR_0;
 const struct glob_path_stat *VAR_3 = (const struct glob_path_stat *)VAR_1;

 return(FUNC_0(VAR_2->gps_path, VAR_3->gps_path));
}
