
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct tlsv1_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (int ,char*,int const*,int) ;
 int FUNC_2 (int ,char*,...) ;

__attribute__((used)) static int FUNC_3(struct tlsv1_client *VAR_3,
            const u8 *VAR_4, size_t VAR_5)
{
 const u8 *VAR_6 = VAR_4 + VAR_5;

 FUNC_1(VAR_2, "TLSv1: ServerHello extensions",
      VAR_4, VAR_5);
 while (VAR_4 < VAR_6) {
  u16 VAR_7, VAR_8;

  if (VAR_6 - VAR_4 < 4) {
   FUNC_2(VAR_1, "TLSv1: Truncated ServerHello extension header");
   return -1;
  }

  VAR_7 = FUNC_0(VAR_4);
  VAR_4 += 2;
  VAR_8 = FUNC_0(VAR_4);
  VAR_4 += 2;

  if (VAR_8 > VAR_6 - VAR_4) {
   FUNC_2(VAR_1, "TLSv1: Truncated ServerHello extension");
   return -1;
  }

  FUNC_2(VAR_0, "TLSv1: ServerHello ExtensionType %u",
      VAR_7);
  FUNC_1(VAR_0, "TLSv1: ServerHello extension data",
       VAR_4, VAR_8);

  VAR_4 += VAR_8;
 }

 return 0;
}
