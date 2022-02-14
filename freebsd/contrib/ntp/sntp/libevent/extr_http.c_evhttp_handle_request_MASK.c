
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evhttp_request {int type; int evcon; int * uri; scalar_t__ userdone; } ;
struct evhttp_cb {int cbarg; int (* cb ) (struct evhttp_request*,int ) ;} ;
struct evhttp {int allowed_methods; int gencbarg; int (* gencb ) (struct evhttp_request*,int ) ;int callbacks; } ;
struct evbuffer {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct evbuffer*,int ,char*) ;
 int FUNC_1 (struct evbuffer*) ;
 struct evbuffer* FUNC_2 () ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ) ;
 struct evhttp_cb* FUNC_5 (int *,struct evhttp_request*) ;
 int FUNC_6 (struct evhttp*,struct evhttp**,char const*) ;
 char* FUNC_7 (int *) ;
 char* FUNC_8 (struct evhttp_request*) ;
 int FUNC_9 (struct evhttp_request*,int ,char*) ;
 int FUNC_10 (struct evhttp_request*,int ,int *) ;
 int FUNC_11 (struct evhttp_request*,struct evbuffer*) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (struct evhttp_request*,int ) ;
 int FUNC_14 (struct evhttp_request*,int ) ;

__attribute__((used)) static void
FUNC_15(struct evhttp_request *VAR_4, void *VAR_5)
{
 struct evhttp *VAR_6 = VAR_5;
 struct evhttp_cb *VAR_7 = ((void*)0);
 const char *VAR_8;


 VAR_4->userdone = 0;

 if (VAR_4->type == 0 || VAR_4->uri == ((void*)0)) {
  FUNC_10(VAR_4, VAR_1, ((void*)0));
  return;
 }

 if ((VAR_6->allowed_methods & VAR_4->type) == 0) {
  FUNC_3(("Rejecting disallowed method %x (allowed: %x)\n",
   (unsigned)VAR_4->type, (unsigned)VAR_6->allowed_methods));
  FUNC_10(VAR_4, VAR_3, ((void*)0));
  return;
 }


 VAR_8 = FUNC_8(VAR_4);
 if (VAR_8 != ((void*)0)) {
  FUNC_6(VAR_6, &VAR_6, VAR_8);
 }

 if ((VAR_7 = FUNC_5(&VAR_6->callbacks, VAR_4)) != ((void*)0)) {
  (*VAR_7->cb)(VAR_4, VAR_7->cbarg);
  return;
 }


 if (VAR_6->gencb) {
  (*VAR_6->gencb)(VAR_4, VAR_6->gencbarg);
  return;
 } else {
  char *VAR_9;
  struct evbuffer *VAR_10;

  if ((VAR_9 = FUNC_7(VAR_4->uri)) == ((void*)0)) {
   FUNC_4(VAR_4->evcon);
   return;
  }

  if ((VAR_10 = FUNC_2()) == ((void*)0)) {
   FUNC_12(VAR_9);
   FUNC_4(VAR_4->evcon);
   return;
  }

  FUNC_9(VAR_4, VAR_2, "Not Found");

  FUNC_0(VAR_10, "<html><head>" "<title>404 Not Found</title>" "</head><body>" "<h1>Not Found</h1>" "<p>The requested URL %s was not found on this server.</p>" "</body></html>\n", VAR_9);

  FUNC_12(VAR_9);

  FUNC_11(VAR_4, VAR_10);

  FUNC_1(VAR_10);

 }
}
