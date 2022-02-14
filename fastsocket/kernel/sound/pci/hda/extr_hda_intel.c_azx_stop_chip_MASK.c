
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct azx {scalar_t__ initialized; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct azx*) ;
 int FUNC_1 (struct azx*) ;
 int FUNC_2 (struct azx*) ;
 int FUNC_3 (struct azx*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct azx *VAR_2)
{
 if (!VAR_2->initialized)
  return;


 FUNC_2(VAR_2);
 FUNC_1(VAR_2);


 FUNC_0(VAR_2);


 FUNC_3(VAR_2, VAR_0, 0);
 FUNC_3(VAR_2, VAR_1, 0);

 VAR_2->initialized = 0;
}
