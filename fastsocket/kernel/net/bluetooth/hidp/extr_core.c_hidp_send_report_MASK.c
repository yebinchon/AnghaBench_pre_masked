
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hidp_session {int dummy; } ;
struct hid_report {int size; scalar_t__ id; } ;
typedef int buf ;


 int VAR_0 ;
 int FUNC_0 (struct hid_report*,unsigned char*) ;
 int FUNC_1 (struct hidp_session*,unsigned char*,int) ;

__attribute__((used)) static int FUNC_2(struct hidp_session *VAR_1, struct hid_report *VAR_2)
{
 unsigned char VAR_3[32];
 int VAR_4;

 VAR_4 = ((VAR_2->size - 1) >> 3) + 1 + (VAR_2->id > 0);
 if (VAR_4 > sizeof(VAR_3))
  return -VAR_0;

 FUNC_0(VAR_2, VAR_3);

 return FUNC_1(VAR_1, VAR_3, VAR_4);
}
