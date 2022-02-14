
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct audit_watch {int path; } ;
struct audit_krule {int listnr; int filterkey; } ;
struct audit_buffer {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct audit_buffer*) ;
 int FUNC_3 (struct audit_buffer*,char*,...) ;
 int FUNC_4 (struct audit_buffer*,int ) ;
 struct audit_buffer* FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (struct audit_buffer*,char*) ;
 int FUNC_7 (struct audit_buffer*,int ) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_8(struct audit_krule *VAR_4, struct audit_watch *VAR_5, char *VAR_6)
{
 if (VAR_2) {
  struct audit_buffer *VAR_7;
  VAR_7 = FUNC_5(((void*)0), VAR_1, VAR_0);
  FUNC_3(VAR_7, "auid=%u ses=%u op=",
     FUNC_0(VAR_3),
     FUNC_1(VAR_3));
  FUNC_6(VAR_7, VAR_6);
  FUNC_3(VAR_7, " path=");
  FUNC_7(VAR_7, VAR_5->path);
  FUNC_4(VAR_7, VAR_4->filterkey);
  FUNC_3(VAR_7, " list=%d res=1", VAR_4->listnr);
  FUNC_2(VAR_7);
 }
}
