
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int ext_size; } ;
struct TYPE_3__ {int len; } ;
struct mbuf {TYPE_2__ m_ext; int m_len; TYPE_1__ m_pkthdr; } ;
struct ffec_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct mbuf* FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static struct mbuf *
FUNC_1(struct ffec_softc *VAR_3)
{
 struct mbuf *VAR_4;

 VAR_4 = FUNC_0(VAR_1, VAR_0, VAR_2);
 if (VAR_4 != ((void*)0))
  VAR_4->m_pkthdr.len = VAR_4->m_len = VAR_4->m_ext.ext_size;

 return (VAR_4);
}
