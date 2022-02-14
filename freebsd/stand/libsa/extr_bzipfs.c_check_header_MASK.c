
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int next_in; int avail_in; } ;
struct bz_file {TYPE_1__ bzf_bzstream; } ;


 int* VAR_0 ;
 int FUNC_0 (struct bz_file*) ;

__attribute__((used)) static int
FUNC_1(struct bz_file *VAR_1)
{
    unsigned int VAR_2;
    int VAR_3;


    for (VAR_2 = 0; VAR_2 < 3; VAR_2++) {
 VAR_3 = FUNC_0(VAR_1);
 if (VAR_3 != VAR_0[VAR_2]) {
     return(1);
 }
    }

    VAR_3 = FUNC_0(VAR_1);
    if (VAR_3 < '1' || VAR_3 > '9')
 return(1);


    VAR_1->bzf_bzstream.next_in -= 4;
    VAR_1->bzf_bzstream.avail_in += 4;

    return(0);
}
