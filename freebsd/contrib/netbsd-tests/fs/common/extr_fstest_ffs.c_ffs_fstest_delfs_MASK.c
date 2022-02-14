
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ffstestargs {int ta_imgpath; int ta_devpath; } ;
typedef int atf_tc_t ;


 int VAR_0 ;
 int FUNC_0 (struct ffstestargs*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

int
FUNC_3(const atf_tc_t *VAR_1, void *VAR_2)
{
 int VAR_3;
 struct ffstestargs *VAR_4 = VAR_2;

 VAR_3 = FUNC_1(VAR_4->ta_devpath);
 if (VAR_3 != 0) {
  VAR_0 = VAR_3;
  return -1;
 }

 VAR_3 = FUNC_2(VAR_4->ta_imgpath);
 if (VAR_3 != 0)
  return VAR_3;

 FUNC_0(VAR_4);

 return 0;
}
