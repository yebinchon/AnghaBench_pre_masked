
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockbuf {int sb_flags; int sb_ccc; int sb_acc; int sb_ctl; struct mbuf* sb_mbtail; struct mbuf* sb_mb; int * sb_fnrdy; struct mbuf* sb_lastrecord; } ;
struct mbuf {int m_flags; int m_len; scalar_t__ m_type; struct mbuf* m_next; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct mbuf*) ;
 scalar_t__ FUNC_2 (struct mbuf*) ;
 int FUNC_3 (struct sockbuf*) ;
 int VAR_7 ;
 int FUNC_4 (struct sockbuf*) ;
 int FUNC_5 (struct mbuf*,int ,int,int ) ;
 struct mbuf* FUNC_6 (struct mbuf*) ;
 int FUNC_7 (struct mbuf*) ;
 int FUNC_8 (struct mbuf*) ;
 int FUNC_9 (struct mbuf*,int) ;
 int FUNC_10 (struct sockbuf*,struct mbuf*) ;

void
FUNC_11(struct sockbuf *VAR_8, struct mbuf *VAR_9, struct mbuf *VAR_10)
{
 int VAR_11 = 0;
 struct mbuf *VAR_12;

 FUNC_4(VAR_8);

 while (VAR_9) {
  VAR_11 |= VAR_9->m_flags & VAR_4;
  if (VAR_9->m_len == 0 &&
      (VAR_11 == 0 ||
       (((VAR_12 = VAR_9->m_next) || (VAR_12 = VAR_10)) &&
        VAR_12->m_type == VAR_9->m_type))) {
   if (VAR_8->sb_lastrecord == VAR_9)
    VAR_8->sb_lastrecord = VAR_9->m_next;
   VAR_9 = FUNC_6(VAR_9);
   continue;
  }
  if (VAR_10 && (VAR_10->m_flags & VAR_4) == 0 &&
      FUNC_2(VAR_10) &&
      ((VAR_8->sb_flags & VAR_7) == 0) &&
      !(VAR_9->m_flags & VAR_6) &&
      !(VAR_10->m_flags & (VAR_6 | VAR_5)) &&
      !FUNC_8(VAR_9) &&
      !FUNC_8(VAR_10) &&
      VAR_9->m_len <= VAR_0 / 4 &&
      VAR_9->m_len <= FUNC_1(VAR_10) &&
      VAR_10->m_type == VAR_9->m_type) {
   FUNC_5(VAR_9, 0, VAR_9->m_len, FUNC_9(VAR_10, VAR_10->m_len));
   VAR_10->m_len += VAR_9->m_len;
   VAR_8->sb_ccc += VAR_9->m_len;
   if (VAR_8->sb_fnrdy == ((void*)0))
    VAR_8->sb_acc += VAR_9->m_len;
   if (VAR_9->m_type != VAR_2 && VAR_9->m_type != VAR_3)

    VAR_8->sb_ctl += VAR_9->m_len;
   VAR_9 = FUNC_6(VAR_9);
   continue;
  }
  if (VAR_9->m_len <= VAR_1 && (VAR_9->m_flags & VAR_5) &&
      (VAR_9->m_flags & VAR_6) == 0 &&
      !FUNC_8(VAR_9))
   (void)FUNC_7(VAR_9);
  if (VAR_10)
   VAR_10->m_next = VAR_9;
  else
   VAR_8->sb_mb = VAR_9;
  VAR_8->sb_mbtail = VAR_9;
  FUNC_10(VAR_8, VAR_9);
  VAR_10 = VAR_9;
  VAR_9->m_flags &= ~VAR_4;
  VAR_9 = VAR_9->m_next;
  VAR_10->m_next = 0;
 }
 if (VAR_11) {
  FUNC_0(VAR_10 != ((void*)0), ("sbcompress: eor && n == NULL"));
  VAR_10->m_flags |= VAR_11;
 }
 FUNC_3(VAR_8);
}
