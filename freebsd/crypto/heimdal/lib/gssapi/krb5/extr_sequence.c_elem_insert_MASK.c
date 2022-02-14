
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gss_msg_order {unsigned int jitter_window; unsigned int length; int * elem; } ;
typedef int OM_uint32 ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct gss_msg_order*,unsigned int,int ) ;
 int FUNC_2 (int *,int *,unsigned int) ;

__attribute__((used)) static void
FUNC_3(struct gss_msg_order *VAR_0,
     unsigned int VAR_1,
     OM_uint32 VAR_2)
{
    FUNC_0(VAR_0->jitter_window > VAR_1);

    if (VAR_0->length > VAR_1)
 FUNC_2(&VAR_0->elem[VAR_1 + 1], &VAR_0->elem[VAR_1],
  (VAR_0->length - VAR_1 - 1) * sizeof(VAR_0->elem[0]));

    FUNC_1(VAR_0, VAR_1, VAR_2);

    if (VAR_0->length < VAR_0->jitter_window)
 VAR_0->length++;
}
