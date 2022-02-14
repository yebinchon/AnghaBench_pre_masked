
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct verify_status {scalar_t__ vs_dev; scalar_t__ vs_ino; int vs_status; struct verify_status* vs_next; } ;
struct stat {scalar_t__ st_dev; scalar_t__ st_ino; } ;


 int VAR_0 ;
 struct verify_status* VAR_1 ;

int
FUNC_0(struct stat *VAR_2)
{
 struct verify_status *VAR_3;

 for (VAR_3 = VAR_1; VAR_3 != ((void*)0); VAR_3 = VAR_3->vs_next) {
  if (VAR_2->st_dev == VAR_3->vs_dev &&
      VAR_2->st_ino == VAR_3->vs_ino)
   return (VAR_3->vs_status);
 }
 return (VAR_0);
}
