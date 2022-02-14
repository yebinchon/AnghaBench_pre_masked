
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int * VAR_4 ;
 int FUNC_1 (char*) ;
 int * VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t FUNC_2 (int *,int ,int ,int *,int *) ;

void
FUNC_3(void)
{
 size_t VAR_8;

 FUNC_2(VAR_4, VAR_1, VAR_3, ((void*)0),
     ((void*)0));
 VAR_8 = FUNC_2(VAR_5, VAR_0,
     VAR_3, &VAR_6, &VAR_7);
 if (VAR_8 == 0)
  FUNC_1("No memory entries in phys_avail");
 VAR_2 = FUNC_0(VAR_5[VAR_8 - 1]);
}
