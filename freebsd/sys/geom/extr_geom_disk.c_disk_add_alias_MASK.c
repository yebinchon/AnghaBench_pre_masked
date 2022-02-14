
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct disk_alias {char const* da_alias; } ;
struct disk {int d_aliases; } ;


 int FUNC_0 (int *,struct disk_alias*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (char*,char const*) ;
 scalar_t__ FUNC_3 (char const*) ;

void
FUNC_4(struct disk *VAR_2, const char *VAR_3)
{
 struct disk_alias *VAR_4;

 VAR_4 = (struct disk_alias *)FUNC_1(
  sizeof(struct disk_alias) + FUNC_3(VAR_3) + 1, VAR_0);
 FUNC_2((char *)(VAR_4 + 1), VAR_3);
 VAR_4->da_alias = (const char *)(VAR_4 + 1);
 FUNC_0(&VAR_2->d_aliases, VAR_4, VAR_1);
}
