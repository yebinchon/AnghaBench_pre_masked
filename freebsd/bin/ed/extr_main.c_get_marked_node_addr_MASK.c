
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 long VAR_0 ;
 char* VAR_1 ;
 long FUNC_0 (int ) ;
 int FUNC_1 (unsigned char) ;
 int * VAR_2 ;

long
FUNC_2(int VAR_3)
{
 if (!FUNC_1((unsigned char)VAR_3)) {
  VAR_1 = "invalid mark character";
  return VAR_0;
 }
 return FUNC_0(VAR_2[VAR_3 - 'a']);
}
