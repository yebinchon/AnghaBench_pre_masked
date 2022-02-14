
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evhttp_request {int type; int evcon; int * uri; int response_code; scalar_t__ userdone; } ;
struct evhttp_cb {int cbarg; int (* cb ) (struct evhttp_request*,int ) ;} ;
struct evhttp {int allowed_methods; int gencbarg; int (* gencb ) (struct evhttp_request*,int ) ;int callbacks; } ;
struct evbuffer {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
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
FUNC_15(struct evhttp_request *VAR_3, void *VAR_4)
{
 struct evhttp *VAR_5 = VAR_4;
 struct evhttp_cb *VAR_6 = ((void*)0);
 const char *VAR_7;


 VAR_3->userdone = 0;

 if (VAR_3->type == 0 || VAR_3->uri == ((void*)0)) {
  FUNC_10(VAR_3, VAR_3->response_code, ((void*)0));
  return;
 }

 if ((VAR_5->allowed_methods & VAR_3->type) == 0) {
  FUNC_3(("Rejecting disallowed method %x (allowed: %x)\n",
   (unsigned)VAR_3->type, (unsigned)VAR_5->allowed_methods));
  FUNC_10(VAR_3, VAR_2, ((void*)0));
  return;
 }


 VAR_7 = FUNC_8(VAR_3);
 if (VAR_7 != ((void*)0)) {
  FUNC_6(VAR_5, &VAR_5, VAR_7);
 }

 if ((VAR_6 = FUNC_5(&VAR_5->callbacks, VAR_3)) != ((void*)0)) {
  (*VAR_6->cb)(VAR_3, VAR_6->cbarg);
  return;
 }


 if (VAR_5->gencb) {
  (*VAR_5->gencb)(VAR_3, VAR_5->gencbarg);
  return;
 } else {
  char *VAR_8;
  struct evbuffer *VAR_9;

  if ((VAR_8 = FUNC_7(VAR_3->uri)) == ((void*)0)) {
   FUNC_4(VAR_3->evcon);
   return;
  }

  if ((VAR_9 = FUNC_2()) == ((void*)0)) {
   FUNC_12(VAR_8);
   FUNC_4(VAR_3->evcon);
   return;
  }

  FUNC_9(VAR_3, VAR_1, "Not Found");

  FUNC_0(VAR_9, "<html><head>" "<title>404 Not Found</title>" "</head><body>" "<h1>Not Found</h1>" "<p>The requested URL %s was not found on this server.</p>" "</body></html>\n", VAR_8);

  FUNC_12(VAR_8);

  FUNC_11(VAR_3, VAR_9);

  FUNC_1(VAR_9);

 }
}
