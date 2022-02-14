
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (char*,int,int) ;
 int FUNC_2 (int **,int*,int ) ;

__attribute__((used)) static int FUNC_3(uint8_t **VAR_2, int *VAR_3, int VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_2(VAR_2, VAR_3, VAR_1);
 if (VAR_5 != VAR_4) {
  FUNC_1("invalid type (%d) in LPT node type %d", VAR_5,
     VAR_4);
  FUNC_0();
  return -VAR_0;
 }
 return 0;
}
