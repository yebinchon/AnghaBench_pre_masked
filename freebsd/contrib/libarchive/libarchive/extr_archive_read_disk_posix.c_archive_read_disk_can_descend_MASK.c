
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tree {scalar_t__ visit_type; scalar_t__ descend; } ;
struct archive_read_disk {struct tree* tree; } ;
struct archive {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct archive*,int ,int,char*) ;

int
FUNC_1(struct archive *VAR_4)
{
 struct archive_read_disk *VAR_5 = (struct archive_read_disk *)VAR_4;
 struct tree *VAR_6 = VAR_5->tree;

 FUNC_0(VAR_4, VAR_0,
     VAR_2 | VAR_1,
     "archive_read_disk_can_descend");

 return (VAR_6->visit_type == VAR_3 && VAR_6->descend);
}
