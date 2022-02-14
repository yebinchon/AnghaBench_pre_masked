
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zio_cksum_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (void*,size_t,int *) ;
 int FUNC_1 (void*,size_t,int *) ;
 size_t FUNC_2 (void*,size_t,int,int ) ;
 int VAR_2 ;
 size_t VAR_3 ;

__attribute__((used)) static size_t
FUNC_3(void *VAR_4, size_t VAR_5, zio_cksum_t *VAR_6)
{
 size_t VAR_7;

 if ((VAR_7 = FUNC_2(VAR_4, VAR_5, 1, VAR_2)) == 0)
  return (0);

 if (VAR_1) {
  if (VAR_0)
   FUNC_0(VAR_4, VAR_5, VAR_6);
  else
   FUNC_1(VAR_4, VAR_5, VAR_6);
 }
 VAR_3 += VAR_5;
 return (VAR_7);
}
