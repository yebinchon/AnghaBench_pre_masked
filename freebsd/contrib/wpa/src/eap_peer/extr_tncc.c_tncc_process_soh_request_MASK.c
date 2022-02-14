
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int const*) ;
 scalar_t__ FUNC_1 (int const*) ;
 struct wpabuf* FUNC_2 (int) ;
 int FUNC_3 (int ,char*,int const*,size_t) ;
 int FUNC_4 (int ,char*) ;

struct wpabuf * FUNC_5(int VAR_3, const u8 *VAR_4, size_t VAR_5)
{
 const u8 *VAR_6;

 FUNC_3(VAR_2, "TNC: SoH Request", VAR_4, VAR_5);

 if (VAR_5 < 12)
  return ((void*)0);


 VAR_6 = VAR_4;


 if (FUNC_0(VAR_6) != VAR_0)
  return ((void*)0);
 VAR_6 += 2;


 if (FUNC_0(VAR_6) < 8)
  return ((void*)0);
 VAR_6 += 2;


 if (FUNC_1(VAR_6) != VAR_1)
  return ((void*)0);
 VAR_6 += 4;


 if (FUNC_0(VAR_6) != 0x02 )
  return ((void*)0);

 FUNC_4(VAR_2, "TNC: SoH Request TLV received");

 return FUNC_2(2);
}
