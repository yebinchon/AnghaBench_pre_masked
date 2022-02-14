
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int len; char* buf; scalar_t__ maxlen; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,int ,char*,char*) ;
 scalar_t__ FUNC_1 (int,struct strbuf*,struct strbuf*,int) ;

__attribute__((used)) static int
FUNC_2(int VAR_2, char *VAR_3, int VAR_4, char *VAR_5, char *VAR_6)
{
 struct strbuf VAR_7;
 int VAR_8;

 VAR_7.maxlen = 0;
 VAR_7.len = VAR_4;
 VAR_7.buf = VAR_3;

 VAR_8 = 0;
 if (FUNC_1(VAR_2, &VAR_7, (struct strbuf *) ((void*)0), VAR_8) < 0) {
  FUNC_0(VAR_6, VAR_0,
      VAR_1, "send_request: putmsg \"%s\"", VAR_5);
  return (-1);
 }
 return (0);
}
