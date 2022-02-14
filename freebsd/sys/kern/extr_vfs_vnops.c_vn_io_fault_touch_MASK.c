
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uio {scalar_t__ uio_rw; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static int
FUNC_2(char *VAR_2, const struct uio *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_2);
 if (VAR_4 == -1 || (VAR_3->uio_rw == VAR_1 && FUNC_1(VAR_2, VAR_4) == -1))
  return (VAR_0);
 return (0);
}
