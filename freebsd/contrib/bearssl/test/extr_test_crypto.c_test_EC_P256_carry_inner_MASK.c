
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* mul ) (unsigned char*,size_t,unsigned char*,int,int ) ;} ;
typedef TYPE_1__ br_ec_impl ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,unsigned char*,unsigned char*,size_t) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 size_t FUNC_4 (unsigned char*,char const*) ;
 int FUNC_5 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (unsigned char*,size_t,unsigned char*,int,int ) ;

__attribute__((used)) static void
FUNC_7(const br_ec_impl *VAR_4, const char *VAR_5, const char *VAR_6)
{
 unsigned char VAR_7[65], VAR_8[sizeof VAR_7], VAR_9[1];
 size_t VAR_10, VAR_11;

 VAR_10 = FUNC_4(VAR_7, VAR_5);
 VAR_11 = FUNC_4(VAR_8, VAR_6);
 if (VAR_10 != sizeof VAR_7 || VAR_11 != sizeof VAR_7) {
  FUNC_3(VAR_2, "KAT is incorrect\n");
  FUNC_1(VAR_1);
 }
 VAR_9[0] = 0x10;
 if (VAR_4->mul(VAR_7, VAR_10, VAR_9, 1, VAR_0) != 1) {
  FUNC_3(VAR_2, "P-256 multiplication failed\n");
  FUNC_1(VAR_1);
 }
 FUNC_0("P256_carry", VAR_7, VAR_8, VAR_10);
 FUNC_5(".");
 FUNC_2(VAR_3);
}
