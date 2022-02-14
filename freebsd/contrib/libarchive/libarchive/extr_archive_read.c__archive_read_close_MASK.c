
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ state; } ;
struct archive_read {TYPE_1__ archive; } ;
struct archive {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*,int ,int,char*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct archive_read*) ;

__attribute__((used)) static int
FUNC_3(struct archive *VAR_5)
{
 struct archive_read *VAR_6 = (struct archive_read *)VAR_5;
 int VAR_7 = VAR_0, VAR_8 = VAR_0;

 FUNC_0(&VAR_6->archive, VAR_1,
     VAR_2 | VAR_4, "archive_read_close");
 if (VAR_6->archive.state == VAR_3)
  return (VAR_0);
 FUNC_1(&VAR_6->archive);
 VAR_6->archive.state = VAR_3;




 VAR_8 = FUNC_2(VAR_6);
 if (VAR_8 < VAR_7)
  VAR_7 = VAR_8;

 return (VAR_7);
}
