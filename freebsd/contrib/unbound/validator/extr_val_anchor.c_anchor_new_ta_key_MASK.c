
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct ta_key {size_t len; int type; int data; } ;


 int FUNC_0 (struct ta_key*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *,size_t) ;
 int FUNC_3 (struct ta_key*,int ,int) ;

__attribute__((used)) static struct ta_key*
FUNC_4(uint8_t* VAR_0, size_t VAR_1, uint16_t VAR_2)
{
 struct ta_key* VAR_3 = (struct ta_key*)FUNC_1(sizeof(*VAR_3));
 if(!VAR_3)
  return ((void*)0);
 FUNC_3(VAR_3, 0, sizeof(*VAR_3));
 VAR_3->data = FUNC_2(VAR_0, VAR_1);
 if(!VAR_3->data) {
  FUNC_0(VAR_3);
  return ((void*)0);
 }
 VAR_3->len = VAR_1;
 VAR_3->type = VAR_2;
 return VAR_3;
}
