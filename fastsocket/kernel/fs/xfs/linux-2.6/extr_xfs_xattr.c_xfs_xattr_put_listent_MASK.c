
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_attr_list_context {unsigned int count; int firstu; scalar_t__ alist; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char*,int) ;
 char* FUNC_3 (int) ;
 unsigned int FUNC_4 (int) ;

__attribute__((used)) static int
FUNC_5(
 struct xfs_attr_list_context *VAR_2,
 int VAR_3,
 unsigned char *VAR_4,
 int VAR_5,
 int VAR_6,
 unsigned char *VAR_7)
{
 unsigned int VAR_8 = FUNC_4(VAR_3);
 char *VAR_9;
 int VAR_10;

 FUNC_0(VAR_2->count >= 0);





 if ((VAR_3 & VAR_1) && !FUNC_1(VAR_0))
  return 0;

 VAR_10 = VAR_2->count + VAR_8 + VAR_5 + 1;
 if (VAR_10 > VAR_2->firstu) {
  VAR_2->count = -1;
  return 1;
 }
 VAR_9 = (char *)VAR_2->alist + VAR_2->count;
 FUNC_2(VAR_9, FUNC_3(VAR_3), VAR_8);
 VAR_9 += VAR_8;
 FUNC_2(VAR_9, (char *)VAR_4, VAR_5);
 VAR_9 += VAR_5;
 *VAR_9 = '\0';
 VAR_2->count += VAR_8 + VAR_5 + 1;
 return 0;
}
