
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uufsd {int d_mine; int d_fd; int d_name; } ;


 int FUNC_0 (struct uufsd*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ) ;

int
FUNC_3(struct uufsd *VAR_2)
{
 int VAR_3;

 FUNC_0(VAR_2, ((void*)0));

 if (VAR_2->d_mine & VAR_0)
  return (0);

 VAR_3 = FUNC_2(VAR_2->d_name, VAR_1);
 if (VAR_3 < 0) {
  FUNC_0(VAR_2, "failed to open disk for writing");
  return (-1);
 }

 FUNC_1(VAR_2->d_fd);
 VAR_2->d_fd = VAR_3;
 VAR_2->d_mine |= VAR_0;

 return (0);
}
