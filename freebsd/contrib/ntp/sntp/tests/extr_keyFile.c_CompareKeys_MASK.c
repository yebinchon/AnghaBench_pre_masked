
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct key {scalar_t__ key_id; scalar_t__ key_len; char* typen; int key_seq; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,int) ;
 int FUNC_1 (char*,...) ;
 scalar_t__ FUNC_2 (char*,char*) ;

bool
FUNC_3(
 struct key VAR_2,
 struct key VAR_3
 )
{
 if (VAR_2.key_id != VAR_3.key_id) {
  FUNC_1("Expected key_id: %d but was: %d\n",
         VAR_2.key_id, VAR_3.key_id);
  return VAR_0;
 }
 if (VAR_2.key_len != VAR_3.key_len) {
  FUNC_1("Expected key_len: %d but was: %d\n",
         VAR_2.key_len, VAR_3.key_len);
  return VAR_0;
 }
 if (FUNC_2(VAR_2.typen, VAR_3.typen) != 0) {
  FUNC_1("Expected key_type: %s but was: %s\n",
         VAR_2.typen, VAR_3.typen);
  return VAR_0;

 }
 if (FUNC_0(VAR_2.key_seq, VAR_3.key_seq, VAR_2.key_len) != 0) {
  FUNC_1("Key mismatch!\n");
  return VAR_0;
 }
 return VAR_1;
}
