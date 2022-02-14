
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_2__ {int version; int arglen; int flags; int token; int cmd; int cmdstr; int typecookie; } ;
struct ng_mesg {int data; TYPE_1__ header; } ;
typedef int buf ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *,int*,int *) ;
 scalar_t__ FUNC_3 (int,struct ng_mesg* const,int,int *) ;
 scalar_t__ FUNC_4 (int,char const*,int ,int ,struct ng_mesg* const,int) ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (int *,int) ;
 int VAR_4 ;
 int FUNC_6 (int) ;
 int VAR_5 ;
 int FUNC_7 (struct ng_mesg* const,struct ng_mesg const*,int) ;
 int * FUNC_8 (char const*,char) ;
 int FUNC_9 (int ) ;

void
FUNC_10(const struct ng_mesg *VAR_6, const char *VAR_7)
{
 u_char VAR_8[2 * sizeof(struct ng_mesg) + VAR_0];
 struct ng_mesg *const VAR_9 = (struct ng_mesg *)VAR_8;
 struct ng_mesg *const VAR_10 = (struct ng_mesg *)VAR_9->data;
 int VAR_11, VAR_12 = -1;


 FUNC_0("NG_MESG :");
 FUNC_0("  vers   %d", VAR_6->header.version);
 FUNC_0("  arglen %u", VAR_6->header.arglen);
 FUNC_0("  flags  %x", VAR_6->header.flags);
 FUNC_0("  token  %u", VAR_6->header.token);
 FUNC_0("  cookie %s (%u)",
     FUNC_1(VAR_6->header.typecookie), VAR_6->header.typecookie);


 if (VAR_4 <= 2)
  goto fail2;



 if (FUNC_8(VAR_7, ':') == ((void*)0))
  goto fail2;


 if (FUNC_2(((void*)0), &VAR_12, ((void*)0)) < 0)
  goto fail;


 VAR_11 = VAR_6->header.arglen;
 if (VAR_11 > VAR_0)
  VAR_11 = VAR_0;
 FUNC_7(VAR_10, VAR_6, sizeof(*VAR_6) + VAR_11);
 VAR_10->header.arglen = VAR_11;


 VAR_4 -= VAR_3;


 if (FUNC_4(VAR_12, VAR_7, VAR_2,
     VAR_1, VAR_10, sizeof(*VAR_10) + VAR_10->header.arglen) < 0) {
  VAR_4 += VAR_3;
  goto fail;
 }
 if (FUNC_3(VAR_12, VAR_9, sizeof(VAR_8), ((void*)0)) < 0) {
  VAR_4 += VAR_3;
  goto fail;
 }


 VAR_4 += VAR_3;


 FUNC_0("  cmd    %s (%d)", VAR_10->header.cmdstr, VAR_10->header.cmd);
 FUNC_0("  args   %s", VAR_10->data);
 goto done;

fail:

 FUNC_0("  [error decoding message: %s]", FUNC_9(VAR_5));
fail2:
 FUNC_0("  cmd    %d", VAR_6->header.cmd);
 FUNC_0("  args (%d bytes)", VAR_6->header.arglen);
 FUNC_5((u_char *)VAR_6->data, VAR_6->header.arglen);

done:
 if (VAR_12 != -1)
  (void)FUNC_6(VAR_12);
}
