
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u32 ;
struct wpabuf {int dummy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 struct wpabuf* FUNC_1 (size_t) ;
 size_t FUNC_2 (struct wpabuf const*) ;
 int FUNC_3 (struct wpabuf*,size_t) ;
 int FUNC_4 (struct wpabuf*,struct wpabuf const*) ;
 int FUNC_5 (struct wpabuf*,void*,size_t) ;
 int FUNC_6 (struct wpabuf*,size_t) ;

__attribute__((used)) static struct wpabuf * FUNC_7(u8 VAR_3, const void *VAR_4,
      u8 VAR_5, void *VAR_6,
      u8 VAR_7,
      const struct wpabuf *VAR_8)
{
 struct wpabuf *VAR_9;
 size_t VAR_10;
 int VAR_11;
 u8 VAR_12;
 size_t VAR_13 = FUNC_2(VAR_8);

 VAR_11 = VAR_13 < 256 ? 1 : 0;

 VAR_10 = 2;

 VAR_10 += VAR_11 ? sizeof(u8) : sizeof(u32);
 if (VAR_7 > 0)
  VAR_10 += 1;
 VAR_10 += VAR_5 + VAR_7 + VAR_13;
 VAR_9 = FUNC_1(VAR_10);
 if (VAR_9 == ((void*)0)) {
  FUNC_0(VAR_2, "NDEF : Failed to allocate "
      "record for build");
  return ((void*)0);
 }

 VAR_12 = VAR_3;
 if (VAR_7 > 0)
  VAR_12 |= VAR_0;
 if (VAR_11)
  VAR_12 |= VAR_1;
 FUNC_6(VAR_9, VAR_12);

 FUNC_6(VAR_9, VAR_5);

 if (VAR_11)
  FUNC_6(VAR_9, VAR_13);
 else
  FUNC_3(VAR_9, VAR_13);

 if (VAR_7 > 0)
  FUNC_6(VAR_9, VAR_7);
 FUNC_5(VAR_9, VAR_4, VAR_5);
 FUNC_5(VAR_9, VAR_6, VAR_7);
 FUNC_4(VAR_9, VAR_8);
 return VAR_9;
}
