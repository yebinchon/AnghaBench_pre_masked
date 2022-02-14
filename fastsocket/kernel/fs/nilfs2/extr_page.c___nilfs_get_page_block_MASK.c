
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct buffer_head {int dummy; } ;
typedef scalar_t__ pgoff_t ;


 int VAR_0 ;
 int FUNC_0 (struct page*,int,unsigned long) ;
 struct buffer_head* FUNC_1 (struct page*,unsigned long) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (struct buffer_head*) ;

__attribute__((used)) static struct buffer_head *
FUNC_5(struct page *VAR_1, unsigned long VAR_2, pgoff_t VAR_3,
         int VAR_4, unsigned long VAR_5)

{
 unsigned long VAR_6;
 struct buffer_head *VAR_7;

 if (!FUNC_2(VAR_1))
  FUNC_0(VAR_1, 1 << VAR_4, VAR_5);

 VAR_6 = (unsigned long)VAR_3 << (VAR_0 - VAR_4);
 VAR_7 = FUNC_1(VAR_1, VAR_2 - VAR_6);

 FUNC_3(VAR_7);
 FUNC_4(VAR_7);
 return VAR_7;
}
