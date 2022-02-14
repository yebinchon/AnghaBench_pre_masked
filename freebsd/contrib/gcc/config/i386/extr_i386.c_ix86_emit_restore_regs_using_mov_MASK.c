
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef scalar_t__ HOST_WIDE_INT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int ,int ,scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int) ;
 scalar_t__ FUNC_7 (int,int) ;
 scalar_t__ FUNC_8 (scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_9 (rtx VAR_7, HOST_WIDE_INT VAR_8,
      int VAR_9)
{
  int VAR_10;
  rtx VAR_11 = FUNC_5 (VAR_3, VAR_7);

  for (VAR_10 = 0; VAR_10 < VAR_1; VAR_10++)
    if (FUNC_7 (VAR_10, VAR_9))
      {


 if (VAR_5 && VAR_8 != FUNC_8 (VAR_8, VAR_4))
   {
     rtx VAR_12;

     VAR_12 = FUNC_6 (VAR_0, VAR_2 + 3 );
     FUNC_3 (VAR_12, FUNC_0 (VAR_8));
     FUNC_2 (FUNC_4 (VAR_12, VAR_12, VAR_7));
     VAR_11 = FUNC_5 (VAR_3, VAR_12);
     VAR_8 = 0;
   }
 FUNC_3 (FUNC_6 (VAR_3, VAR_10),
   FUNC_1 (VAR_11, VAR_3, VAR_8));
 VAR_8 += VAR_6;
      }
}
