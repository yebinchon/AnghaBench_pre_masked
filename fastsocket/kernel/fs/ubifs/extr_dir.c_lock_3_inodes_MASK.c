
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct TYPE_2__ {int ui_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 TYPE_1__* FUNC_1 (struct inode*) ;

__attribute__((used)) static void FUNC_2(struct inode *VAR_3, struct inode *VAR_4,
     struct inode *VAR_5)
{
 FUNC_0(&FUNC_1(VAR_3)->ui_mutex, VAR_0);
 if (VAR_4 != VAR_3)
  FUNC_0(&FUNC_1(VAR_4)->ui_mutex, VAR_1);
 if (VAR_5)
  FUNC_0(&FUNC_1(VAR_5)->ui_mutex, VAR_2);
}
