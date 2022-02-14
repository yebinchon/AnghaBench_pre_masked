
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct split_file {int tot_pos; int file_pos; int curfile; int filesc; int curfd; } ;
struct open_file {scalar_t__ f_fsdata; } ;
typedef int ssize_t ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,void*,size_t) ;
 int FUNC_2 (struct split_file*) ;

__attribute__((used)) static int
FUNC_3(struct open_file *VAR_1, void *VAR_2, size_t VAR_3, size_t *VAR_4)
{
    ssize_t VAR_5;
    size_t VAR_6;
    struct split_file *VAR_7;

    VAR_7 = (struct split_file *)VAR_1->f_fsdata;
    VAR_6 = 0;
    do {
 VAR_5 = FUNC_1(VAR_7->curfd, VAR_2, VAR_3 - VAR_6);


 if (VAR_5 == -1)
     return (VAR_0);

 VAR_7->tot_pos += VAR_5;
 VAR_7->file_pos += VAR_5;
 VAR_6 += VAR_5;
 VAR_2 = (char *)VAR_2 + VAR_5;

 if (VAR_6 < VAR_3) {
     if (VAR_7->curfile == (VAR_7->filesc - 1))
  break;


     if (FUNC_0(VAR_7->curfd) != 0)
  return (VAR_0);

     VAR_7->curfile++;
     VAR_0 = FUNC_2(VAR_7);
     if (VAR_0)
      return (VAR_0);
 }
    } while (VAR_6 < VAR_3);

    if (VAR_4 != ((void*)0))
 *VAR_4 = VAR_3 - VAR_6;

    return (0);
}
