
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_size; } ;
struct futx {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,struct stat*) ;
 int FUNC_2 (int ,int,int) ;
 int FUNC_3 (int,int ) ;

__attribute__((used)) static void
FUNC_4(void)
{
 struct stat VAR_3;
 int VAR_4;

 VAR_4 = FUNC_2(VAR_2, VAR_1|VAR_0, 0644);
 if (VAR_4 < 0)
  return;






 if (FUNC_1(VAR_4, &VAR_3) != -1 && VAR_3.st_size % sizeof(struct futx) != 0)
  FUNC_3(VAR_4, 0);
 FUNC_0(VAR_4);
}
