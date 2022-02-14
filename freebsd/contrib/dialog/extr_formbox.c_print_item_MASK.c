
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int chtype ;
typedef int WINDOW ;
struct TYPE_5__ {int name_len; int text_len; scalar_t__ text_x; scalar_t__ text_y; int text; scalar_t__ name_x; scalar_t__ name_y; int name; } ;
typedef TYPE_1__ DIALOG_FORMITEM ;


 int VAR_0 ;
 int FUNC_0 (int,scalar_t__) ;
 int FUNC_1 (int *,int ,int ,int ,scalar_t__,scalar_t__,int,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int VAR_4 ;
 int FUNC_5 (int *,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_6 (int *,int,scalar_t__,scalar_t__) ;

__attribute__((used)) static int
FUNC_7(WINDOW *VAR_5, DIALOG_FORMITEM * VAR_6, int VAR_7, bool VAR_8)
{
    int VAR_9 = 0;
    int VAR_10;

    if (FUNC_6(VAR_5, VAR_7, VAR_6->name_y, VAR_6->name_x)) {
 VAR_10 = VAR_6->name_len;
 VAR_10 = FUNC_0(VAR_10, FUNC_2(VAR_5) - VAR_6->name_x);
 if (VAR_10 > 0) {
     FUNC_1(VAR_5,
       VAR_6->name,
       0,
       VAR_4,
       VAR_6->name_y - VAR_7,
       VAR_6->name_x,
       VAR_10,
       VAR_0,
       VAR_0);
     FUNC_5(VAR_5, VAR_6->name_y - VAR_7, VAR_6->name_x + VAR_10);
     VAR_9 = 1;
 }
    }
    if (VAR_6->text_len && FUNC_6(VAR_5, VAR_7, VAR_6->text_y, VAR_6->text_x)) {
 chtype VAR_11;

 VAR_10 = VAR_6->text_len;
 VAR_10 = FUNC_0(VAR_10, FUNC_2(VAR_5) - VAR_6->text_x);

 if (!FUNC_4(VAR_6)) {
     VAR_11 = VAR_8
  ? VAR_1
  : VAR_3;
 } else {
     VAR_11 = VAR_2;
 }

 if (VAR_10 > 0) {
     FUNC_1(VAR_5,
       VAR_6->text,
       0,
       VAR_11,
       VAR_6->text_y - VAR_7,
       VAR_6->text_x,
       VAR_10,
       FUNC_3(VAR_6),
       VAR_0);
     FUNC_5(VAR_5, VAR_6->text_y - VAR_7, VAR_6->text_x + VAR_10);
     VAR_9 = 1;
 }
    }
    return VAR_9;
}
