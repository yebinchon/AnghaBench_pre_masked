
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sglist {int dummy; } ;
struct TYPE_2__ {int ext_pgs; } ;
struct mbuf {int m_len; TYPE_1__ m_ext; } ;


 int FUNC_0 (struct mbuf*) ;
 int FUNC_1 (struct mbuf*,int ) ;
 int FUNC_2 (struct sglist*,int ,int ,int ) ;
 int VAR_0 ;

int
FUNC_3(struct sglist *VAR_1, struct mbuf *VAR_2)
{


 FUNC_0(VAR_2);
 return (FUNC_2(VAR_1, VAR_2->m_ext.ext_pgs,
     FUNC_1(VAR_2, VAR_0), VAR_2->m_len));
}
