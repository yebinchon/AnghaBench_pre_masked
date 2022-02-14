
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct url_stat {int dummy; } ;
struct url {char const* scheme; int offset; int doc; } ;
struct TYPE_7__ {int ref; } ;
typedef TYPE_1__ conn_t ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* VAR_4 ;
 char* VAR_5 ;
 int FUNC_0 (struct url*) ;
 scalar_t__ VAR_6 ;
 TYPE_1__* FUNC_1 (struct url*,struct url*,char const*) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int ,struct url_stat*) ;
 int * FUNC_5 (TYPE_1__*,char const*,int ,int,int ,char const*) ;
 int * FUNC_6 (struct url*,char*,struct url_stat*,struct url*,char const*) ;
 scalar_t__ FUNC_7 (char const*,char*) ;

FILE *
FUNC_8(struct url *VAR_7, const char *VAR_8, struct url_stat *VAR_9,
    struct url *VAR_10, const char *VAR_11)
{
 conn_t *VAR_12;
 int VAR_13;


 if (VAR_10 && (FUNC_7(VAR_10->scheme, VAR_4) == 0 ||
     FUNC_7(VAR_10->scheme, VAR_5) == 0)) {
  if (FUNC_7(VAR_8, "STAT") == 0)
   return (FUNC_6(VAR_7, "HEAD", VAR_9, VAR_10, VAR_11));
  else if (FUNC_7(VAR_8, "RETR") == 0)
   return (FUNC_6(VAR_7, "GET", VAR_9, VAR_10, VAR_11));




 }


 VAR_12 = FUNC_1(VAR_7, VAR_10, VAR_11);
 if (VAR_10)
  FUNC_0(VAR_10);
 if (VAR_12 == ((void*)0))
  return (((void*)0));


 if (FUNC_2(VAR_12, VAR_7->doc) == -1)
  goto errsock;


 if (VAR_9 && FUNC_4(VAR_12, VAR_7->doc, VAR_9) == -1
     && VAR_6 != VAR_0
     && VAR_6 != VAR_1)
  goto errsock;


 if (FUNC_7(VAR_8, "STAT") == 0) {
  --VAR_12->ref;
  FUNC_3(VAR_12);
  return (FILE *)1;
 }
 if (FUNC_7(VAR_8, "STOR") == 0 || FUNC_7(VAR_8, "APPE") == 0)
  VAR_13 = VAR_3;
 else
  VAR_13 = VAR_2;


 return (FUNC_5(VAR_12, VAR_8, VAR_7->doc, VAR_13, VAR_7->offset, VAR_11));

errsock:
 FUNC_3(VAR_12);
 return (((void*)0));
}
