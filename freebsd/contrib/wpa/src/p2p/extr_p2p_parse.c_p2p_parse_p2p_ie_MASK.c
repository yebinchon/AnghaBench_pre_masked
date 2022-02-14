
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct wpabuf {int dummy; } ;
struct p2p_message {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int const*) ;
 scalar_t__ FUNC_1 (int,int const*,int,struct p2p_message*) ;
 int FUNC_2 (int ,char*,int const*,int) ;
 int FUNC_3 (int ,char*,...) ;
 int* FUNC_4 (struct wpabuf const*) ;
 int FUNC_5 (struct wpabuf const*) ;

int FUNC_6(const struct wpabuf *VAR_2, struct p2p_message *VAR_3)
{
 const u8 *VAR_4 = FUNC_4(VAR_2);
 const u8 *VAR_5 = VAR_4 + FUNC_5(VAR_2);

 FUNC_3(VAR_0, "P2P: Parsing P2P IE");

 while (VAR_4 < VAR_5) {
  u16 VAR_6;
  u8 VAR_7;

  if (VAR_5 - VAR_4 < 3) {
   FUNC_3(VAR_0, "P2P: Invalid P2P attribute");
   return -1;
  }
  VAR_7 = *VAR_4++;
  VAR_6 = FUNC_0(VAR_4);
  VAR_4 += 2;
  FUNC_3(VAR_0, "P2P: Attribute %d length %u",
      VAR_7, VAR_6);
  if (VAR_6 > VAR_5 - VAR_4) {
   FUNC_3(VAR_0, "P2P: Attribute underflow "
       "(len=%u left=%d)",
       VAR_6, (int) (VAR_5 - VAR_4));
   FUNC_2(VAR_1, "P2P: Data", VAR_4, VAR_5 - VAR_4);
   return -1;
  }
  if (FUNC_1(VAR_7, VAR_4, VAR_6, VAR_3))
   return -1;
  VAR_4 += VAR_6;
 }

 return 0;
}
