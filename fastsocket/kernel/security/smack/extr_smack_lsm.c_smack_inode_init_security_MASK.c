
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 void* FUNC_0 (char*,int ) ;
 char* FUNC_1 (struct inode*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_3, struct inode *VAR_4,
         char **VAR_5, void **VAR_6, size_t *VAR_7)
{
 char *VAR_8 = FUNC_1(VAR_3);

 if (VAR_5) {
  *VAR_5 = FUNC_0(VAR_2, VAR_1);
  if (*VAR_5 == ((void*)0))
   return -VAR_0;
 }

 if (VAR_6) {
  *VAR_6 = FUNC_0(VAR_8, VAR_1);
  if (*VAR_6 == ((void*)0))
   return -VAR_0;
 }

 if (VAR_7)
  *VAR_7 = FUNC_2(VAR_8) + 1;

 return 0;
}
