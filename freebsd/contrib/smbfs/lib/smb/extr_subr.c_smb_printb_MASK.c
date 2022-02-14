
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb_bitname {int bn_bit; char* bn_name; } ;


 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,char*) ;

char *
FUNC_2(char *VAR_0, int VAR_1, const struct smb_bitname *VAR_2) {
 int VAR_3 = 1;

 FUNC_1(VAR_0, "<");
 for(; VAR_2->bn_bit; VAR_2++) {
  if (VAR_1 & VAR_2->bn_bit) {
   FUNC_0(VAR_0, VAR_2->bn_name);
   VAR_3 = 0;
  }
  if (!VAR_3 && (VAR_1 & VAR_2[1].bn_bit))
   FUNC_0(VAR_0, "|");
 }
 FUNC_0(VAR_0, ">");
 return VAR_0;
}
