
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _region {int dummy; } ;
struct _citrus_db {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct _citrus_db*,char const*,struct _region*,int *) ;
 int FUNC_1 (struct _citrus_db**,struct _region*,int ,int ,int *) ;

__attribute__((used)) static int
FUNC_2(struct _citrus_db **VAR_2, struct _citrus_db *VAR_3, const char *VAR_4)
{
 struct _region VAR_5;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_3, VAR_4, &VAR_5, ((void*)0));
 if (VAR_6)
  return (VAR_6);
 VAR_6 = FUNC_1(VAR_2, &VAR_5, VAR_0, VAR_1, ((void*)0));
 if (VAR_6)
  return (VAR_6);

 return (0);
}
