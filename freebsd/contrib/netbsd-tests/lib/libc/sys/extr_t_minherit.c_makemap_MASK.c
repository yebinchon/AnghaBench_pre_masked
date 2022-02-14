
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (void*,int,int ) ;
 int FUNC_2 (void*,int ,int) ;
 void* FUNC_3 (int *,int ,int,int,int,int ) ;
 int VAR_5 ;

__attribute__((used)) static void *
FUNC_4(int VAR_6, int VAR_7) {
 void *VAR_8 = FUNC_3(((void*)0), VAR_5, VAR_3|VAR_4,
     VAR_2|VAR_0, -1, 0);
 FUNC_0(VAR_8 != VAR_1);
 FUNC_1(VAR_8, VAR_6, VAR_5);
 if (VAR_7 != 666)
  FUNC_0(FUNC_2(VAR_8, VAR_5, VAR_7) == 0);
 else
  FUNC_0(FUNC_2(VAR_8, VAR_5, VAR_7) == -1);
 return VAR_8;
}
