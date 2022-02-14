
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_sb; } ;


 int FUNC_0 (char*,char const*,size_t) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static size_t FUNC_2(struct inode *VAR_0, char *VAR_1, size_t VAR_2,
   const char *VAR_3, size_t VAR_4)
{
 const size_t VAR_5 = VAR_4 + 1;

 if (!FUNC_1(VAR_0->i_sb))
  return 0;
 if (VAR_1 && VAR_5 <= VAR_2) {
  FUNC_0(VAR_1, VAR_3, VAR_4);
  VAR_1[VAR_4] = '\0';
 }
 return VAR_5;
}
