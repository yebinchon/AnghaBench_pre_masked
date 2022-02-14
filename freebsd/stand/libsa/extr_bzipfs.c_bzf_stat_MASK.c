
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_size; } ;
struct open_file {scalar_t__ f_fsdata; } ;
struct bz_file {int bzf_rawfd; } ;


 int FUNC_0 (int ,struct stat*) ;

__attribute__((used)) static int
FUNC_1(struct open_file *VAR_0, struct stat *VAR_1)
{
    struct bz_file *VAR_2 = (struct bz_file *)VAR_0->f_fsdata;
    int VAR_3;


    if ((VAR_3 = FUNC_0(VAR_2->bzf_rawfd, VAR_1)) == 0)
 VAR_1->st_size = -1;
    return(VAR_3);
}
