
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int state; } ;
struct archive_write {int (* format_finish_entry ) (struct archive_write*) ;TYPE_1__ archive; } ;
struct archive {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,int ,int,char*) ;
 int FUNC_1 (struct archive_write*) ;

__attribute__((used)) static int
FUNC_2(struct archive *VAR_4)
{
 struct archive_write *VAR_5 = (struct archive_write *)VAR_4;
 int VAR_6 = VAR_0;

 FUNC_0(&VAR_5->archive, VAR_3,
     VAR_2 | VAR_1,
     "archive_write_finish_entry");
 if (VAR_5->archive.state & VAR_1
     && VAR_5->format_finish_entry != ((void*)0))
  VAR_6 = (VAR_5->format_finish_entry)(VAR_5);
 VAR_5->archive.state = VAR_2;
 return (VAR_6);
}
