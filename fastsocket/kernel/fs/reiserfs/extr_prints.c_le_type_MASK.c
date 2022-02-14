
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reiserfs_key {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int,struct reiserfs_key*) ;
 int FUNC_1 (struct reiserfs_key*) ;

__attribute__((used)) static char *FUNC_2(struct reiserfs_key *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_1(VAR_4);

 if (FUNC_0(VAR_5, VAR_4) == VAR_3)
  return "SD";
 if (FUNC_0(VAR_5, VAR_4) == VAR_1)
  return "DIR";
 if (FUNC_0(VAR_5, VAR_4) == VAR_0)
  return "DIRECT";
 if (FUNC_0(VAR_5, VAR_4) == VAR_2)
  return "IND";
 return "UNKNOWN";
}
