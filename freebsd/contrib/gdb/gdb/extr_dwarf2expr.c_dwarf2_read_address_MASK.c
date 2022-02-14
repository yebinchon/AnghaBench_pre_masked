
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CORE_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (unsigned char*,int) ;

CORE_ADDR
FUNC_2 (unsigned char *VAR_2, unsigned char *VAR_3, int *VAR_4)
{
  CORE_ADDR VAR_5;

  if (VAR_3 - VAR_2 < VAR_0 / VAR_1)
    FUNC_0 ("dwarf2_read_address: Corrupted DWARF expression.");

  *VAR_4 = VAR_0 / VAR_1;


  VAR_5 = FUNC_1 (VAR_2, VAR_0 / VAR_1);
  return VAR_5;
}
