
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct geli_dev {int dummy; } ;
typedef int mkey ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 (struct geli_dev*,int *) ;
 scalar_t__ FUNC_2 (struct geli_dev*,int *,int *) ;

int
FUNC_3(struct geli_dev *VAR_2)
{
 u_char VAR_3[VAR_1];
 int VAR_4;

 VAR_4 = VAR_0;
 if (FUNC_1(VAR_2, VAR_3) == 0) {
  if (FUNC_2(VAR_2, ((void*)0), VAR_3) == 0)
   VAR_4 = 0;
  FUNC_0(VAR_3, sizeof(VAR_3));
 }
 return (VAR_4);
}
