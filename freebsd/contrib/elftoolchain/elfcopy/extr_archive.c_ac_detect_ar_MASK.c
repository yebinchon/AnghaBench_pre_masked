
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_entry {int dummy; } ;
struct archive {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct archive*) ;
 int FUNC_1 (struct archive*) ;
 struct archive* FUNC_2 () ;
 int FUNC_3 (struct archive*,struct archive_entry**) ;
 int FUNC_4 (struct archive*,int,int) ;
 int FUNC_5 (struct archive*) ;

int
FUNC_6(int VAR_1)
{
 struct archive *VAR_2;
 struct archive_entry *VAR_3;
 int VAR_4;

 VAR_4 = -1;
 if ((VAR_2 = FUNC_2()) == ((void*)0))
  return (0);
 FUNC_5(VAR_2);
 if (FUNC_4(VAR_2, VAR_1, 10240) == VAR_0)
  VAR_4 = FUNC_3(VAR_2, &VAR_3);
 FUNC_0(VAR_2);
 FUNC_1(VAR_2);

 return (VAR_4 == VAR_0);
}
