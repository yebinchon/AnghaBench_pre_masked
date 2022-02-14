
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reiserfs_jh {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct reiserfs_jh* FUNC_1 (int,int ) ;
 int VAR_1 ;
 int FUNC_2 () ;

__attribute__((used)) static struct reiserfs_jh *FUNC_3(void)
{
 struct reiserfs_jh *VAR_2;
 while (1) {
  VAR_2 = FUNC_1(sizeof(*VAR_2), VAR_0);
  if (VAR_2) {
   FUNC_0(&VAR_1);
   return VAR_2;
  }
  FUNC_2();
 }
}
