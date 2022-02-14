
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct split_file {int tot_pos; int file_pos; int curfd; } ;
struct open_file {scalar_t__ f_fsdata; } ;
typedef int off_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;



 scalar_t__ VAR_3 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (int ,int,int const) ;
 void* FUNC_2 (int ) ;
 size_t FUNC_3 (int,int ) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (struct open_file*,void*,size_t,size_t*) ;

__attribute__((used)) static off_t
FUNC_6(struct open_file *VAR_4, off_t VAR_5, int VAR_6)
{
    int VAR_7;
    size_t VAR_8;
    off_t VAR_9, VAR_10;
    struct split_file *VAR_11;

    VAR_11 = (struct split_file *)VAR_4->f_fsdata;

    VAR_10 = VAR_5;
    switch (VAR_6) {
    case 128:
 VAR_10 -= VAR_11->tot_pos;
 break;
    case 130:
 break;
    case 129:
 FUNC_4("splitfs_seek: SEEK_END not supported");
 break;
    default:
 VAR_3 = VAR_0;
 return (-1);
    }

    if (VAR_10 > 0) {





 void *VAR_12;

 VAR_12 = FUNC_2(VAR_2);
 if (VAR_12 == ((void*)0)) {
     VAR_3 = VAR_1;
     return (-1);
 }

 VAR_7 = 0;
 for (; VAR_10 > 0; VAR_10 -= VAR_7) {
     VAR_8 = 0;
     VAR_3 = FUNC_5(VAR_4, VAR_12, FUNC_3(VAR_10, VAR_2), &VAR_8);
     VAR_7 = FUNC_3(VAR_10, VAR_2) - VAR_8;
     if ((VAR_3 != 0) || (VAR_7 == 0))

  break;
 }
 FUNC_0(VAR_12);
 if (VAR_3 != 0)
     return (-1);
    }

    if (VAR_10 != 0) {

 if (VAR_11->file_pos + VAR_10 < 0)
     FUNC_4("splitfs_seek: can't seek past the beginning of the slice");
 VAR_9 = FUNC_1(VAR_11->curfd, VAR_10, 130);
 if (VAR_9 < 0) {
     VAR_3 = VAR_0;
     return (-1);
 }
 VAR_11->tot_pos += VAR_9 - VAR_11->file_pos;
 VAR_11->file_pos = VAR_9;
    }

    return (VAR_11->tot_pos);
}
