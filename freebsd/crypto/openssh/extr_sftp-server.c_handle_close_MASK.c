
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int name; int dirp; int fd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int,int ) ;
 int FUNC_4 (int) ;
 TYPE_1__* VAR_4 ;

__attribute__((used)) static int
FUNC_5(int VAR_5)
{
 int VAR_6 = -1;

 if (FUNC_3(VAR_5, VAR_2)) {
  VAR_6 = FUNC_0(VAR_4[VAR_5].fd);
  FUNC_2(VAR_4[VAR_5].name);
  FUNC_4(VAR_5);
 } else if (FUNC_3(VAR_5, VAR_1)) {
  VAR_6 = FUNC_1(VAR_4[VAR_5].dirp);
  FUNC_2(VAR_4[VAR_5].name);
  FUNC_4(VAR_5);
 } else {
  VAR_3 = VAR_0;
 }
 return VAR_6;
}
