
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_entry {int acl; int archive; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ,int *,int,int*,int*,int*,int*,char const**) ;
 scalar_t__ VAR_2 ;

int
FUNC_2(struct archive_entry *VAR_3, int VAR_4, int *VAR_5,
    int *VAR_6, int *VAR_7, int *VAR_8, const char **VAR_9)
{
 int VAR_10;
 VAR_10 = FUNC_1(VAR_3->archive, &VAR_3->acl, VAR_4, VAR_5,
  VAR_6, VAR_7, VAR_8, VAR_9);
 if (VAR_10 == VAR_0 && VAR_2 == VAR_1)
  FUNC_0(1, "No memory");
 return (VAR_10);
}
