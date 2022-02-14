
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reiserfs_key {int dummy; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (int,struct reiserfs_key*) ;
 scalar_t__ FUNC_3 (int,struct reiserfs_key*) ;
 int FUNC_4 (struct reiserfs_key*) ;
 char* VAR_1 ;
 int FUNC_5 (char*,char*,unsigned long long,...) ;

__attribute__((used)) static char *FUNC_6(struct reiserfs_key *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_4(VAR_2);
 if (FUNC_3(VAR_3, VAR_2) == VAR_0)
  FUNC_5(VAR_1, "%Lu(%Lu)",
   (unsigned long long)
   FUNC_1(FUNC_2(VAR_3, VAR_2)),
   (unsigned long long)
   FUNC_0(FUNC_2(VAR_3, VAR_2)));
 else
  FUNC_5(VAR_1, "0x%Lx",
   (unsigned long long)FUNC_2(VAR_3, VAR_2));
 return VAR_1;
}
