
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int r_bushandle; int r_bustag; } ;
typedef int res ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* FUNC_0 (struct resource*,int ) ;
 int FUNC_1 (int ,int ,int,int ,int *) ;
 int FUNC_2 (int ,int ,int) ;
 int VAR_5 ;
 int FUNC_3 (struct resource*,int ,int) ;
 int FUNC_4 (char*) ;

void
FUNC_5(void)
{
 int VAR_6;
 struct resource VAR_7;

 FUNC_3(&VAR_7, 0, sizeof(VAR_7));

 VAR_7.r_bustag = VAR_5;

 VAR_6 = FUNC_1(VAR_7.r_bustag, VAR_0, 0x100000,
     0, &VAR_7.r_bushandle);

 if (VAR_6)
  FUNC_4("Could not allocate resource for SoC identification\n");

 VAR_3 = FUNC_0(&VAR_7, VAR_1);

 VAR_4 = FUNC_0(&VAR_7, VAR_2);

 FUNC_2(VAR_7.r_bustag, VAR_7.r_bushandle, 0x100000);
}
