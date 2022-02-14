
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int adapter_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ,int,int ,int,int) ;
 int FUNC_2 (int *,int ,scalar_t__) ;

int FUNC_3(adapter_t *VAR_5, unsigned int VAR_6, unsigned int VAR_7,
   unsigned int *VAR_8)
{
 int VAR_9 = 0;

 if (FUNC_0(VAR_5, VAR_0) & VAR_4)
  return -VAR_3;

 for ( ; !VAR_9 && VAR_7--; VAR_6 += 4) {
  FUNC_2(VAR_5, VAR_0, VAR_2 + VAR_6);
  VAR_9 = FUNC_1(VAR_5, VAR_0, VAR_4,
          0, 5, 2);
  if (!VAR_9)
   *VAR_8++ = FUNC_0(VAR_5, VAR_1);
 }
 return VAR_9;
}
