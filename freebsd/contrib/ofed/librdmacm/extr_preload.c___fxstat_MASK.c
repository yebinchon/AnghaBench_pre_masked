
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stat {int st_mode; } ;
struct TYPE_2__ {int (* fxstat ) (int,int,struct stat*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,int*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 () ;
 TYPE_1__ VAR_3 ;
 int FUNC_2 (int,int,struct stat*) ;
 int FUNC_3 (int,int,struct stat*) ;

int FUNC_4(int VAR_4, int VAR_5, struct stat *VAR_6)
{
 int VAR_7, VAR_8;

 FUNC_1();
 if (FUNC_0(VAR_5, &VAR_7) == VAR_2) {
  VAR_8 = VAR_3.fxstat(VAR_4, VAR_5, VAR_6);
  if (!VAR_8)
   VAR_6->st_mode = (VAR_6->st_mode & ~VAR_0) | VAR_1;
 } else {
  VAR_8 = VAR_3.fxstat(VAR_4, VAR_7, VAR_6);
 }
 return VAR_8;
}
