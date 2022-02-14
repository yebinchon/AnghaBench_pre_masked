
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct memory_bitmap {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct memory_bitmap* VAR_4 ;
 struct memory_bitmap* VAR_5 ;
 int FUNC_1 (struct memory_bitmap*) ;
 struct memory_bitmap* FUNC_2 (int,int ) ;
 int FUNC_3 (struct memory_bitmap*) ;
 int FUNC_4 (struct memory_bitmap*,int ,int ) ;
 int FUNC_5 (struct memory_bitmap*,int ) ;
 int FUNC_6 (char*) ;

int FUNC_7(void)
{
 struct memory_bitmap *VAR_6, *VAR_7;
 int VAR_8 = 0;

 FUNC_0(VAR_4 || VAR_5);

 VAR_6 = FUNC_2(sizeof(struct memory_bitmap), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_8 = FUNC_4(VAR_6, VAR_1, VAR_2);
 if (VAR_8)
  goto Free_first_object;

 VAR_7 = FUNC_2(sizeof(struct memory_bitmap), VAR_1);
 if (!VAR_7)
  goto Free_first_bitmap;

 VAR_8 = FUNC_4(VAR_7, VAR_1, VAR_2);
 if (VAR_8)
  goto Free_second_object;

 VAR_4 = VAR_6;
 VAR_5 = VAR_7;
 FUNC_3(VAR_4);

 FUNC_6("PM: Basic memory bitmaps created\n");

 return 0;

 Free_second_object:
 FUNC_1(VAR_7);
 Free_first_bitmap:
  FUNC_5(VAR_6, VAR_3);
 Free_first_object:
 FUNC_1(VAR_6);
 return -VAR_0;
}
