
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * next_in; scalar_t__ avail_in; } ;
struct z_file {TYPE_1__ zf_zstream; scalar_t__ zf_endseen; int zf_dataoffset; int zf_rawfd; } ;
struct open_file {scalar_t__ f_fsdata; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_2(struct open_file *VAR_1)
{
    struct z_file *VAR_2 = (struct z_file *)VAR_1->f_fsdata;

    if (FUNC_1(VAR_2->zf_rawfd, VAR_2->zf_dataoffset, VAR_0) == -1)
 return(-1);
    VAR_2->zf_zstream.avail_in = 0;
    VAR_2->zf_zstream.next_in = ((void*)0);
    VAR_2->zf_endseen = 0;
    (void)FUNC_0(&VAR_2->zf_zstream);

    return(0);
}
