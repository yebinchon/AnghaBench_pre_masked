
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int multilist_t ;
struct TYPE_3__ {int b_birth; int b_dva; int b_spa; } ;
typedef TYPE_1__ arc_buf_hdr_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 unsigned int FUNC_2 (int ,int *,int ) ;
 unsigned int FUNC_3 (int *) ;

unsigned int
FUNC_4(multilist_t *VAR_0, void *VAR_1)
{
 arc_buf_hdr_t *VAR_2 = VAR_1;






 FUNC_0(!FUNC_1(VAR_2));
 return (FUNC_2(VAR_2->b_spa, &VAR_2->b_dva, VAR_2->b_birth) %
     FUNC_3(VAR_0));
}
