
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int nelts; int elt_size; scalar_t__ elts; } ;
typedef TYPE_1__ apr_array_header_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,void const*,int) ;
 int FUNC_3 (char*,char*,int) ;

void
FUNC_4(apr_array_header_t *VAR_0,
                       const void *VAR_1,
                       int VAR_2)
{
  int VAR_3;
  char *VAR_4;

  FUNC_1(0 <= VAR_2 && VAR_2 <= VAR_0->nelts);
  VAR_3 = VAR_0->nelts - VAR_2;



  FUNC_0(VAR_0);



  VAR_4 = (char *)VAR_0->elts + VAR_2 * VAR_0->elt_size;
  FUNC_3(VAR_4 + VAR_0->elt_size, VAR_4,
          VAR_0->elt_size * VAR_3);


  FUNC_2(VAR_4, VAR_1, VAR_0->elt_size);
}
