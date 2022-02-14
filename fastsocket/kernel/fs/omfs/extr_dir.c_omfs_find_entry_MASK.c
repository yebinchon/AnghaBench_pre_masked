
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct inode {int dummy; } ;
struct buffer_head {int * b_data; } ;
typedef int __be64 ;


 int VAR_0 ;
 struct buffer_head* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct buffer_head*) ;
 struct buffer_head* FUNC_3 (struct inode*,char const*,int,int*) ;
 struct buffer_head* FUNC_4 (struct inode*,int ,char const*,int,int *) ;

__attribute__((used)) static struct buffer_head *FUNC_5(struct inode *VAR_1,
        const char *VAR_2, int VAR_3)
{
 struct buffer_head *VAR_4;
 int VAR_5;
 u64 VAR_6, VAR_7;

 VAR_4 = FUNC_3(VAR_1, VAR_2, VAR_3, &VAR_5);
 if (!VAR_4)
  return FUNC_0(-VAR_0);

 VAR_6 = FUNC_1(*((__be64 *) &VAR_4->b_data[VAR_5]));
 FUNC_2(VAR_4);

 return FUNC_4(VAR_1, VAR_6, VAR_2, VAR_3, &VAR_7);
}
