
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; int st_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,char*,int ) ;
 scalar_t__ FUNC_2 (int,struct stat*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_3(int VAR_7)
{
 int VAR_8;
 struct stat VAR_9;

 if (FUNC_2(VAR_7, &VAR_9) != 0)
  FUNC_0(4, "fstat failed");
 VAR_8 = VAR_9.st_mode & VAR_2;
 if (VAR_8 != VAR_3 && VAR_8 != VAR_1)
  FUNC_1(4, "%s is not a valid file or link", VAR_6);
 VAR_5 = VAR_0;
 VAR_4 = VAR_9.st_size;
}
