
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ubifs_info {int min_io_size; int leb_size; } ;


 int FUNC_0 (int,int) ;

__attribute__((used)) static int FUNC_1(const struct ubifs_info *VAR_0, uint8_t *VAR_1, int VAR_2)
{
 int VAR_3, VAR_4;

 if (VAR_0->min_io_size == 1)
  return 0;
 VAR_3 = VAR_0->leb_size - VAR_2;
 VAR_4 = FUNC_0(VAR_3, VAR_0->min_io_size) - VAR_3;
 return VAR_4;
}
