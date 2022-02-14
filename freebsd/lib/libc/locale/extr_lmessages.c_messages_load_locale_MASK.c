
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lc_messages_T {int * nostr; int * yesstr; } ;
struct xlocale_messages {int buffer; struct lc_messages_T locale; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*,int*,int *,char*,int ,int ,char const**) ;
 void* VAR_3 ;

__attribute__((used)) static int
FUNC_1(struct xlocale_messages *VAR_4, int *VAR_5, const char *VAR_6)
{
 int VAR_7;
 struct lc_messages_T *VAR_8 = &VAR_4->locale;

 VAR_7 = FUNC_0(VAR_6, VAR_5,
    &VAR_4->buffer, "LC_MESSAGES",
    VAR_0, VAR_1,
    (const char **)VAR_8);
 if (VAR_7 == VAR_2) {
  if (VAR_8->yesstr == ((void*)0))
   VAR_8->yesstr = VAR_3;
  if (VAR_8->nostr == ((void*)0))
   VAR_8->nostr = VAR_3;
 }
 return (VAR_7);
}
