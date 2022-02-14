
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* buf; size_t in_buf; long file_size; char* line; scalar_t__ end_reached; } ;
typedef TYPE_1__ MY_OBJ ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 long FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ) ;

__attribute__((used)) static char *
FUNC_2(MY_OBJ * VAR_4)
{
    int VAR_5 = 0;
    long VAR_6;

    VAR_4->end_reached = VAR_1;
    while (VAR_4->buf[VAR_4->in_buf] != '\n') {
 if (VAR_4->buf[VAR_4->in_buf] == '\0') {
     VAR_6 = FUNC_0(VAR_4);

     if (VAR_6 < VAR_4->file_size) {



  FUNC_1(VAR_4, VAR_0);
  VAR_4->in_buf = 0;
     } else {
  if (!VAR_4->end_reached)
      VAR_4->end_reached = VAR_3;
  break;
     }
 } else if (VAR_5 < VAR_2)
     VAR_4->line[VAR_5++] = VAR_4->buf[VAR_4->in_buf++];
 else {
     if (VAR_5 == VAR_2)
  VAR_4->line[VAR_5++] = '\0';
     VAR_4->in_buf++;
 }
    }
    if (VAR_5 <= VAR_2)
 VAR_4->line[VAR_5] = '\0';
    if (!VAR_4->end_reached)
 VAR_4->in_buf++;

    return VAR_4->line;
}
