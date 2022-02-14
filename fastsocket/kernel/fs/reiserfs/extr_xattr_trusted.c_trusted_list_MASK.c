
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char const*,size_t) ;

__attribute__((used)) static size_t FUNC_3(struct inode *VAR_1, char *VAR_2, size_t VAR_3,
      const char *VAR_4, size_t VAR_5)
{
 const size_t VAR_6 = VAR_5 + 1;

 if (!FUNC_1(VAR_0) || FUNC_0(VAR_1))
  return 0;

 if (VAR_2 && VAR_6 <= VAR_3) {
  FUNC_2(VAR_2, VAR_4, VAR_5);
  VAR_2[VAR_5] = '\0';
 }
 return VAR_6;
}
