
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty {int dummy; } ;
struct TYPE_2__ {scalar_t__ cn_pri; char* cn_name; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int ,int ) ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct tty* FUNC_1 (int *,int *) ;
 int FUNC_2 (struct tty*) ;
 int FUNC_3 (struct tty*,int *,char*) ;

__attribute__((used)) static void
FUNC_4(void *VAR_4)
{
 struct tty *VAR_5;

 if (VAR_1.cn_pri != VAR_0 &&
     VAR_1.cn_name[0] != '\0') {
  VAR_5 = FUNC_1(&VAR_3, ((void*)0));
  FUNC_0(&VAR_2, FUNC_2(VAR_5), 0);
  FUNC_3(VAR_5, ((void*)0), "cfecons");
 }
}
