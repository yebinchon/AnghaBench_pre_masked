
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_write_disk {scalar_t__ fd; int archive; int st; int * pst; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,char*) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__,int *) ;
 scalar_t__ FUNC_2 (int ,int *) ;

__attribute__((used)) static int
FUNC_3(struct archive_write_disk *VAR_3)
{
 if (VAR_3->pst != ((void*)0)) {

  return (VAR_0);
 }
 if (FUNC_2(VAR_3->name, &VAR_3->st) == 0) {
  VAR_3->pst = &VAR_3->st;
  return (VAR_0);
 }
 FUNC_0(&VAR_3->archive, VAR_2, "Couldn't stat file");
 return (VAR_1);
}
