
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef int val ;
struct url {int scheme; int port; int host; } ;
typedef int http_headerbuf_t ;
typedef scalar_t__ hdr_t ;
struct TYPE_10__ {int sd; int err; } ;
typedef TYPE_1__ conn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int *) ;
 int VAR_9 ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int ,int ,int,int) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,struct url*,int) ;
 int FUNC_6 () ;
 scalar_t__ VAR_10 ;


 int FUNC_7 (TYPE_1__*,char*,...) ;
 scalar_t__ FUNC_8 (TYPE_1__*) ;
 scalar_t__ FUNC_9 (TYPE_1__*,int *,char const**) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ,int ,int ,int*,int) ;
 scalar_t__ FUNC_13 (int ,int ) ;

__attribute__((used)) static conn_t *
FUNC_14(struct url *VAR_11, struct url *VAR_12, const char *VAR_13)
{
 struct url *VAR_14;
 conn_t *VAR_15;
 hdr_t VAR_16;
 http_headerbuf_t VAR_17;
 const char *VAR_18;
 int VAR_19;
 int VAR_20, VAR_21;
 int VAR_22;




 VAR_20 = VAR_0;


 VAR_19 = FUNC_0('v');
 if (FUNC_0('4'))
  VAR_20 = VAR_0;





 VAR_14 = (VAR_12 != ((void*)0)) ? VAR_12 : VAR_11;

 if ((VAR_15 = FUNC_3(VAR_14->host, VAR_14->port, VAR_20, VAR_19)) == ((void*)0))

  return (((void*)0));
 FUNC_11(&VAR_17);
 if (FUNC_13(VAR_11->scheme, VAR_7) == 0 && VAR_12) {
  FUNC_7(VAR_15, "CONNECT %s:%d HTTP/1.1",
      VAR_11->host, VAR_11->port);
  FUNC_7(VAR_15, "Host: %s:%d",
      VAR_11->host, VAR_11->port);
  FUNC_7(VAR_15, "");
  if (FUNC_8(VAR_15) != VAR_4) {
   FUNC_10(VAR_15->err);
   goto ouch;
  }

  if (FUNC_4(VAR_15) < 0) {
   FUNC_6();
   goto ouch;
  }
  do {
   switch ((VAR_16 = FUNC_9(VAR_15, &VAR_17, &VAR_18))) {
   case 128:
    FUNC_6();
    goto ouch;
   case 129:
    FUNC_10(VAR_5);
    goto ouch;
   default:
                 ;
   }
  } while (VAR_16 > VAR_10);
 }
 if (FUNC_13(VAR_11->scheme, VAR_7) == 0 &&
     FUNC_5(VAR_15, VAR_11, VAR_19) == -1) {

  VAR_9 = VAR_3;
  FUNC_6();
  goto ouch;
 }

 VAR_21 = 1;
 FUNC_12(VAR_15->sd, VAR_6, VAR_8, &VAR_21, sizeof(VAR_21));

 FUNC_1(&VAR_17);
 return (VAR_15);
ouch:
 VAR_22 = VAR_9;
 FUNC_1(&VAR_17);
 FUNC_2(VAR_15);
 VAR_9 = VAR_22;
 return (((void*)0));
}
