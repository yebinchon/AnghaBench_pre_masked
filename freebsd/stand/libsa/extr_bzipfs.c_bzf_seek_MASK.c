
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct open_file {scalar_t__ f_fsdata; } ;
struct TYPE_2__ {int total_out_lo32; } ;
struct bz_file {TYPE_1__ bzf_bzstream; } ;
typedef int off_t ;
typedef int discard ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;


 scalar_t__ FUNC_0 (struct open_file*,char*,int ,int *) ;
 scalar_t__ FUNC_1 (struct open_file*) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static off_t
FUNC_3(struct open_file *VAR_3, off_t VAR_4, int VAR_5)
{
    struct bz_file *VAR_6 = (struct bz_file *)VAR_3->f_fsdata;
    off_t VAR_7;
    char VAR_8[16];

    switch (VAR_5) {
    case 128:
 VAR_7 = VAR_4;
 break;
    case 129:
 VAR_7 = VAR_4 + VAR_6->bzf_bzstream.total_out_lo32;
 break;
    default:
 VAR_2 = VAR_0;
 return(-1);
    }


    if (VAR_7 < VAR_6->bzf_bzstream.total_out_lo32 && FUNC_1(VAR_3) != 0) {
 VAR_2 = VAR_1;
 return -1;
    }


    VAR_6 = (struct bz_file *)VAR_3->f_fsdata;


    while (VAR_7 > VAR_6->bzf_bzstream.total_out_lo32) {
 VAR_2 = FUNC_0(VAR_3, VAR_8, FUNC_2(sizeof(VAR_8),
     VAR_7 - VAR_6->bzf_bzstream.total_out_lo32), ((void*)0));
 if (VAR_2)
     return(-1);
    }

    return(VAR_6->bzf_bzstream.total_out_lo32);
}
