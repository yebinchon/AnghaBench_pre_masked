
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int total_out; } ;
struct z_file {TYPE_1__ zf_zstream; } ;
struct open_file {scalar_t__ f_fsdata; } ;
typedef int off_t ;
typedef int discard ;


 scalar_t__ VAR_0 ;


 scalar_t__ VAR_1 ;
 int FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (struct open_file*,char*,int ,int *) ;
 scalar_t__ FUNC_2 (struct open_file*) ;

__attribute__((used)) static off_t
FUNC_3(struct open_file *VAR_2, off_t VAR_3, int VAR_4)
{
    struct z_file *VAR_5 = (struct z_file *)VAR_2->f_fsdata;
    off_t VAR_6;
    char VAR_7[16];

    switch (VAR_4) {
    case 128:
 VAR_6 = VAR_3;
 break;
    case 129:
 VAR_6 = VAR_3 + VAR_5->zf_zstream.total_out;
 break;
    default:
 VAR_1 = VAR_0;
 return(-1);
    }


    if (VAR_6 < VAR_5->zf_zstream.total_out && FUNC_2(VAR_2) != 0)
 return(-1);


    while (VAR_6 > VAR_5->zf_zstream.total_out) {
 VAR_1 = FUNC_1(VAR_2, VAR_7, FUNC_0(sizeof(VAR_7),
     VAR_6 - VAR_5->zf_zstream.total_out), ((void*)0));
 if (VAR_1)
     return(-1);
    }

    return(VAR_5->zf_zstream.total_out);
}
