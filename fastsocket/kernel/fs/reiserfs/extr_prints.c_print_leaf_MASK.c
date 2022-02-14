
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct item_head {int b_blocknr; int ih_key; } ;
struct buffer_head {int b_blocknr; int ih_key; } ;
struct block_head {int dummy; } ;


 struct block_head* FUNC_0 (struct item_head*) ;
 int FUNC_1 (struct item_head*) ;
 int FUNC_2 (struct item_head*,struct item_head*) ;
 struct item_head* FUNC_3 (struct item_head*,int ) ;
 int VAR_0 ;
 int FUNC_4 (struct block_head*) ;
 int FUNC_5 (struct item_head*) ;
 int FUNC_6 (struct item_head*,int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,int,struct item_head*) ;

__attribute__((used)) static int FUNC_9(struct buffer_head *VAR_1, int VAR_2, int VAR_3,
        int VAR_4)
{
 struct block_head *VAR_5;
 struct item_head *VAR_6;
 int VAR_7, VAR_8;
 int VAR_9, VAR_10;

 if (!FUNC_1(VAR_1))
  return 1;

 FUNC_5(VAR_1);

 VAR_5 = FUNC_0(VAR_1);
 VAR_6 = FUNC_3(VAR_1, 0);
 VAR_8 = FUNC_4(VAR_5);

 FUNC_7
     ("\n===================================================================\n");
 FUNC_8("LEAF NODE (%ld) contains %z\n", VAR_1->b_blocknr, VAR_1);

 if (!(VAR_2 & VAR_0)) {
  FUNC_8("FIRST ITEM_KEY: %k, LAST ITEM KEY: %k\n",
    (VAR_6->ih_key), &((VAR_6 + VAR_8 - 1)->ih_key));
  return 0;
 }

 if (VAR_3 < 0 || VAR_3 > VAR_8 - 1)
  VAR_9 = 0;
 else
  VAR_9 = VAR_3;

 if (VAR_4 < 0 || VAR_4 > VAR_8)
  VAR_10 = VAR_8;
 else
  VAR_10 = VAR_4;

 VAR_6 += VAR_9;
 FUNC_7
     ("-------------------------------------------------------------------------------\n");
 FUNC_7
     ("|##|   type    |           key           | ilen | free_space | version | loc  |\n");
 for (VAR_7 = VAR_9; VAR_7 < VAR_10; VAR_7++, VAR_6++) {
  FUNC_7
      ("-------------------------------------------------------------------------------\n");
  FUNC_8("|%2d| %h |\n", VAR_7, VAR_6);
  if (VAR_2 & VAR_0)
   FUNC_6(VAR_6, FUNC_2(VAR_1, VAR_6));
 }

 FUNC_7
     ("===================================================================\n");

 return 0;
}
