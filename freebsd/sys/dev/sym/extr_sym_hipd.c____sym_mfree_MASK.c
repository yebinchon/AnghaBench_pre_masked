
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* h; } ;
typedef TYPE_1__ m_pool_s ;
struct TYPE_5__ {struct TYPE_5__* next; } ;
typedef TYPE_2__ m_link_s ;
typedef int m_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,void*,int) ;

__attribute__((used)) static void FUNC_2(m_pool_s *VAR_2, void *VAR_3, int VAR_4)
{
 int VAR_5 = 0;
 int VAR_6 = (1 << VAR_1);
 m_link_s *VAR_7;
 m_addr_t VAR_8, VAR_9;
 m_link_s *VAR_10 = VAR_2->h;





 if (VAR_4 > VAR_0)
  return;

 while (VAR_4 > VAR_6) {
  VAR_6 <<= 1;
  ++VAR_5;
 }

 VAR_8 = (m_addr_t) VAR_3;

 while (1) {






  VAR_9 = VAR_8 ^ VAR_6;
  VAR_7 = &VAR_10[VAR_5];
  while (VAR_7->next && VAR_7->next != (m_link_s *) VAR_9) {
   VAR_7 = VAR_7->next;
  }
  if (!VAR_7->next) {
   ((m_link_s *) VAR_8)->next = VAR_10[VAR_5].next;
   VAR_10[VAR_5].next = (m_link_s *) VAR_8;
   break;
  }
  VAR_7->next = VAR_7->next->next;
  VAR_8 = VAR_8 & VAR_9;
  VAR_6 <<= 1;
  ++VAR_5;
 }
}
