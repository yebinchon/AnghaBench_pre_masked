
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct inode {int i_mapping; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*,int ,unsigned long,int ) ;
 struct page* FUNC_3 (int ,unsigned int) ;
 unsigned int FUNC_4 (size_t) ;
 int FUNC_5 (struct inode*,size_t) ;
 int FUNC_6 (struct inode*,size_t) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (void*,int ,size_t) ;
 void* FUNC_9 (struct page*) ;
 int FUNC_10 (struct page*,unsigned int) ;
 scalar_t__ FUNC_11 (int) ;
 int FUNC_12 (struct page*) ;

int FUNC_13(struct inode *VAR_6, size_t VAR_7)
{
 unsigned long VAR_8, VAR_9, VAR_10, VAR_11;
 struct page *VAR_12;
 unsigned VAR_13;
 void *VAR_14;
 int VAR_15;


 VAR_13 = FUNC_4(VAR_7);
 if (FUNC_11(VAR_13 >= VAR_3))
  return -VAR_0;

 VAR_15 = FUNC_6(VAR_6, VAR_7);
 if (VAR_15)
  return VAR_15;

 FUNC_5(VAR_6, VAR_7);



 VAR_12 = FUNC_3(FUNC_7(VAR_6->i_mapping), VAR_13);
 if (!VAR_12)
  return -VAR_1;


 VAR_9 = 1UL << VAR_13;
 VAR_8 = (VAR_7 + VAR_5 - 1) >> VAR_4;

 FUNC_10(VAR_12, VAR_13);


 for (VAR_10 = VAR_8; VAR_10 < VAR_9; VAR_10++)
  FUNC_1(VAR_12 + VAR_10);


 VAR_7 = VAR_5 * VAR_8;
 VAR_14 = FUNC_9(VAR_12);
 FUNC_8(VAR_14, 0, VAR_7);


 for (VAR_10 = 0; VAR_10 < VAR_8; VAR_10++) {
  struct page *VAR_16 = VAR_12 + VAR_10;

  VAR_15 = FUNC_2(VAR_16, VAR_6->i_mapping, VAR_10,
     VAR_2);
  if (VAR_15 < 0)
   goto add_error;


  FUNC_0(VAR_16);

  FUNC_12(VAR_16);
 }

 return 0;

add_error:
 while (VAR_10 < VAR_8)
  FUNC_1(VAR_12 + VAR_10++);
 return VAR_15;
}
