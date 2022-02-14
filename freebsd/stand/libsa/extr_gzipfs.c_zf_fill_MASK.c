
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int avail_in; int next_in; } ;
struct z_file {int zf_buf; TYPE_1__ zf_zstream; int zf_rawfd; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (int ,int,int) ;

__attribute__((used)) static int
FUNC_2(struct z_file *VAR_1)
{
    int VAR_2;
    int VAR_3;

    VAR_3 = VAR_0 - VAR_1->zf_zstream.avail_in;
    VAR_2 = 0;


    if (VAR_3 > 0) {

 if (VAR_3 < VAR_0)
     FUNC_0(VAR_1->zf_buf + VAR_3, VAR_1->zf_buf, VAR_0 - VAR_3);


 VAR_2 = FUNC_1(VAR_1->zf_rawfd, VAR_1->zf_buf + VAR_1->zf_zstream.avail_in, VAR_3);
 VAR_1->zf_zstream.next_in = VAR_1->zf_buf;
 if (VAR_2 >= 0)
     VAR_1->zf_zstream.avail_in += VAR_2;
    }
    return(VAR_2);
}
