
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct verify_status {int vs_status; int vs_ino; int vs_dev; struct verify_status* vs_next; } ;
struct stat {int st_ino; int st_dev; } ;


 struct verify_status* FUNC_0 (int) ;
 struct verify_status* VAR_0 ;

void
FUNC_1(struct stat *VAR_1, int VAR_2)
{
 struct verify_status *VAR_3;

 VAR_3 = FUNC_0(sizeof(struct verify_status));
 VAR_3->vs_next = VAR_0;
 VAR_3->vs_dev = VAR_1->st_dev;
 VAR_3->vs_ino = VAR_1->st_ino;
 VAR_3->vs_status = VAR_2;
 VAR_0 = VAR_3;
}
