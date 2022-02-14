
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct split_file {int curfd; size_t curfile; char** descsv; scalar_t__ file_pos; int * filesv; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char) ;

__attribute__((used)) static int
FUNC_4(struct split_file *VAR_5)
{
    int VAR_6;

    for (VAR_6 = 0;; VAR_6++) {
 VAR_5->curfd = FUNC_1(VAR_5->filesv[VAR_5->curfile], VAR_3);
 if (VAR_5->curfd >= 0)
     break;
 if ((VAR_5->curfd == -1) && (VAR_4 != VAR_1))
     return (VAR_4);
 if (VAR_6 == VAR_2)
     return (VAR_0);
 FUNC_2("\nInsert disk labelled %s and press any key...",
     VAR_5->descsv[VAR_5->curfile]);
 FUNC_0();
 FUNC_3('\n');
    }
    VAR_5->file_pos = 0;
    return (0);
}
