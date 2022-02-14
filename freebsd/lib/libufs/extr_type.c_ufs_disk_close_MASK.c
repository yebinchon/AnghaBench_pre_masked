
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uufsd {int d_fd; char* d_inoblock; int d_mine; char* d_sbcsum; int * d_name; } ;


 int FUNC_0 (struct uufsd*,int *) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;

int
FUNC_3(struct uufsd *VAR_1)
{
 FUNC_0(VAR_1, ((void*)0));
 FUNC_1(VAR_1->d_fd);
 VAR_1->d_fd = -1;
 if (VAR_1->d_inoblock != ((void*)0)) {
  FUNC_2(VAR_1->d_inoblock);
  VAR_1->d_inoblock = ((void*)0);
 }
 if (VAR_1->d_mine & VAR_0) {
  FUNC_2((char *)(uintptr_t)VAR_1->d_name);
  VAR_1->d_name = ((void*)0);
 }
 if (VAR_1->d_sbcsum != ((void*)0)) {
  FUNC_2(VAR_1->d_sbcsum);
  VAR_1->d_sbcsum = ((void*)0);
 }
 return (0);
}
