
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int WINDOW ;
struct TYPE_11__ {int atr; } ;
struct TYPE_10__ {int atr; } ;
struct TYPE_9__ {int atr; } ;
struct TYPE_8__ {int atr; } ;
struct TYPE_7__ {int atr; } ;
struct TYPE_12__ {TYPE_5__ tag_key; TYPE_4__ tag_key_selected; TYPE_3__ item; TYPE_2__ item_selected; TYPE_1__ menubox; } ;


 TYPE_6__ VAR_0 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 char* FUNC_2 (int) ;
 int VAR_2 ;
 int FUNC_3 (int *,int,int,char) ;
 int FUNC_4 (int *,int,int,char*) ;
 int FUNC_5 (char*,char const*,int) ;
 int FUNC_6 (int *,char) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int,int) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void FUNC_11(WINDOW * VAR_3, const char *VAR_4, int VAR_5,
                          int VAR_6, int VAR_7)
{
 int VAR_8;
 char *VAR_9 = FUNC_2(VAR_2 + 1);

 FUNC_5(VAR_9, VAR_4, VAR_2 - VAR_1);
 VAR_9[VAR_2 - VAR_1] = '\0';
 VAR_8 = FUNC_0(VAR_9, "YyNnMmHh");


 FUNC_7(VAR_3, VAR_0.menubox.atr);
 FUNC_9(VAR_3, VAR_5, 0);







 FUNC_8(VAR_3);

 FUNC_7(VAR_3, VAR_6 ? VAR_0.item_selected.atr : VAR_0.item.atr);
 FUNC_4(VAR_3, VAR_5, VAR_1, VAR_9);
 if (VAR_7) {
  FUNC_7(VAR_3, VAR_6 ? VAR_0.tag_key_selected.atr
    : VAR_0.tag_key.atr);
  FUNC_3(VAR_3, VAR_5, VAR_1 + VAR_8, VAR_9[VAR_8]);
 }
 if (VAR_6) {
  FUNC_9(VAR_3, VAR_5, VAR_1 + 1);
 }
 FUNC_1(VAR_9);
 FUNC_10(VAR_3);
}
