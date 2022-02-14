
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_write_disk {int archive; int flags; int name; } ;
struct archive_string {int s; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int,char*,int ) ;
 int FUNC_1 (struct archive_string*) ;
 int FUNC_2 (struct archive_string*) ;
 int FUNC_3 (int ,int*,struct archive_string*,int ) ;

__attribute__((used)) static int
FUNC_4(struct archive_write_disk *VAR_1)
{
 struct archive_string VAR_2;
 int VAR_3;
 int VAR_4;
 FUNC_2(&VAR_2);
 VAR_4 = FUNC_3(VAR_1->name, &VAR_3, &VAR_2,
     VAR_1->flags);
 if (VAR_4 != VAR_0) {
  FUNC_0(&VAR_1->archive, VAR_3, "%s",
      VAR_2.s);
 }
 FUNC_1(&VAR_2);
 return VAR_4;
}
