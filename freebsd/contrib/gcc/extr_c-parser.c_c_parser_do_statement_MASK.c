
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* tree ;
typedef int location_t ;
typedef int c_parser ;
struct TYPE_2__ {int location; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 void* VAR_4 ;
 void* VAR_5 ;
 int FUNC_2 (void*,int ) ;
 int FUNC_3 (int ,void*,int *,void*,void*,void*,void*,int) ;
 void* FUNC_4 (int *) ;
 void* FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;
 void* FUNC_8 (int *) ;
 TYPE_1__* FUNC_9 (int *) ;
 int FUNC_10 (int *,int ,char*) ;
 int FUNC_11 (int *,int ,char*) ;
 int FUNC_12 (int *) ;
 int VAR_6 ;
 int FUNC_13 (int ) ;

__attribute__((used)) static void
FUNC_14 (c_parser *VAR_7)
{

  tree VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;

  location_t VAR_16;
  FUNC_13 (FUNC_7 (VAR_7, VAR_2));
  FUNC_6 (VAR_7);

  VAR_15 = FUNC_4 (VAR_7);

  VAR_8 = FUNC_1 (VAR_6);
  VAR_16 = FUNC_9 (VAR_7)->location;
  VAR_11 = VAR_4;
  VAR_4 = VAR_1;
  VAR_12 = VAR_5;
  VAR_5 = VAR_1;
  VAR_10 = FUNC_5 (VAR_7);
  FUNC_11 (VAR_7, VAR_3, "expected %<while%>");
  VAR_13 = VAR_4;
  VAR_4 = VAR_11;
  VAR_14 = VAR_5;
  VAR_5 = VAR_12;
  VAR_9 = FUNC_8 (VAR_7);
  if (!FUNC_10 (VAR_7, VAR_0, "expected %<;%>"))
    FUNC_12 (VAR_7);

  FUNC_3 (VAR_16, VAR_9, ((void*)0), VAR_10, VAR_13, VAR_14, VAR_15, 0);

  FUNC_0 (FUNC_2 (VAR_8, VAR_6));
}
