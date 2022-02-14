
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {int m_data; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int,int,int ) ;
 struct mbuf* FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (char*,int) ;

int FUNC_6(int VAR_4, int VAR_5, int VAR_6)
{
 int VAR_7 = VAR_6;
 while (VAR_7) {
  FUNC_1(VAR_5 <= VAR_0 - 128, ("mbuf clusters are too small"));

  struct mbuf *VAR_8 = FUNC_4(VAR_2, VAR_1, VAR_3);
  if (FUNC_2(VAR_8 == ((void*)0))) {
   FUNC_5("Failed to allocate mbuf for hardware pool %d\n", VAR_4);
   break;
  }

  VAR_8->m_data += 128 - (((uintptr_t)VAR_8->m_data) & 0x7f);
  *(struct mbuf **)(VAR_8->m_data - sizeof(void *)) = VAR_8;
  FUNC_3(VAR_8->m_data, VAR_4, FUNC_0(VAR_5/128));
  VAR_7--;
 }
 return (VAR_6 - VAR_7);
}
