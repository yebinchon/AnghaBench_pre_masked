
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int state; } ;
struct archive_write {int (* format_finish_entry ) (struct archive_write*) ;int (* format_close ) (struct archive_write*) ;TYPE_1__ archive; int filter_first; } ;
struct archive {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int ,int,char*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct archive_write*) ;
 int FUNC_4 (struct archive_write*) ;

__attribute__((used)) static int
FUNC_5(struct archive *VAR_7)
{
 struct archive_write *VAR_8 = (struct archive_write *)VAR_7;
 int VAR_9 = VAR_0, VAR_10 = VAR_0;

 FUNC_1(&VAR_8->archive, VAR_6,
     VAR_1 | VAR_4,
     "archive_write_close");
 if (VAR_8->archive.state == VAR_5
     || VAR_8->archive.state == VAR_2)
  return (VAR_0);

 FUNC_2(&VAR_8->archive);


 if (VAR_8->archive.state == VAR_3
     && VAR_8->format_finish_entry != ((void*)0))
  VAR_9 = ((VAR_8->format_finish_entry)(VAR_8));



 if (VAR_8->format_close != ((void*)0)) {
  VAR_10 = (VAR_8->format_close)(VAR_8);
  if (VAR_10 < VAR_9)
   VAR_9 = VAR_10;
 }


 VAR_10 = FUNC_0(VAR_8->filter_first);
 if (VAR_10 < VAR_9)
  VAR_9 = VAR_10;

 if (VAR_8->archive.state != VAR_4)
  VAR_8->archive.state = VAR_2;
 return (VAR_9);
}
