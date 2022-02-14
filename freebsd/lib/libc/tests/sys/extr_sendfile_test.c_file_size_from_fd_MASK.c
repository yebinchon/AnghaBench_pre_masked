
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_size; } ;
typedef int off_t ;


 int FUNC_0 (int ,int ,char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int,struct stat*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static off_t
FUNC_3(int VAR_1)
{
 struct stat VAR_2;

 FUNC_0(0, FUNC_1(VAR_1, &VAR_2),
     "fstat failed: %s", FUNC_2(VAR_0));

 return (VAR_2.st_size);
}
