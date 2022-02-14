
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct open_file {struct bz_file* f_fsdata; } ;
struct bz_file {int bzf_bzstream; int bzf_rawfd; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int ,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct bz_file*,int) ;
 int FUNC_3 (struct bz_file*) ;
 int FUNC_4 (int ,int ,int ) ;
 struct bz_file* FUNC_5 (int) ;

__attribute__((used)) static int
FUNC_6(struct open_file *VAR_2)
{
    struct bz_file *VAR_3 = (struct bz_file *)VAR_2->f_fsdata;
    struct bz_file *VAR_4;
    VAR_4 = FUNC_5(sizeof(struct bz_file));
    if (VAR_4 == ((void*)0))
 return(-1);
    FUNC_2(VAR_4, sizeof(struct bz_file));
    VAR_4->bzf_rawfd = VAR_3->bzf_rawfd;


    if (FUNC_1(&(VAR_4->bzf_bzstream), 0, 1) != VAR_0) {
 FUNC_3(VAR_4);
 return(-1);
    }


    if (FUNC_4(VAR_3->bzf_rawfd, 0, VAR_1) == -1) {
 FUNC_0(&(VAR_4->bzf_bzstream));
 FUNC_3(VAR_4);
 return(-1);
    }


    FUNC_0(&(VAR_3->bzf_bzstream));
    FUNC_3(VAR_3);


    VAR_2->f_fsdata = VAR_4;

    return(0);
}
