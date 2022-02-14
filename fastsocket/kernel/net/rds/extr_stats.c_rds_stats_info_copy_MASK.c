
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct rds_info_iterator {int dummy; } ;
struct rds_info_counter {char* name; int value; } ;
typedef int ctr ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct rds_info_iterator*,struct rds_info_counter*,int) ;
 int FUNC_2 (char const* const) ;
 int FUNC_3 (char*,char const* const,int) ;

void FUNC_4(struct rds_info_iterator *VAR_0,
    uint64_t *VAR_1, const char *const *VAR_2, size_t VAR_3)
{
 struct rds_info_counter VAR_4;
 size_t VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  FUNC_0(FUNC_2(VAR_2[VAR_5]) >= sizeof(VAR_4.name));
  FUNC_3(VAR_4.name, VAR_2[VAR_5], sizeof(VAR_4.name) - 1);
  VAR_4.name[sizeof(VAR_4.name) - 1] = '\0';
  VAR_4.value = VAR_1[VAR_5];

  FUNC_1(VAR_0, &VAR_4, sizeof(VAR_4));
 }
}
