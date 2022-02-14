
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;


 int FUNC_0 (void*) ;
 void* VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_2 (int,int ,void*,int ) ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* FUNC_3 (int,void*,void*,void*,void**,void**) ;
 void* FUNC_4 (int,void*,void*) ;

rtx
FUNC_5 (enum rtx_code VAR_6, rtx *VAR_7, rtx *VAR_8)
{
  rtx VAR_9, VAR_10, VAR_11;
  VAR_9 = VAR_4;
  VAR_10 = VAR_5;

  if (VAR_7)
    *VAR_7 = VAR_0;
  if (VAR_8)
    *VAR_8 = VAR_0;

  if (VAR_3)
    {
      VAR_11 = FUNC_2 (VAR_6, VAR_1, VAR_3, VAR_2);
      VAR_3 = VAR_0;
    }
  else if (FUNC_1 (FUNC_0 (VAR_9)))
    VAR_11 = FUNC_3 (VAR_6, VAR_9, VAR_10, VAR_0,
      VAR_7, VAR_8);
  else
    VAR_11 = FUNC_4 (VAR_6, VAR_9, VAR_10);

  return VAR_11;
}
