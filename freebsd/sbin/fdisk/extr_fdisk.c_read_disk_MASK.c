
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;
typedef int off_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,int ) ;
 int FUNC_1 (int ,void*,int) ;
 int VAR_3 ;

__attribute__((used)) static ssize_t
FUNC_2(off_t VAR_4, void *VAR_5)
{

 FUNC_0(VAR_2, (VAR_4 * 512), 0);
 if (VAR_3 == 0)
  for (VAR_3 = VAR_1; VAR_3 <= VAR_0;
       VAR_3 *= 2) {

   int VAR_6 = FUNC_1(VAR_2, VAR_5, VAR_3);
   if (VAR_6 == VAR_3)

    return VAR_3;
  }
 else
  return FUNC_1(VAR_2, VAR_5, VAR_3);


 return -1;
}
