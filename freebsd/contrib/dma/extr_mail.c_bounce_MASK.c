
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct queue {char* sender; char* id; int mailf; int queue; } ;
struct qitem {scalar_t__* sender; char* addr; int mailf; } ;
typedef int line ;
typedef int bounceq ;
struct TYPE_2__ {int features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 char* VAR_8 ;
 scalar_t__ FUNC_1 (struct queue*,scalar_t__*,int ) ;
 int FUNC_2 (struct queue*,int) ;
 TYPE_1__ VAR_9 ;
 int FUNC_3 (struct qitem*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int * FUNC_6 (char*,int,int ) ;
 int FUNC_7 (int ,char*,char*,char*,char*,char*,char*,scalar_t__*,char*,char*,char*,char*,char*,char*,char const*,char*) ;
 size_t FUNC_8 (char*,int,int,int ) ;
 scalar_t__ FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (char*,int,int,int ) ;
 char* FUNC_11 () ;
 scalar_t__ FUNC_12 (struct queue*) ;
 scalar_t__ FUNC_13 (struct queue*) ;
 char* FUNC_14 () ;
 int FUNC_15 (struct queue*) ;
 int FUNC_16 (char*,char*) ;
 int FUNC_17 (char*) ;
 int FUNC_18 (int ,char*,...) ;

void
FUNC_19(struct qitem *VAR_10, const char *VAR_11)
{
 struct queue VAR_12;
 char VAR_13[1000];
 size_t VAR_14;
 int VAR_15;


 if (VAR_10->sender[0] == 0) {
  FUNC_18(VAR_6, "can not bounce a bounce message, discarding");
  FUNC_4(VAR_2);
 }

 FUNC_2(&VAR_12, sizeof(VAR_12));
 FUNC_0(&VAR_12.queue);
 VAR_12.sender = "";
 if (FUNC_1(&VAR_12, VAR_10->sender, VAR_0) != 0)
  goto fail;

 if (FUNC_13(&VAR_12) != 0)
  goto fail;

 FUNC_18(VAR_5, "delivery failed, bouncing as %s", VAR_12.id);
 FUNC_16("%s", VAR_12.id);

 VAR_15 = FUNC_7(VAR_12.mailf,
  "Received: from MAILER-DAEMON\n"
  "\tid %s\n"
  "\tby %s (%s);\n"
  "\t%s\n"
  "X-Original-To: <%s>\n"
  "From: MAILER-DAEMON <>\n"
  "To: %s\n"
  "Subject: Mail delivery failed\n"
  "Message-Id: <%s@%s>\n"
  "Date: %s\n"
  "\n"
  "This is the %s at %s.\n"
  "\n"
  "There was an error delivering your mail to <%s>.\n"
  "\n"
  "%s\n"
  "\n"
  "%s\n"
  "\n",
  VAR_12.id,
  FUNC_11(), VAR_8,
  FUNC_14(),
  VAR_10->addr,
  VAR_10->sender,
  VAR_12.id, FUNC_11(),
  FUNC_14(),
  VAR_8, FUNC_11(),
  VAR_10->addr,
  VAR_11,
  VAR_9.features & VAR_3 ?
      "Original message follows." :
      "Message headers follow.");
 if (VAR_15 < 0)
  goto fail;

 if (FUNC_9(VAR_10->mailf, 0, VAR_7) != 0)
  goto fail;
 if (VAR_9.features & VAR_3) {
  while ((VAR_14 = FUNC_8(VAR_13, 1, sizeof(VAR_13), VAR_10->mailf)) > 0) {
   if (FUNC_10(VAR_13, 1, VAR_14, VAR_12.mailf) != VAR_14)
    goto fail;
  }
 } else {
  while (!FUNC_5(VAR_10->mailf)) {
   if (FUNC_6(VAR_13, sizeof(VAR_13), VAR_10->mailf) == ((void*)0))
    break;
   if (VAR_13[0] == '\n')
    break;
   if (FUNC_10(VAR_13, FUNC_17(VAR_13), 1, VAR_12.mailf) != 1)
    goto fail;
  }
 }

 if (FUNC_12(&VAR_12) != 0)
  goto fail;


 FUNC_3(VAR_10);

 FUNC_15(&VAR_12);


fail:
 FUNC_18(VAR_4, "error creating bounce: %m");
 FUNC_3(VAR_10);
 FUNC_4(VAR_1);
}
