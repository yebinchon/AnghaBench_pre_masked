
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffer_head {int dummy; } ;
struct block_device {int dummy; } ;
typedef scalar_t__ b_blocknr_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct buffer_head* FUNC_0 (struct block_device*,scalar_t__,int) ;
 int FUNC_1 (struct buffer_head*) ;
 scalar_t__ FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (int ,int,struct buffer_head**) ;
 int FUNC_4 (struct buffer_head*) ;

__attribute__((used)) static struct buffer_head *FUNC_5(struct block_device *VAR_2,
        b_blocknr_t VAR_3, int VAR_4,
        b_blocknr_t VAR_5)
{
 struct buffer_head *VAR_6[VAR_0];
 unsigned int VAR_7 = VAR_0;
 struct buffer_head *VAR_8;
 int VAR_9, VAR_10;

 VAR_8 = FUNC_0(VAR_2, VAR_3, VAR_4);
 if (FUNC_2(VAR_8))
  return (VAR_8);

 if (VAR_3 + VAR_0 > VAR_5) {
  VAR_7 = VAR_5 - VAR_3;
 }
 VAR_6[0] = VAR_8;
 VAR_10 = 1;
 for (VAR_9 = 1; VAR_9 < VAR_7; VAR_9++) {
  VAR_8 = FUNC_0(VAR_2, VAR_3 + VAR_9, VAR_4);
  if (FUNC_2(VAR_8)) {
   FUNC_1(VAR_8);
   break;
  } else
   VAR_6[VAR_10++] = VAR_8;
 }
 FUNC_3(VAR_1, VAR_10, VAR_6);
 for (VAR_9 = 1; VAR_9 < VAR_10; VAR_9++)
  FUNC_1(VAR_6[VAR_9]);
 VAR_8 = VAR_6[0];
 FUNC_4(VAR_8);
 if (FUNC_2(VAR_8))
  return VAR_8;
 FUNC_1(VAR_8);
 return ((void*)0);
}
