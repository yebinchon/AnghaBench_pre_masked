
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
typedef scalar_t__ EapType ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 struct wpabuf* FUNC_0 (int ,scalar_t__,size_t,int ,int ) ;

__attribute__((used)) static struct wpabuf * FUNC_1(EapType VAR_7, size_t VAR_8,
      u8 VAR_9, u8 VAR_10)
{
 if (VAR_7 == VAR_0)
  return FUNC_0(VAR_3,
         VAR_2, VAR_8,
         VAR_9, VAR_10);
 if (VAR_7 == VAR_6)
  return FUNC_0(VAR_4,
         VAR_5, VAR_8,
         VAR_9, VAR_10);
 return FUNC_0(VAR_1, VAR_7, VAR_8, VAR_9,
        VAR_10);
}
