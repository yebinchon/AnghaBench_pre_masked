
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockbuf {int sb_mcnt; int sb_ccnt; int sb_mbcnt; int sb_ctl; int sb_acc; struct mbuf* sb_fnrdy; int sb_ccc; } ;
struct TYPE_2__ {scalar_t__ ext_size; } ;
struct mbuf {int m_flags; scalar_t__ m_type; TYPE_1__ m_ext; scalar_t__ m_len; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct sockbuf*) ;

void
FUNC_1(struct sockbuf *VAR_6, struct mbuf *VAR_7)
{

 FUNC_0(VAR_6);

 VAR_6->sb_ccc += VAR_7->m_len;

 if (VAR_6->sb_fnrdy == ((void*)0)) {
  if (VAR_7->m_flags & VAR_5)
   VAR_6->sb_fnrdy = VAR_7;
  else
   VAR_6->sb_acc += VAR_7->m_len;
 } else
  VAR_7->m_flags |= VAR_3;

 if (VAR_7->m_type != VAR_1 && VAR_7->m_type != VAR_2)
  VAR_6->sb_ctl += VAR_7->m_len;

 VAR_6->sb_mbcnt += VAR_0;
 VAR_6->sb_mcnt += 1;

 if (VAR_7->m_flags & VAR_4) {
  VAR_6->sb_mbcnt += VAR_7->m_ext.ext_size;
  VAR_6->sb_ccnt += 1;
 }
}
