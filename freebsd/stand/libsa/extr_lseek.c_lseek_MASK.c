
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct open_file {int f_flags; int f_offset; scalar_t__ f_ralen; TYPE_1__* f_ops; int f_raoffset; } ;
typedef int off_t ;
struct TYPE_2__ {int (* fo_seek ) (struct open_file*,int,int const) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 int VAR_4 ;

 unsigned int VAR_5 ;
 int VAR_6 ;
 struct open_file* VAR_7 ;
 int FUNC_0 (struct open_file*,int,int const) ;
 int FUNC_1 (struct open_file*,int,int) ;

off_t
FUNC_2(int VAR_8, off_t VAR_9, int VAR_10)
{
    off_t VAR_11, VAR_12, VAR_13;
    struct open_file *VAR_14 = &VAR_7[VAR_8];

    if ((unsigned)VAR_8 >= VAR_5 || VAR_14->f_flags == 0) {
 VAR_6 = VAR_0;
 return (-1);
    }

    if (VAR_14->f_flags & VAR_3) {



 switch (VAR_10) {
 case 128:
     VAR_14->f_offset = VAR_9;
     break;
 case 129:
     VAR_14->f_offset += VAR_9;
     break;
 default:
     VAR_6 = VAR_2;
     return (-1);
 }
 return (VAR_14->f_offset);
    }
    if (VAR_14->f_ralen != 0 && VAR_10 != VAR_4) {
 if ((VAR_12 = (VAR_14->f_ops->fo_seek)(VAR_14, (off_t)0, 129)) == -1)
     return (-1);
 VAR_11 = VAR_12 - VAR_14->f_ralen;
 switch (VAR_10) {
 case 128:
     VAR_13 = VAR_9;
     break;
 case 129:
     VAR_13 = VAR_11 + VAR_9;
     break;
 default:
     VAR_6 = VAR_1;
     return (-1);
 }
 if (VAR_11 <= VAR_13 && VAR_13 < VAR_12) {
     VAR_14->f_raoffset += VAR_13 - VAR_11;
     VAR_14->f_ralen -= VAR_13 - VAR_11;
     return (VAR_13);
 }
    }






    if (VAR_10 == 129)
 VAR_9 -= VAR_14->f_ralen;




    VAR_14->f_ralen = 0;

    return (VAR_14->f_ops->fo_seek)(VAR_14, VAR_9, VAR_10);
}
