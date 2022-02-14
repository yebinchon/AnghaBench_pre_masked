
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct wpabuf*,int const*,int ) ;
 int FUNC_2 (struct wpabuf*,int ) ;

__attribute__((used)) static void FUNC_3(struct wpabuf *VAR_3,
      const u8 *VAR_4)
{
 if (VAR_4) {
  FUNC_0(VAR_1, "DPP: I-Bootstrap Key Hash");
  FUNC_2(VAR_3, VAR_0);
  FUNC_2(VAR_3, VAR_2);
  FUNC_1(VAR_3, VAR_4, VAR_2);
 }
}
