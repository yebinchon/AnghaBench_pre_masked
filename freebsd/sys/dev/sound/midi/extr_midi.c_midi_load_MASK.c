
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int FUNC_2 (int *,int ,int ,int ,int,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int *,char*) ;

__attribute__((used)) static int
FUNC_4(void)
{
 FUNC_3(&VAR_6, "midistat lock");
 FUNC_1(&VAR_3);

 VAR_5 = FUNC_2(&VAR_4,
     FUNC_0(0, VAR_1, 0),
     VAR_2, VAR_0, 0666, "midistat");

 return 0;
}
