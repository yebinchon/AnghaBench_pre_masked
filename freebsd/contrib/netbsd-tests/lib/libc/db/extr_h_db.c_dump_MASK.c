
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int (* seq ) (TYPE_2__*,TYPE_1__*,TYPE_1__*,int) ;} ;
struct TYPE_7__ {char* data; int size; } ;
typedef TYPE_1__ DBT ;
typedef TYPE_2__ DB ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,char*,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*,TYPE_1__*,int) ;
 int FUNC_2 (int ,char*,int) ;

__attribute__((used)) static void
FUNC_3(DB *VAR_9, int VAR_10, int VAR_11)
{
 DBT VAR_12, VAR_13;
 int VAR_14, VAR_15;

 if (VAR_10) {
  VAR_14 = VAR_1;



  VAR_15 = VAR_3;

 } else {
  VAR_14 = VAR_0;



  VAR_15 = VAR_2;

 }
 for (;; VAR_14 = VAR_15)
  switch (VAR_9->seq(VAR_9, &VAR_12, &VAR_13, VAR_14)) {
  case 0:
   (void)FUNC_2(VAR_8, VAR_13.data, VAR_13.size);
   if (VAR_8 == VAR_6)
    (void)FUNC_2(VAR_8, "\n", 1);
   break;
  case 1:
   goto done;
  case -1:
   FUNC_0(1, "line %zu: (dump) seq failed", VAR_7);

  }
done: return;
}
