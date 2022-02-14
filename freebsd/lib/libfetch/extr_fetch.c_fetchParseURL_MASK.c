
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct url {int netrcfd; char* scheme; char* host; int port; char* doc; int pwd; int user; } ;


 int FUNC_0 (char*,char*,int ,int ,char*,int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct url* FUNC_1 (int,int) ;
 char* FUNC_2 (int ,char const*,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (struct url*) ;
 int FUNC_5 (unsigned char) ;
 char* FUNC_6 (int) ;
 int * FUNC_7 (char const*,char) ;
 scalar_t__ FUNC_8 (char*,int ) ;
 char* FUNC_9 (char const*) ;
 int FUNC_10 (char const*) ;
 char* FUNC_11 (char const*,char*) ;
 int FUNC_12 (char const*,char*) ;
 char* FUNC_13 (char const*,char*) ;
 void* FUNC_14 (unsigned char) ;
 int FUNC_15 (int ) ;

struct url *
FUNC_16(const char *VAR_9)
{
 char *VAR_10;
 const char *VAR_11, *VAR_12;
 struct url *VAR_13;
 int VAR_14, VAR_15;


 if ((VAR_13 = FUNC_1(1, sizeof(*VAR_13))) == ((void*)0)) {
  FUNC_3();
  return (((void*)0));
 }
 VAR_13->netrcfd = -1;


 if ((VAR_11 = FUNC_13(VAR_9, ":/"))) {
                if (VAR_11 - VAR_9 > VAR_7)
                        goto ouch;
                for (VAR_14 = 0; VAR_9 + VAR_14 < VAR_11; VAR_14++)
                        VAR_13->scheme[VAR_14] = FUNC_14((unsigned char)VAR_9[VAR_14]);
  VAR_9 = ++VAR_11;




  if (VAR_9[1] == '/')
   VAR_9 = (VAR_11 += 2);
 } else {
  VAR_11 = VAR_9;
 }
 if (!*VAR_9 || *VAR_9 == '/' || *VAR_9 == '.' ||
     (VAR_13->scheme[0] == '\0' &&
  FUNC_7(VAR_9, '/') == ((void*)0) && FUNC_7(VAR_9, ':') == ((void*)0)))
  goto nohost;

 VAR_11 = FUNC_11(VAR_9, "/@");
 if (VAR_11 && *VAR_11 == '@') {

  VAR_12 = FUNC_2(VAR_13->user, VAR_9, VAR_8);


  if (*VAR_12 == ':')
   VAR_12 = FUNC_2(VAR_13->pwd, VAR_12 + 1, VAR_6);

  VAR_11++;
 } else {
  VAR_11 = VAR_9;
 }


 if (*VAR_11 == '[') {
  VAR_12 = VAR_11 + 1 + FUNC_12(VAR_11 + 1, ":0123456789ABCDEFabcdef");
  if (*VAR_12++ != ']')
   goto ouch;
 } else {

  VAR_12 = VAR_11 + FUNC_12(VAR_11, "-." "0123456789"
      "ABCDEFGHIJKLMNOPQRSTUVWXYZ" "_"
      "abcdefghijklmnopqrstuvwxyz");
 }
 if ((*VAR_12 != '\0' && *VAR_12 != '/' && *VAR_12 != ':') || VAR_12 - VAR_11 > VAR_2)
  goto ouch;
 for (VAR_14 = 0; VAR_11 + VAR_14 < VAR_12; VAR_14++)
  VAR_13->host[VAR_14] = FUNC_14((unsigned char)VAR_11[VAR_14]);
 VAR_13->host[VAR_14] = '\0';
 VAR_11 = VAR_12;


 if (*VAR_11 == ':') {
  for (VAR_15 = 0, VAR_12 = ++VAR_11; *VAR_12 && (*VAR_12 != '/'); VAR_12++) {
   if (*VAR_12 >= '0' && *VAR_12 <= '9' && VAR_15 < VAR_0 / 10) {
    VAR_15 = VAR_15 * 10 + (*VAR_12 - '0');
   } else {

    FUNC_15(VAR_5);
    goto ouch;
   }
  }
  if (VAR_15 < 1 || VAR_15 > VAR_1)
   goto ouch;
  VAR_13->port = VAR_15;
  VAR_11 = VAR_12;
 }

nohost:

 if (!*VAR_11)
  VAR_11 = "/";

 if (FUNC_8(VAR_13->scheme, VAR_3) == 0 ||
     FUNC_8(VAR_13->scheme, VAR_4) == 0) {
  const char VAR_16[] = "0123456789abcdef";


  if ((VAR_10 = FUNC_6(FUNC_10(VAR_11) * 3 + 1)) == ((void*)0)) {
   FUNC_3();
   goto ouch;
  }
  VAR_13->doc = VAR_10;
  while (*VAR_11 != '\0') {
   if (!FUNC_5((unsigned char)*VAR_11)) {
    *VAR_10++ = *VAR_11++;
   } else {
    *VAR_10++ = '%';
    *VAR_10++ = VAR_16[((unsigned int)*VAR_11) >> 4];
    *VAR_10++ = VAR_16[((unsigned int)*VAR_11) & 0xf];
    VAR_11++;
   }
  }
  *VAR_10 = '\0';
 } else if ((VAR_13->doc = FUNC_9(VAR_11)) == ((void*)0)) {
  FUNC_3();
  goto ouch;
 }

 FUNC_0("scheme:   \"%s\"\n"
     "user:     \"%s\"\n"
     "password: \"%s\"\n"
     "host:     \"%s\"\n"
     "port:     \"%d\"\n"
     "document: \"%s\"\n",
     VAR_13->scheme, VAR_13->user, VAR_13->pwd,
     VAR_13->host, VAR_13->port, VAR_13->doc);

 return (VAR_13);

ouch:
 FUNC_4(VAR_13);
 return (((void*)0));
}
