
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ext2fstestargs {int ta_imgpath; int ta_devpath; } ;
typedef int atf_tc_t ;


 int FUNC_0 (struct ext2fstestargs*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

int
FUNC_3(const atf_tc_t *VAR_0, void *VAR_1)
{
 int VAR_2;
 struct ext2fstestargs *VAR_3 = VAR_1;

 VAR_2 = FUNC_1(VAR_3->ta_devpath);
 if (VAR_2 != 0)
  return VAR_2;

 VAR_2 = FUNC_2(VAR_3->ta_imgpath);
 if (VAR_2 != 0)
  return VAR_2;

 FUNC_0(VAR_3);

 return 0;
}
