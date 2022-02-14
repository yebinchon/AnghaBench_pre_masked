
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mbuf_ext_pgs {int * so; int * tls; scalar_t__ trail_len; scalar_t__ hdr_len; scalar_t__ flags; scalar_t__ last_pg_len; scalar_t__ first_pg_off; scalar_t__ nrdy; scalar_t__ npgs; } ;
struct TYPE_2__ {int ext_count; int ext_free; scalar_t__ ext_size; struct mbuf_ext_pgs* ext_pgs; int ext_flags; int ext_type; } ;
struct mbuf {int m_flags; TYPE_1__ m_ext; int * m_data; } ;
typedef int m_ext_free_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct mbuf*) ;
 struct mbuf* FUNC_1 (int,int ) ;
 struct mbuf* FUNC_2 (int,int ) ;
 struct mbuf_ext_pgs* FUNC_3 (int ,int) ;
 int VAR_6 ;

struct mbuf *
FUNC_4(int VAR_7, bool VAR_8, m_ext_free_t VAR_9)
{
 struct mbuf *VAR_10;
 struct mbuf_ext_pgs *VAR_11;

 if (VAR_8)
  VAR_10 = FUNC_2(VAR_7, VAR_2);
 else
  VAR_10 = FUNC_1(VAR_7, VAR_2);
 if (VAR_10 == ((void*)0))
  return (((void*)0));

 VAR_11 = FUNC_3(VAR_6, VAR_7);
 if (VAR_11 == ((void*)0)) {
  FUNC_0(VAR_10);
  return (((void*)0));
 }
 VAR_11->npgs = 0;
 VAR_11->nrdy = 0;
 VAR_11->first_pg_off = 0;
 VAR_11->last_pg_len = 0;
 VAR_11->flags = 0;
 VAR_11->hdr_len = 0;
 VAR_11->trail_len = 0;
 VAR_11->tls = ((void*)0);
 VAR_11->so = ((void*)0);
 VAR_10->m_data = ((void*)0);
 VAR_10->m_flags |= (VAR_3 | VAR_5 | VAR_4);
 VAR_10->m_ext.ext_type = VAR_1;
 VAR_10->m_ext.ext_flags = VAR_0;
 VAR_10->m_ext.ext_count = 1;
 VAR_10->m_ext.ext_pgs = VAR_11;
 VAR_10->m_ext.ext_size = 0;
 VAR_10->m_ext.ext_free = VAR_9;
 return (VAR_10);
}
