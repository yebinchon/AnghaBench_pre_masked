
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gss_msg_order {int flags; int* elem; int first_seq; int length; } ;
typedef int OM_uint32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct gss_msg_order*,size_t,int) ;

OM_uint32
FUNC_2(struct gss_msg_order *VAR_8, OM_uint32 VAR_9)
{
    OM_uint32 VAR_10;
    size_t VAR_11;

    if (VAR_8 == ((void*)0))
 return VAR_2;

    if ((VAR_8->flags & (VAR_0|VAR_1)) == 0)
 return VAR_2;


    if (VAR_8->elem[0] == VAR_9 - 1) {
 FUNC_1(VAR_8, 0, VAR_9);
 return VAR_2;
    }

    VAR_10 = (VAR_8->flags & (VAR_0|VAR_1))==VAR_0;



    if (VAR_9 > VAR_8->elem[0]
 || VAR_9 < VAR_8->first_seq
 || VAR_8->length == 0)
    {
 FUNC_1(VAR_8, 0, VAR_9);
 if (VAR_10) {
     return VAR_2;
 } else {
     return VAR_5;
 }
    }

    FUNC_0(VAR_8->length > 0);


    if (VAR_9 < VAR_8->elem[VAR_8->length - 1]) {
 if (VAR_10)
     return(VAR_6);
 else
     return(VAR_7);
    }

    if (VAR_9 == VAR_8->elem[VAR_8->length - 1]) {
 return VAR_3;
    }

    for (VAR_11 = 0; VAR_11 < VAR_8->length - 1; VAR_11++) {
 if (VAR_8->elem[VAR_11] == VAR_9)
     return VAR_3;
 if (VAR_8->elem[VAR_11 + 1] < VAR_9 && VAR_8->elem[VAR_11] < VAR_9) {
     FUNC_1(VAR_8, VAR_11, VAR_9);
     if (VAR_10)
  return VAR_2;
     else
  return VAR_7;
 }
    }

    return VAR_4;
}
