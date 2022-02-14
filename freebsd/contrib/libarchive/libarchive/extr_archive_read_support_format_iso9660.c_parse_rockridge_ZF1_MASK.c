
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_info {int pz; unsigned char pz_log2_bs; int pz_uncompressed_size; } ;


 int FUNC_0 (unsigned char const*) ;

__attribute__((used)) static void
FUNC_1(struct file_info *VAR_0, const unsigned char *VAR_1,
    int VAR_2)
{

 if (VAR_1[0] == 0x70 && VAR_1[1] == 0x7a && VAR_2 == 12) {

  VAR_0->pz = 1;
  VAR_0->pz_log2_bs = VAR_1[3];
  VAR_0->pz_uncompressed_size = FUNC_0(&VAR_1[4]);
 }
}
