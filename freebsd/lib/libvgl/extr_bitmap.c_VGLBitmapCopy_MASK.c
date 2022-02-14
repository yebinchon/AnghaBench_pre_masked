
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ Type; } ;
typedef TYPE_1__ VGLBitmap ;


 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 TYPE_1__ VAR_2 ;
 int FUNC_2 (TYPE_1__*,int,int,TYPE_1__*,int,int,int,int) ;

int
FUNC_3(VGLBitmap *VAR_3, int VAR_4, int VAR_5,
       VGLBitmap *VAR_6, int VAR_7, int VAR_8, int VAR_9, int VAR_10)
{
  int VAR_11;

  if (VAR_10 < 0)
    return -1;
  if (VAR_3 == VAR_1)
    VAR_3 = &VAR_2;
  if (VAR_3->Type != VAR_0)
    return -1;
  if (VAR_6 == VAR_1) {
    FUNC_0();
    FUNC_2(VAR_3, VAR_4, VAR_5, &VAR_2, VAR_7, VAR_8, VAR_9, VAR_10);
    VAR_11 = FUNC_2(VAR_3, VAR_4, VAR_5, &VAR_2, VAR_7, VAR_8,
                            VAR_9, VAR_10);
    if (VAR_11 != 0)
      return VAR_11;
    VAR_3 = &VAR_2;
    VAR_4 = VAR_7;
    VAR_5 = VAR_8;
  } else if (VAR_6->Type != VAR_0)
    return -1;
  VAR_11 = FUNC_2(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, -VAR_10);
  if (VAR_6 == VAR_1)
    FUNC_1();
  return VAR_11;
}
