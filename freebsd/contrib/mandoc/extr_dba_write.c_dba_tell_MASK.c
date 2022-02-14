
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long int32_t ;


 int VAR_0 ;
 long VAR_1 ;
 int FUNC_0 (int,char*,...) ;
 int VAR_2 ;
 long FUNC_1 (int ) ;
 int VAR_3 ;

int32_t
FUNC_2(void)
{
 long VAR_4;

 if ((VAR_4 = FUNC_1(VAR_3)) == -1)
  FUNC_0(1, "ftell");
 if (VAR_4 >= VAR_1) {
  VAR_2 = VAR_0;
  FUNC_0(1, "ftell = %ld", VAR_4);
 }
 return VAR_4;
}
