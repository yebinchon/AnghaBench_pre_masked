
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffer_head {int dummy; } ;
struct address_space {int dummy; } ;
typedef int sector_t ;
typedef int __u64 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct address_space*,int ,int ,struct buffer_head**,int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct buffer_head*) ;

int FUNC_5(struct address_space *VAR_2, __u64 VAR_3,
       sector_t VAR_4, struct buffer_head **VAR_5, int VAR_6)
{
 struct buffer_head *VAR_7;
 int VAR_8;

 VAR_8 = FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
 if (VAR_8 == -VAR_0)
  return 0;
 if (FUNC_3(VAR_8))
  return VAR_8;

 VAR_7 = *VAR_5;
 FUNC_4(VAR_7);
 if (!FUNC_1(VAR_7)) {
  FUNC_0(VAR_7);
  return -VAR_1;
 }
 return 0;
}
