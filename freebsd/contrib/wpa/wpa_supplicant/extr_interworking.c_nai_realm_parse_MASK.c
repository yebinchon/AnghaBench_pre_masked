
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef size_t u16 ;
struct wpabuf {int dummy; } ;
struct nai_realm {int dummy; } ;


 int VAR_0 ;
 size_t FUNC_0 (int const*) ;
 int FUNC_1 (struct nai_realm*,size_t) ;
 int * FUNC_2 (struct nai_realm*,int const*,int const*) ;
 struct nai_realm* FUNC_3 (size_t,int) ;
 int FUNC_4 (int ,char*,size_t,...) ;
 int * FUNC_5 (struct wpabuf*) ;
 size_t FUNC_6 (struct wpabuf*) ;

__attribute__((used)) static struct nai_realm * FUNC_7(struct wpabuf *VAR_1, u16 *VAR_2)
{
 struct nai_realm *VAR_3;
 const u8 *VAR_4, *VAR_5;
 u16 VAR_6, VAR_7;
 size_t VAR_8;

 if (VAR_1 == ((void*)0))
  return ((void*)0);
 VAR_8 = FUNC_6(VAR_1);
 if (VAR_8 < 2)
  return ((void*)0);

 VAR_4 = FUNC_5(VAR_1);
 VAR_5 = VAR_4 + VAR_8;
 VAR_7 = FUNC_0(VAR_4);
 FUNC_4(VAR_0, "NAI Realm Count: %u", VAR_7);
 VAR_4 += 2;
 VAR_8 -= 2;

 if (VAR_7 > VAR_8 / 5) {
  FUNC_4(VAR_0, "Invalid NAI Realm Count %u - not "
      "enough data (%u octets) for that many realms",
      VAR_7, (unsigned int) VAR_8);
  return ((void*)0);
 }

 VAR_3 = FUNC_3(VAR_7, sizeof(struct nai_realm));
 if (VAR_3 == ((void*)0))
  return ((void*)0);

 for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {
  VAR_4 = FUNC_2(&VAR_3[VAR_6], VAR_4, VAR_5);
  if (VAR_4 == ((void*)0)) {
   FUNC_1(VAR_3, VAR_7);
   return ((void*)0);
  }
 }

 *VAR_2 = VAR_7;
 return VAR_3;
}
