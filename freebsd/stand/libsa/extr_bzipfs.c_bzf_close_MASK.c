
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct open_file {scalar_t__ f_fsdata; } ;
struct bz_file {int bzf_rawfd; int bzf_bzstream; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct bz_file*) ;

__attribute__((used)) static int
FUNC_3(struct open_file *VAR_0)
{
    struct bz_file *VAR_1 = (struct bz_file *)VAR_0->f_fsdata;

    FUNC_0(&(VAR_1->bzf_bzstream));
    FUNC_1(VAR_1->bzf_rawfd);
    FUNC_2(VAR_1);
    return(0);
}
