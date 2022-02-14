
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct z_file {int zf_rawfd; int zf_zstream; } ;
struct open_file {scalar_t__ f_fsdata; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct z_file*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int
FUNC_3(struct open_file *VAR_0)
{
    struct z_file *VAR_1 = (struct z_file *)VAR_0->f_fsdata;

    FUNC_2(&(VAR_1->zf_zstream));
    FUNC_0(VAR_1->zf_rawfd);
    FUNC_1(VAR_1);
    return(0);
}
