
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_2, char *VAR_3,
        size_t VAR_4)
{
 int VAR_5 = FUNC_1(VAR_1);

 if (VAR_3 != ((void*)0) && VAR_5 <= VAR_4) {
  FUNC_0(VAR_3, VAR_1, VAR_5);
  return VAR_5;
 }
 return -VAR_0;
}
