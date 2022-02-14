
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bufcookie {int left; int base; } ;


 int FUNC_0 (int,char const*,int) ;

__attribute__((used)) static int
FUNC_1(void *VAR_0, const char *VAR_1, int VAR_2)
{
 struct bufcookie *VAR_3;

 VAR_3 = (struct bufcookie *)VAR_0;
 if (VAR_2 > VAR_3->left) {

  VAR_2 = VAR_3->left;
 }
 if (VAR_2 > 0) {
  (void)FUNC_0(VAR_3->base, VAR_1, VAR_2);
  VAR_3->base += VAR_2;
  VAR_3->left -= VAR_2;
 }
 return VAR_2;
}
