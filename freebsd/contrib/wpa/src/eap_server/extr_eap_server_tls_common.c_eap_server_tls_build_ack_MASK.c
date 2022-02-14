
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct wpabuf* FUNC_0 (int,int,int ,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct wpabuf*,int) ;

struct wpabuf * FUNC_3(u8 VAR_2, int VAR_3, int VAR_4)
{
 struct wpabuf *VAR_5;

 VAR_5 = FUNC_0(VAR_3, 1, VAR_0, VAR_2);
 if (VAR_5 == ((void*)0))
  return ((void*)0);
 FUNC_1(VAR_1, "SSL: Building ACK");
 FUNC_2(VAR_5, VAR_4);
 return VAR_5;
}
