
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct buffer_head {int dummy; } ;


 int VAR_0 ;
 struct buffer_head** FUNC_0 (int,int,int ) ;
 int FUNC_1 (struct super_block*,int) ;

__attribute__((used)) static struct buffer_head **FUNC_2(struct super_block *VAR_1,
       int *VAR_2)
{
 int VAR_3 = FUNC_1(VAR_1, 1);
 struct buffer_head **VAR_4;

 VAR_4 = FUNC_0(VAR_3, sizeof(struct buffer_head *),
       VAR_0);
 if (VAR_4 && VAR_2)
  *VAR_2 = VAR_3;

 return VAR_4;
}
