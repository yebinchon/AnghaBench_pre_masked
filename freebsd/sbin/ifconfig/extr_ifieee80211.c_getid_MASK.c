
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211req {int i_val; size_t i_len; void* i_data; int i_type; int i_name; } ;
typedef int ireq ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int,int ,struct ieee80211req*) ;
 int FUNC_1 (struct ieee80211req*,int ,int) ;
 int VAR_3 ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static int
FUNC_3(int VAR_4, int VAR_5, void *VAR_6, size_t VAR_7, int *VAR_8, int VAR_9)
{
 struct ieee80211req VAR_10;

 (void) FUNC_1(&VAR_10, 0, sizeof(VAR_10));
 (void) FUNC_2(VAR_10.i_name, VAR_3, sizeof(VAR_10.i_name));
 VAR_10.i_type = (!VAR_9) ? VAR_1 : VAR_0;
 VAR_10.i_val = VAR_5;
 VAR_10.i_data = VAR_6;
 VAR_10.i_len = VAR_7;
 if (FUNC_0(VAR_4, VAR_2, &VAR_10) < 0)
  return -1;
 *VAR_8 = VAR_10.i_len;
 return 0;
}
