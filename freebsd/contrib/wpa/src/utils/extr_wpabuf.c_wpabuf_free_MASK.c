
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf_trace {scalar_t__ magic; int flags; struct wpabuf_trace* buf; } ;
struct wpabuf {scalar_t__ magic; int flags; struct wpabuf* buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (struct wpabuf_trace*) ;
 int FUNC_2 (int ,char*,scalar_t__) ;
 int FUNC_3 (char*) ;
 struct wpabuf_trace* FUNC_4 (struct wpabuf_trace*) ;

void FUNC_5(struct wpabuf *VAR_3)
{
 if (VAR_3 == ((void*)0))
  return;
 if (VAR_3->flags & VAR_1)
  FUNC_1(VAR_3->buf);
 FUNC_1(VAR_3);

}
