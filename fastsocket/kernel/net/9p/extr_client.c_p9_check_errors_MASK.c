
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct p9_req_t {int rc; } ;
struct p9_client {scalar_t__ dotu; } ;
typedef scalar_t__ int8_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,int,...) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int ,int *,scalar_t__*,int *,int ) ;
 int FUNC_5 (int ,scalar_t__,char*,char**,int*) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static int FUNC_7(struct p9_client *VAR_3, struct p9_req_t *VAR_4)
{
 int8_t VAR_5;
 int VAR_6;

 VAR_6 = FUNC_4(VAR_4->rc, ((void*)0), &VAR_5, ((void*)0), 0);
 if (VAR_6) {
  FUNC_1(VAR_1, "couldn't parse header %d\n", VAR_6);
  return VAR_6;
 }

 if (VAR_5 == VAR_2) {
  int VAR_7;
  char *VAR_8;

  VAR_6 = FUNC_5(VAR_4->rc, VAR_3->dotu, "s?d", &VAR_8, &VAR_7);
  if (VAR_6) {
   FUNC_1(VAR_1, "couldn't parse error%d\n",
         VAR_6);
   return VAR_6;
  }

  if (VAR_3->dotu)
   VAR_6 = -VAR_7;

  if (!VAR_6 || !FUNC_0(VAR_6))
   VAR_6 = FUNC_3(VAR_8, FUNC_6(VAR_8));

  FUNC_1(VAR_0, "<<< RERROR (%d) %s\n", -VAR_7, VAR_8);

  FUNC_2(VAR_8);
 } else
  VAR_6 = 0;

 return VAR_6;
}
