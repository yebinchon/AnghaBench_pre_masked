
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ win; int offset; int length; int choice; int par; scalar_t__* data; } ;
typedef TYPE_1__ LIST ;


 int FUNC_0 (scalar_t__,int,scalar_t__,int ) ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (int ,long,long,long,long,int,scalar_t__,int,int,int ,int ) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (scalar_t__,scalar_t__) ;
 int FUNC_7 (scalar_t__,int,int ) ;
 int FUNC_8 (scalar_t__) ;

__attribute__((used)) static void
FUNC_9(LIST * VAR_4)
{
    int VAR_5;
    int VAR_6;
    int VAR_7;
    int VAR_8;
    int VAR_9;

    if (VAR_4->win != 0) {
 FUNC_0(VAR_4->win, FUNC_4(VAR_4->win), FUNC_3(VAR_4->win), VAR_0);
 for (VAR_5 = VAR_4->offset; VAR_5 < VAR_4->length && VAR_4->data[VAR_5]; VAR_5++) {
     VAR_7 = VAR_5 - VAR_4->offset;
     if (VAR_7 >= FUNC_4(VAR_4->win))
  break;
     (void) FUNC_7(VAR_4->win, VAR_7, 0);
     if (VAR_5 == VAR_4->choice)
  FUNC_1(VAR_4->win, VAR_1);
     (void) FUNC_6(VAR_4->win, VAR_4->data[VAR_5]);
     FUNC_1(VAR_4->win, VAR_0);
 }
 FUNC_1(VAR_4->win, VAR_0);

 FUNC_5(VAR_4->win, VAR_7, VAR_6);

 VAR_8 = VAR_7 - 1;
 VAR_9 = VAR_7 + FUNC_4(VAR_4->win);
 FUNC_2(VAR_4->par,
      (long) VAR_4->offset,
      (long) VAR_4->offset,
      (long) (VAR_4->offset + FUNC_4(VAR_4->win)),
      (long) (VAR_4->length),
      VAR_6 + 1,
      VAR_6 + FUNC_3(VAR_4->win),
      VAR_8,
      VAR_9,
      VAR_2,
      VAR_3);

 (void) FUNC_7(VAR_4->win, VAR_4->choice - VAR_4->offset, 0);
 (void) FUNC_8(VAR_4->win);
    }
}
