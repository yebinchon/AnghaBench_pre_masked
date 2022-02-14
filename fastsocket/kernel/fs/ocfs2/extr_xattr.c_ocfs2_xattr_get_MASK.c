
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct buffer_head {int dummy; } ;


 int FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct inode*,struct buffer_head**,int ) ;
 int FUNC_3 (struct inode*,int ) ;
 int FUNC_4 (struct inode*,struct buffer_head*,int,char const*,void*,size_t) ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_0,
      int VAR_1,
      const char *VAR_2,
      void *VAR_3,
      size_t VAR_4)
{
 int VAR_5;
 struct buffer_head *VAR_6 = ((void*)0);

 VAR_5 = FUNC_2(VAR_0, &VAR_6, 0);
 if (VAR_5 < 0) {
  FUNC_1(VAR_5);
  return VAR_5;
 }
 VAR_5 = FUNC_4(VAR_0, VAR_6, VAR_1,
         VAR_2, VAR_3, VAR_4);

 FUNC_3(VAR_0, 0);

 FUNC_0(VAR_6);

 return VAR_5;
}
