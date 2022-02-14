
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct memory_bitmap {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 struct memory_bitmap* VAR_1 ;
 struct memory_bitmap* VAR_2 ;
 int FUNC_1 (struct memory_bitmap*) ;
 int FUNC_2 (struct memory_bitmap*,int ) ;
 int FUNC_3 (char*) ;

void FUNC_4(void)
{
 struct memory_bitmap *VAR_3, *VAR_4;

 FUNC_0(!(VAR_1 && VAR_2));

 VAR_3 = VAR_1;
 VAR_4 = VAR_2;
 VAR_1 = ((void*)0);
 VAR_2 = ((void*)0);
 FUNC_2(VAR_3, VAR_0);
 FUNC_1(VAR_3);
 FUNC_2(VAR_4, VAR_0);
 FUNC_1(VAR_4);

 FUNC_3("PM: Basic memory bitmaps freed\n");
}
