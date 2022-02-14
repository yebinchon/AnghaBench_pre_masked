
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sge_qset {int dummy; } ;
struct mbuf {struct mbuf* m_nextpkt; } ;
struct coalesce_info {int count; int nbytes; } ;


 struct mbuf* FUNC_0 (struct sge_qset*) ;
 struct mbuf* FUNC_1 (struct sge_qset*,int ,struct coalesce_info*) ;
 scalar_t__ FUNC_2 (struct sge_qset*) ;
 int VAR_0 ;
 int FUNC_3 (char*,int) ;

__attribute__((used)) static struct mbuf *
FUNC_4(struct sge_qset *VAR_1)
{
 struct mbuf *VAR_2, *VAR_3, *VAR_4;
 struct coalesce_info VAR_5;


 if (FUNC_2(VAR_1) == 0)
  return FUNC_0(VAR_1);

 VAR_3 = VAR_4 = ((void*)0);
 VAR_5.count = VAR_5.nbytes = 0;
 do {
  VAR_2 = FUNC_1(VAR_1, VAR_0, &VAR_5);
  if (VAR_3 == ((void*)0)) {
   VAR_4 = VAR_3 = VAR_2;
  } else if (VAR_2 != ((void*)0)) {
   VAR_4->m_nextpkt = VAR_2;
   VAR_4 = VAR_2;
  }
 } while (VAR_2 != ((void*)0));
 if (VAR_5.count > 7)
  FUNC_3("trying to coalesce %d packets in to one WR", VAR_5.count);
 return (VAR_3);
}
