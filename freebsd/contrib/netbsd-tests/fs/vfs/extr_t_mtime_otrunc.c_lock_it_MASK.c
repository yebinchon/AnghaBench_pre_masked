
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
struct stat {scalar_t__ st_mtime; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int,int) ;
 scalar_t__ FUNC_2 (int ,struct stat*) ;

__attribute__((used)) static time_t
FUNC_3(void)
{
 struct stat VAR_4;

 if (FUNC_2(VAR_0, &VAR_4) != 0)
  VAR_4.st_mtime = 0;

 int VAR_5 = FUNC_1(VAR_0, VAR_3|VAR_1|VAR_2, 0666);
 if (VAR_5 == -1) return 0;
 FUNC_0(VAR_5);

 return VAR_4.st_mtime;
}
