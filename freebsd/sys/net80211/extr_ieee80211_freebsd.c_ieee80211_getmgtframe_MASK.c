
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ u_int ;
struct mbuf {int * m_data; } ;


 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct mbuf*,scalar_t__) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct mbuf*,scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 struct mbuf* FUNC_3 (int ,int ,int ) ;
 struct mbuf* FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int,int) ;

struct mbuf *
FUNC_6(uint8_t **VAR_5, int VAR_6, int VAR_7)
{
 struct mbuf *VAR_8;
 u_int VAR_9;





 VAR_9 = FUNC_5(VAR_6 + VAR_7, 4);
 FUNC_0(VAR_9 <= VAR_0, ("802.11 mgt frame too large: %u", VAR_9));
 if (VAR_9 < VAR_1) {
  VAR_8 = FUNC_4(VAR_3, VAR_2);






  if (VAR_8 != ((void*)0))
   FUNC_2(VAR_8, VAR_9);
 } else {
  VAR_8 = FUNC_3(VAR_3, VAR_2, VAR_4);
  if (VAR_8 != ((void*)0))
   FUNC_1(VAR_8, VAR_9);
 }
 if (VAR_8 != ((void*)0)) {
  VAR_8->m_data += VAR_6;
  *VAR_5 = VAR_8->m_data;
 }
 return VAR_8;
}
