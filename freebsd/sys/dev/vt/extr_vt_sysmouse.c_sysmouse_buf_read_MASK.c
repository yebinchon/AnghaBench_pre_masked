
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uio {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned char*,int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (unsigned char*,unsigned int,struct uio*) ;

__attribute__((used)) static int
FUNC_4(struct uio *VAR_8, unsigned int VAR_9)
{
 unsigned char VAR_10[VAR_2];
 int VAR_11;

 if (VAR_4 == ((void*)0))
  return (VAR_0);
 else if (VAR_5 == 0)
  return (VAR_1);

 FUNC_0(VAR_10, VAR_4 +
     VAR_7 * VAR_2, VAR_2);
 VAR_7 = (VAR_7 + 1) % VAR_3;
 VAR_5--;

 FUNC_2(&VAR_6);
 VAR_11 = FUNC_3(VAR_10, VAR_9, VAR_8);
 FUNC_1(&VAR_6);

 return (VAR_11);
}
