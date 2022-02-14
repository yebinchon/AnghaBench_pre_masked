
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_info {int leb_size; int min_io_size; } ;
struct ubifs_ch {int len; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (void*,void*,int) ;
 int FUNC_3 (struct ubifs_info*,int) ;
 int FUNC_4 (struct ubifs_info*,int,void*,int,int ) ;
 int FUNC_5 (struct ubifs_info*,void*,int) ;

__attribute__((used)) static int FUNC_6(struct ubifs_info *VAR_1, void *VAR_2, int *VAR_3, int *VAR_4,
      void *VAR_5)
{
 struct ubifs_ch *VAR_6 = VAR_5;
 int VAR_7 = FUNC_1(VAR_6->len), VAR_8 = VAR_1->leb_size - *VAR_4;

 if (VAR_7 > VAR_8) {
  int VAR_9 = FUNC_0(*VAR_4, VAR_1->min_io_size), VAR_10;

  FUNC_5(VAR_1, VAR_2 + *VAR_4, VAR_9 - *VAR_4);
  VAR_10 = FUNC_4(VAR_1, *VAR_3, VAR_2, VAR_9, VAR_0);
  if (VAR_10)
   return VAR_10;
  *VAR_3 = FUNC_3(VAR_1, *VAR_3);
  *VAR_4 = 0;
 }
 FUNC_2(VAR_2 + *VAR_4, VAR_5, VAR_7);
 *VAR_4 += FUNC_0(VAR_7, 8);
 return 0;
}
