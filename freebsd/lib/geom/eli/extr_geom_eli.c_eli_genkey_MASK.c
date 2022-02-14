
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hmac_ctx {int dummy; } ;
struct gctl_req {int dummy; } ;
struct g_eli_metadata {int dummy; } ;


 int FUNC_0 (struct gctl_req*,int,char*,struct hmac_ctx*,int *,int ) ;
 int FUNC_1 (struct gctl_req*,struct g_eli_metadata*,int,struct hmac_ctx*) ;
 int FUNC_2 (struct hmac_ctx*,unsigned char*,int ) ;
 int FUNC_3 (struct hmac_ctx*,int *,int ) ;
 int FUNC_4 (struct gctl_req*,char*) ;
 int FUNC_5 (struct gctl_req*,char*) ;

__attribute__((used)) static unsigned char *
FUNC_6(struct gctl_req *VAR_0, struct g_eli_metadata *VAR_1, unsigned char *VAR_2,
    bool VAR_3)
{
 struct hmac_ctx VAR_4;
 bool VAR_5;
 int VAR_6;

 VAR_5 =
     FUNC_5(VAR_0, VAR_3 ? "nonewpassphrase" : "nopassphrase");

 FUNC_3(&VAR_4, ((void*)0), 0);

 VAR_6 = FUNC_0(VAR_0, VAR_3, "keyfile", &VAR_4, ((void*)0), 0);
 if (VAR_6 == -1)
  return (((void*)0));
 else if (VAR_6 == 0 && VAR_5) {
  FUNC_4(VAR_0, "No key components given.");
  return (((void*)0));
 }

 if (FUNC_1(VAR_0, VAR_1, VAR_3, &VAR_4) == -1)
  return (((void*)0));

 FUNC_2(&VAR_4, VAR_2, 0);

 return (VAR_2);
}
