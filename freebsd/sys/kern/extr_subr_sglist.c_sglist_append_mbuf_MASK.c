
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sgsave {int dummy; } ;
struct sglist {scalar_t__ sg_maxseg; } ;
struct mbuf {scalar_t__ m_len; int m_flags; int m_data; struct mbuf* m_next; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sglist*,struct sgsave) ;
 int FUNC_1 (struct sglist*,struct sgsave) ;
 int FUNC_2 (struct sglist*,int ,scalar_t__) ;
 int FUNC_3 (struct sglist*,struct mbuf*) ;

int
FUNC_4(struct sglist *VAR_2, struct mbuf *VAR_3)
{
 struct sgsave VAR_4;
 struct mbuf *VAR_5;
 int VAR_6;

 if (VAR_2->sg_maxseg == 0)
  return (VAR_0);

 VAR_6 = 0;
 FUNC_1(VAR_2, VAR_4);
 for (VAR_5 = VAR_3; VAR_5 != ((void*)0); VAR_5 = VAR_5->m_next) {
  if (VAR_5->m_len > 0) {
   if ((VAR_5->m_flags & VAR_1) != 0)
    VAR_6 = FUNC_3(VAR_2, VAR_5);
   else
    VAR_6 = FUNC_2(VAR_2, VAR_5->m_data,
        VAR_5->m_len);
   if (VAR_6) {
    FUNC_0(VAR_2, VAR_4);
    return (VAR_6);
   }
  }
 }
 return (0);
}
