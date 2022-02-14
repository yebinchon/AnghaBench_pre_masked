
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mbuf {int dummy; } ;
struct m_tag {int dummy; } ;
struct ifnet {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ifnet*) ;
 int FUNC_1 (int ,char*,int ,...) ;
 struct m_tag* FUNC_2 (int ,int ,int,int ) ;
 struct m_tag* FUNC_3 (struct mbuf*,int ,int ,struct m_tag*) ;
 int FUNC_4 (struct mbuf*,struct m_tag*) ;

int
FUNC_5(struct ifnet *VAR_4, struct mbuf *VAR_5, uint32_t VAR_6,
    int VAR_7)
{
 struct m_tag *VAR_8;
 int VAR_9;

 VAR_9 = 1;
 VAR_8 = ((void*)0);
 while ((VAR_8 = FUNC_3(VAR_5, VAR_6, 0, VAR_8)) != ((void*)0)) {
  if (*(struct ifnet **)(VAR_8 + 1) == VAR_4) {
   FUNC_1(VAR_2, "%s: loop detected\n", FUNC_0(VAR_4));
   return (VAR_0);
  }
  VAR_9++;
 }
 if (VAR_9 > VAR_7) {
  FUNC_1(VAR_2,
      "%s: if_output recursively called too many times(%d)\n",
      FUNC_0(VAR_4), VAR_9);
  return (VAR_0);
 }
 VAR_8 = FUNC_2(VAR_6, 0, sizeof(struct ifnet *), VAR_3);
 if (VAR_8 == ((void*)0))
  return (VAR_1);
 *(struct ifnet **)(VAR_8 + 1) = VAR_4;
 FUNC_4(VAR_5, VAR_8);
 return (0);
}
