
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hd_struct {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 struct hd_struct* FUNC_0 (struct device*) ;
 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_1 (int) ;
 int * VAR_4 ;
 int FUNC_2 (struct hd_struct*) ;
 int FUNC_3 (int,struct hd_struct*) ;
 int FUNC_4 () ;
 int FUNC_5 (struct hd_struct*,int ) ;
 int FUNC_6 () ;
 int * VAR_5 ;
 int FUNC_7 (char*,char*,int,int,unsigned long long,int ,int,int,unsigned long long,int ,int ,int ,int ) ;
 int * VAR_6 ;
 int VAR_7 ;

ssize_t FUNC_8(struct device *VAR_8,
         struct device_attribute *VAR_9, char *VAR_10)
{
 struct hd_struct *VAR_11 = FUNC_0(VAR_8);
 int VAR_12;

 VAR_12 = FUNC_4();
 FUNC_3(VAR_12, VAR_11);
 FUNC_6();
 return FUNC_7(VAR_10,
  "%8lu %8lu %8llu %8u "
  "%8lu %8lu %8llu %8u "
  "%8u %8u %8u"
  "\n",
  FUNC_5(VAR_11, VAR_3[VAR_0]),
  FUNC_5(VAR_11, VAR_4[VAR_0]),
  (unsigned long long)FUNC_5(VAR_11, VAR_5[VAR_0]),
  FUNC_1(FUNC_5(VAR_11, VAR_6[VAR_0])),
  FUNC_5(VAR_11, VAR_3[VAR_1]),
  FUNC_5(VAR_11, VAR_4[VAR_1]),
  (unsigned long long)FUNC_5(VAR_11, VAR_5[VAR_1]),
  FUNC_1(FUNC_5(VAR_11, VAR_6[VAR_1])),
  FUNC_2(VAR_11),
  FUNC_1(FUNC_5(VAR_11, VAR_2)),
  FUNC_1(FUNC_5(VAR_11, VAR_7)));
}
